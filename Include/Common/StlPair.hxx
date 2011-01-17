#ifndef STL_PAIR_HXX
#define STL_PAIR_HXX 1

#include <utility>

#include <boost/preprocessor/cat.hpp>

#ifndef DEFINE_PAIR
#define DEFINE_PAIR(p_first, p_second, p_name)\
	typedef std::pair<p_first, p_second> BOOST_PP_CAT(p_name, Pair);\

#endif

DEFINE_PAIR(int, int, Int);
DEFINE_PAIR(std::string, std::string, String);
DEFINE_PAIR(int, std::string, IntString);
DEFINE_PAIR(std::string, int, StringInt);

#endif
