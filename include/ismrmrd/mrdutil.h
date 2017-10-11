
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

typedef std::map<uint32_t , std::vector<uint32_t> >		vector_map;
typedef  vector_map::iterator							map_iterator;



uint32_t map_size(vector_map mymap){
	uint32_t size = 0;
	for (map_iterator it = mymap.begin(); it != mymap.end(); it++) {
		size += sizeof(it->first);
		size += (it->second).size() * sizeof(uint32_t);
	}
	return  size;
}

#endif /*ISMRMRDUTILS*/
