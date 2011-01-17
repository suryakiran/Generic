#ifndef STL_VECTOR_HXX
#define STL_VECTOR_HXX 1

#include <Common/Concatenate.hpp>
#include <vector>
#include <string>

#ifndef DEFINE_VECTOR
#define DEFINE_VECTOR(p_type, p_name)\
	typedef std::vector<p_type> CAT(p_name, Vector);\
	typedef CAT(p_name, Vector::iterator) CAT(p_name, VecIter);\
	typedef CAT(p_name, Vector::reverse_iterator) CAT(p_name, VecRIter);\
	typedef CAT(p_name, Vector::const_iterator) CAT(p_name, VecIterC);\
	typedef CAT(p_name, Vector::const_reverse_iterator) CAT(p_name, VecRIterC);
#endif

DEFINE_VECTOR(int, Int);
DEFINE_VECTOR(float, Float);
DEFINE_VECTOR(double, Double);
DEFINE_VECTOR(long, Long);
DEFINE_VECTOR(short, Short);
DEFINE_VECTOR(std::string, String);

#endif
