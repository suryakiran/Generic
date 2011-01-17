#ifndef STL_MAP_HXX
#define STL_MAP_HXX 1

#include <Common/Concatenate.hpp>

#include <map>
#include <string>

#ifndef DEFINE_MAP
#define DEFINE_MAP(p_key, p_value, p_name)\
	typedef std::map<p_key, p_value> CAT(p_name, Map);\
	typedef CAT(p_name, Map::iterator) CAT(p_name, MapIter);\
	typedef CAT(p_name, Map::const_iterator) CAT(p_name, MapIterC);\
	typedef CAT(p_name, Map::value_type) CAT(p_name, MapValue)
#endif

DEFINE_MAP(int, int, Int);
DEFINE_MAP(std::string, std::string, String);
DEFINE_MAP(std::string, int, StringInt);
DEFINE_MAP(int, std::string, StringInt);

#include <Common/StlPair.hxx>

#endif
