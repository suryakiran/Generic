#ifndef Concatenate_hpp_INCLUDED
#define Concatenate_hpp_INCLUDED

#include <boost/preprocessor/cat.hpp>

#ifndef CAT 
#define CAT BOOST_PP_CAT
#endif

#ifndef CAT12_3
#define CAT3(a, b, c) BOOST_PP_CAT(BOOST_PP_CAT(a, b), c)
#endif

#ifndef CAT1_23
#define CAT3(a, b, c) BOOST_PP_CAT(a, BOOST_PP_CAT(b, c))
#endif

#ifndef CAT3
#define CAT3 CAT12_3
#endif


#endif
