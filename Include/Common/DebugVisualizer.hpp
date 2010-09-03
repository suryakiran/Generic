#ifndef MY_DEBUG_VISUALIZER_HPP
#define MY_DEBUG_VISUALIZER_HPP 1

#ifndef DEBUG_MIC
	#if defined(DEBUG) && defined(_MSC_VER) && (_MSC_VER <= 1400)
		#define DEBUG_MIC 1
		#ifndef BOOST_MULTI_INDEX_LIMIT_INDEXED_BY_SIZE
			#define BOOST_MULTI_INDEX_LIMIT_INDEXED_BY_SIZE 5
		#endif
		
		#ifndef BOOST_MULTI_INDEX_LIMIT_TAG_SIZE
			#define BOOST_MULTI_INDEX_LIMIT_TAG_SIZE 3
		#endif
		
		#define BOOST_MULTI_INDEX_LIMIT_COMPOSITE_KEY_SIZE 5 
		#include <Common/mic_visualizer.hpp>
	#else
		#define DEBUG_MIC 0
	#endif
#endif

#endif
