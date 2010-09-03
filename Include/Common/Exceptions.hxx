#ifndef EXCEPTIONS_HXX
#define EXCEPTIONS_HXX 1

#include <exception>
#include <string>
#include <sstream>

#include <boost/preprocessor/cat.hpp>
using namespace std ;

#define EXCEPTION_CLASS(klass_name,base_class)                          \
  class klass_name : public base_class                                  \
  {                                                                     \
  public:                                                               \
    klass_name (const string& s) : m_description (s) { }                \
    virtual ~klass_name () throw () { }                                 \
	  virtual const char* what () const throw () { return m_description.c_str() ; } \
	  template<class T> klass_name& operator<< (T val) {                \
		  ostringstream os ;                                            \
		  os << m_description << " " << val ;                           \
		  m_description = os.str() ;                                    \
		  return *this ;                                                \
	  }                                                                 \
  protected:                                                            \
	string m_description ;                                              \
  } 

#define DLL_EXCEPTION_CLASS(module_name,klass_name,base_class)                      \
  class klass_name : public base_class                                  \
  {                                                                     \
  public:                                                               \
  BOOST_PP_CAT(DLL, module_name) klass_name (const string& s) : m_description (s) { }     \
  BOOST_PP_CAT(DLL, module_name) virtual ~klass_name () throw () { }                      \
  BOOST_PP_CAT(DLL, module_name) virtual const char* what () const throw () { return m_description.c_str() ; } \
    template<class T> klass_name& operator<< (T val) {                \
        ostringstream os ;                                            \
        os << m_description << " " << val ;                           \
        m_description = os.str() ;                                    \
        return *this ;                                                \
    }                                                                 \
  protected:                                                          \
    string m_description ;                                            \
  } 

#define STD_EXCEPTION_CLASS(klass_name) EXCEPTION_CLASS(klass_name, std::exception)
#define MODULE_DLL_EXCEPTION_CLASS(module_name, klass_name) \
    DLL_EXCEPTION_CLASS(module_name, BOOST_PP_CAT(klass_name, Exception), std::exception)

#endif
