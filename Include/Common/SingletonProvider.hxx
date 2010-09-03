#ifndef SINGLETON_PROVIDER_HXX
#define SINGLETON_PROVIDER_HXX 1

#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std ;

#include <common/singletonprovider.hxx>

template<typename DerivedType, typename KeyType, typename ValueType>
class SingletonProvider : public Singleton<DerivedType>
{
	template <typename DerivedType>
	friend class Singleton ;

	public:
		bool has_variable (const KeyType& p_key)
		{
			typename map<KeyType, ValueType*>::const_iterator iter ;

			iter = m_varMap.find (p_key) ;
			if (iter == m_varMap.end()) return false ;
			return true ;
		}

		void clear_data (const KeyType& p_key)
		{
			typename map<KeyType, ValueType*>::iterator iter ;
			iter = m_varMap.find (p_key) ;
			if (iter == m_varMap.end()) 
				return ;

			delete iter->second ;
			m_varMap.erase (iter) ;
		}

		void clear_data (void) 
		{
			typename map<KeyType, ValueType*>::iterator iter ;
			for (iter = m_varMap.begin(); iter != m_varMap.end(); ++iter)
				delete iter->second ;

			m_varMap.clear() ;
		}

		int size (void) 
		{
			return static_cast<int>(m_varMap.size()) ;
		}

		vector<KeyType> items (void)
		{
			vector<KeyType> vk ;
			typename map<KeyType, ValueType*>::const_iterator iter ;

			for (iter = m_varMap.begin(); 
					iter != m_varMap.end(); 
					++iter)
			{
				vk.push_back (iter->first) ;
			}

			return vk ;
		}

		void items (set<KeyType>& p_items) 
		{
			typename map<KeyType, ValueType*>::const_iterator iter ;

			for (iter = m_varMap.begin(); 
					iter != m_varMap.end(); 
					++iter)
			{
				p_items.insert (iter->first) ;
			}
		}

		virtual ~SingletonProvider() { }

	protected:
		map<KeyType, ValueType*> m_varMap ;
} ;

#endif
