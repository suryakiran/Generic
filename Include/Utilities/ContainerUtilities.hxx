#ifndef CONTAINER_UTILITIES_HXX
#define CONTAINER_UTILITIES_HXX 1

template <class SrcContainerType, class DestContainerType>
void copy (const SrcContainerType& p_src, DestContainerType& p_dest,
	       bool p_clearDestination = true)
{
	if (p_clearDestination) p_dest.clear() ;

	copy (p_src.begin(), p_src.end(),
			inserter (p_dest, p_dest.end())) ;
}

#endif
