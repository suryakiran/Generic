#ifndef STL_VECTOR_HXX
#define STL_VECTOR_HXX 1

#include <Common/Concatenate.hpp>
#include <set>
#include <string>

#ifndef DEFINE_SET
#define DEFINE_SET(p_type, p_name)\
	typedef std::set<p_type> CAT(p_name, Set);\
	typedef CAT(p_name, Set::iterator) CAT(p_name, SetIter);\
	typedef CAT(p_name, Set::const_iterator) CAT(p_name, SetIterC)

#endif

DEFINE_SET(int, Int);
DEFINE_SET(long, Long);
DEFINE_SET(short, Short);
DEFINE_SET(std::string, String);

#endif
