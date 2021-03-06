/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup FixedWingAirspeeds FixedWingAirspeeds
 * @brief Settings for the @ref FixedWingPathFollowerModule
 *
 * Autogenerated files and functions for FixedWingAirspeeds Object
 * @{ 
 *
 * @file       fixedwingairspeeds.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the FixedWingAirspeeds object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: fixedwingairspeeds.xml. 
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include "openpilot.h"
#include "fixedwingairspeeds.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t FixedWingAirspeedsInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(FIXEDWINGAIRSPEEDS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(FIXEDWINGAIRSPEEDS_OBJID,
			FIXEDWINGAIRSPEEDS_ISSINGLEINST, FIXEDWINGAIRSPEEDS_ISSETTINGS, FIXEDWINGAIRSPEEDS_NUMBYTES, &FixedWingAirspeedsSetDefaults);

	// Done
	if (handle != 0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void FixedWingAirspeedsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	FixedWingAirspeedsData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(FixedWingAirspeedsData));
	data.AirSpeedMax = 20;
	data.CruiseSpeed = 15;
	data.BestClimbRateSpeed = 11;
	data.StallSpeedClean = 8;
	data.StallSpeedDirty = 8;
	data.VerticalVelMax = 10;

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.flags =
		ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
		ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
		1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		UPDATEMODE_ONCHANGE << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
	metadata.telemetryUpdatePeriod = 0;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdatePeriod = 0;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle FixedWingAirspeedsHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void FixedWingAirspeedsAirSpeedMaxSet( float *NewAirSpeedMax )
{
	UAVObjSetDataField(FixedWingAirspeedsHandle(), (void*)NewAirSpeedMax, offsetof( FixedWingAirspeedsData, AirSpeedMax), sizeof(float));
}
void FixedWingAirspeedsAirSpeedMaxGet( float *NewAirSpeedMax )
{
	UAVObjGetDataField(FixedWingAirspeedsHandle(), (void*)NewAirSpeedMax, offsetof( FixedWingAirspeedsData, AirSpeedMax), sizeof(float));
}
void FixedWingAirspeedsCruiseSpeedSet( float *NewCruiseSpeed )
{
	UAVObjSetDataField(FixedWingAirspeedsHandle(), (void*)NewCruiseSpeed, offsetof( FixedWingAirspeedsData, CruiseSpeed), sizeof(float));
}
void FixedWingAirspeedsCruiseSpeedGet( float *NewCruiseSpeed )
{
	UAVObjGetDataField(FixedWingAirspeedsHandle(), (void*)NewCruiseSpeed, offsetof( FixedWingAirspeedsData, CruiseSpeed), sizeof(float));
}
void FixedWingAirspeedsBestClimbRateSpeedSet( float *NewBestClimbRateSpeed )
{
	UAVObjSetDataField(FixedWingAirspeedsHandle(), (void*)NewBestClimbRateSpeed, offsetof( FixedWingAirspeedsData, BestClimbRateSpeed), sizeof(float));
}
void FixedWingAirspeedsBestClimbRateSpeedGet( float *NewBestClimbRateSpeed )
{
	UAVObjGetDataField(FixedWingAirspeedsHandle(), (void*)NewBestClimbRateSpeed, offsetof( FixedWingAirspeedsData, BestClimbRateSpeed), sizeof(float));
}
void FixedWingAirspeedsStallSpeedCleanSet( float *NewStallSpeedClean )
{
	UAVObjSetDataField(FixedWingAirspeedsHandle(), (void*)NewStallSpeedClean, offsetof( FixedWingAirspeedsData, StallSpeedClean), sizeof(float));
}
void FixedWingAirspeedsStallSpeedCleanGet( float *NewStallSpeedClean )
{
	UAVObjGetDataField(FixedWingAirspeedsHandle(), (void*)NewStallSpeedClean, offsetof( FixedWingAirspeedsData, StallSpeedClean), sizeof(float));
}
void FixedWingAirspeedsStallSpeedDirtySet( float *NewStallSpeedDirty )
{
	UAVObjSetDataField(FixedWingAirspeedsHandle(), (void*)NewStallSpeedDirty, offsetof( FixedWingAirspeedsData, StallSpeedDirty), sizeof(float));
}
void FixedWingAirspeedsStallSpeedDirtyGet( float *NewStallSpeedDirty )
{
	UAVObjGetDataField(FixedWingAirspeedsHandle(), (void*)NewStallSpeedDirty, offsetof( FixedWingAirspeedsData, StallSpeedDirty), sizeof(float));
}
void FixedWingAirspeedsVerticalVelMaxSet( float *NewVerticalVelMax )
{
	UAVObjSetDataField(FixedWingAirspeedsHandle(), (void*)NewVerticalVelMax, offsetof( FixedWingAirspeedsData, VerticalVelMax), sizeof(float));
}
void FixedWingAirspeedsVerticalVelMaxGet( float *NewVerticalVelMax )
{
	UAVObjGetDataField(FixedWingAirspeedsHandle(), (void*)NewVerticalVelMax, offsetof( FixedWingAirspeedsData, VerticalVelMax), sizeof(float));
}


/**
 * @}
 */

