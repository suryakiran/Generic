#ifndef SINGLETON_TEMPLATE_HXX
#define SINGLETON_TEMPLATE_HXX 1

#include <boost/utility.hpp>
#include <boost/thread/once.hpp>
#include <boost/scoped_ptr.hpp>

template <class T>
class Singleton : private boost::noncopyable
{
	public:
		static T& instance (void)
		{
			boost::call_once (init, flag) ;
			return *t ;
		}

		static void init (void)
		{
			t.reset(new T()) ;
			t->initImp() ;
		}

	protected:
		~Singleton() { }
		Singleton()  { }

	private:
		static boost::scoped_ptr <T> t ;
		static boost::once_flag flag ;
} ;

template <class T> boost::scoped_ptr <T> Singleton <T>:: t(0) ;
template <class T> boost::once_flag Singleton <T> :: flag = BOOST_ONCE_INIT ;

#endif
