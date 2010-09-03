#ifndef UTILS_ENVIRONMENT_HXX
#define UTILS_ENVIRONMENT_HXX 1

#include <Poco/Foundation.h>
#include <Poco/Environment.h>
#include <Poco/Exception.h>

#include <string>
using namespace std ;

#include <boost/lexical_cast.hpp>
using boost::lexical_cast ;

template <class ValueType>
class Environment
{
	public:
		static ValueType getValue (const string& p_name, const ValueType& p_default)
		{
			ValueType returnValue (p_default) ;
			try
			{
				string val = Poco::Environment::get (p_name) ;
				returnValue = lexical_cast<ValueType> (val) ;
			} 
			catch (Poco::NotFoundException&) { }
			catch (boost::bad_lexical_cast&) { }

			return returnValue ;
		}

		static void setValue (const string& p_name, const ValueType& p_value)
		{
			Poco::Environment::set (p_name, lexical_cast<string> (p_value)) ;
		}
} ;

#endif
