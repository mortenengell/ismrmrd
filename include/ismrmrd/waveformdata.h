/* ISMRMRD Waveform  Data Set */

/**
 * @file waveformdata.h
 */

#pragma once
#ifndef WAVEFORM_DATA_H
#define WAVEFORM_DATA_H

//Probably still needed
#include "ismrmrd/ismrmrd.h"
#include <hdf5.h>

#ifdef __cplusplus
#include <string>
namespace ISMRMRD {
#endif

/**
 *   A class for storing a dataset including waveforms
 *
 */
	class WaveformData 
{
	private://members
		
	private:
		void init();

	public:
		WaveformData();

		~WaveformData();



};


} /* ISMRMRD namespace */

#endif /* WAVEFORM_DATA_H */
