#ifndef STL_LIST_HXX
#define STL_LIST_HXX 1

#include <Common/Concatenate.hpp>

#include <list>
#include <string>

#ifndef DEFINE_LIST
#define DEFINE_LIST(p_type, p_name)\
	typedef std::list<p_type> CAT(p_name, List);\
	typedef CAT(p_name, List::iterator) CAT(p_name, ListIter);\
	typedef CAT(p_name, List::reverse_iterator) CAT(p_name, ListRIter);\
	typedef CAT(p_name, List::const_iterator) CAT(p_name, ListIterC);\
	typedef CAT(p_name, List::const_reverse_iterator) CAT(p_name, ListRIterC);
#endif

DEFINE_LIST(int, Int);
DEFINE_LIST(long, Long);
DEFINE_LIST(float, Float);
DEFINE_LIST(double, Double);
DEFINE_LIST(std::string, String);

#endif
