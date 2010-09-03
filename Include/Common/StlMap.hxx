#ifndef STL_MAP_HXX
#define STL_MAP_HXX 1

#include <map>
#include <string>

typedef std::map<std::string, std::string> StringMap;
typedef StringMap::value_type StringMapValue;
typedef StringMap::iterator StringMapIter;
typedef StringMap::const_iterator StringMapIterC;

typedef std::map<int, int> IntMap;
typedef IntMap::value_type IntMapValue;
typedef IntMap::iterator IntMapIter;
typedef IntMap::const_iterator IntMapIterC;

typedef std::map<int, std::string> IntStringMap;
typedef IntStringMap::value_type IntStringMapValue;
typedef IntStringMap::iterator IntStringMapIter;
typedef IntStringMap::const_iterator IntStringMapIterC;

typedef std::map<std::string, int> StringIntMap;
typedef StringIntMap::value_type StringIntMapValue;
typedef StringIntMap::iterator StringIntMapIter;
typedef StringIntMap::const_iterator StringIntMapIterC;

#include <Common/StlPair.hxx>

#endif
