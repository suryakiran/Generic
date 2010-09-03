#ifndef SIGNAL_BASE_HXX
#define SIGNAL_BASE_HXX 1

#include "DllSignals.hxx"
#include <Common/Exceptions.hxx>
#include <Common/Singleton.hxx>

#include <string>
#include <map>
#include <set>

using namespace std ;

#include <boost/fusion/container.hpp>
#include <boost/fusion/sequence/intrinsic.hpp>
#include <boost/fusion/functional.hpp>
#include <boost/fusion/iterator.hpp>
#include <boost/fusion/include/for_each.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/signals2.hpp>

namespace fusion = boost::fusion;

#define BOOST_SIGNAL(...) boost::shared_ptr< boost::signals2::signal < __VA_ARGS__ > >

class DLLSignals SignalBase
{
	public:
		~SignalBase () ;

		bool blockSignals (void)         { return m_blockSignals ; }
		void blockSignals (bool b) { m_blockSignals = b ; }

	protected:
		SignalBase () ;

	private:
		bool m_blockSignals ;
} ;

#endif

