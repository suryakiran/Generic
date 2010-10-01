#ifndef STL_VECTOR_HXX
#define STL_VECTOR_HXX 1

#include <vector>
#include <string>

typedef std::vector<std::string> StringVec ;
typedef StringVec::iterator StringVecIter;
typedef StringVec::const_iterator StringVecIterC;

typedef std::vector<int> IntVec ;
typedef IntVec::iterator IntVecIter;
typedef IntVec::const_iterator IntVecIterC;

typedef std::vector<long> LongVec ;
typedef LongVec::iterator LongVecIter;
typedef LongVec::const_iterator LongVecIterC;

typedef std::vector<double> DoubleVec ;
typedef DoubleVec::iterator DoubleVecIter;
typedef DoubleVec::const_iterator DoubleVecIterC;

typedef std::vector<float> FloatVec ;
typedef FloatVec::iterator FloatVecIter;
typedef FloatVec::const_iterator FloatVecIterC;

#endif
