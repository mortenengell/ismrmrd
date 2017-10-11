
//this file include helper functions for the ismrmrd 
//headeronly??
// author : 
#pragma once
#ifndef ISMRMRDUTILS_H
#define ISMRMRDUTILS_H
#include <map>// is this the other way for now just for the highlights and autocomp
#include <vector>

/**********
* a helper function to calculate the size of the map in a wavedform header
* @return 
* @param mymap  // the map to be calulated
***********/
//typedefs



#ifdef __cplusplus


	template <typename T>
	uint32_t map_size(std::map<uint32_t, std::vector<T> > mymap) {
		uint32_t size = 0;

		for (mymap::const_iterator it = mymap.begin(); it != mymap.end(); it++) {
			size += sizeof(it->first);
			size += (it->second).size() * sizeof(T);
		}
		return  size;
	}
	//overload for non vector version
	template <typename T>
	uint32_t map_size(std::map<uint32_t, T > mymap) {
		uint32_t size = 0;

		for (mymap::const_iterator it = mymap.begin(); it != mymap.end(); it++) {
			size += sizeof(it->first);
			size += sizeof(T);
		}
		return  size;
	}


#endif //__cplusplus
#endif /*ISMRMRDUTILS*/
