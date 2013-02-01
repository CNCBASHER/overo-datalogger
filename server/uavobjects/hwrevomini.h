/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup HwRevoMini HwRevoMini 
 * @brief Selection of optional hardware configurations.
 *
 * Autogenerated files and functions for HwRevoMini Object
 
 * @{ 
 *
 * @file       hwrevomini.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the HwRevoMini object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: hwrevomini.xml. 
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

#ifndef HWREVOMINI_H
#define HWREVOMINI_H

// Object constants
#define HWREVOMINI_OBJID 0xE3A2C812
#define HWREVOMINI_ISSINGLEINST 1
#define HWREVOMINI_ISSETTINGS 1
#define HWREVOMINI_NUMBYTES 9

// Generic interface functions
int32_t HwRevoMiniInitialize();
UAVObjHandle HwRevoMiniHandle();
void HwRevoMiniSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint8_t RcvrPort;
    uint8_t MainPort;
    uint8_t FlexiPort;
    uint8_t RadioPort;
    uint8_t USB_HIDPort;
    uint8_t USB_VCPPort;
    uint8_t DSMxBind;
    uint8_t GyroRange;
    uint8_t AccelRange;

} __attribute__((packed)) __attribute__((aligned(4))) HwRevoMiniData;

// Typesafe Object access functions
/**
 * @function HwRevoMiniGet(dataOut)
 * @brief Populate a HwRevoMiniData object
 * @param[out] dataOut 
 */
static inline int32_t HwRevoMiniGet(HwRevoMiniData *dataOut) { return UAVObjGetData(HwRevoMiniHandle(), dataOut); }

static inline int32_t HwRevoMiniSet(const HwRevoMiniData *dataIn) { return UAVObjSetData(HwRevoMiniHandle(), dataIn); }

static inline int32_t HwRevoMiniInstGet(uint16_t instId, HwRevoMiniData *dataOut) { return UAVObjGetInstanceData(HwRevoMiniHandle(), instId, dataOut); }

static inline int32_t HwRevoMiniInstSet(uint16_t instId, const HwRevoMiniData *dataIn) { return UAVObjSetInstanceData(HwRevoMiniHandle(), instId, dataIn); }

static inline int32_t HwRevoMiniConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(HwRevoMiniHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t HwRevoMiniConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(HwRevoMiniHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t HwRevoMiniCreateInstance() { return UAVObjCreateInstance(HwRevoMiniHandle(), &HwRevoMiniSetDefaults); }

static inline void HwRevoMiniRequestUpdate() { UAVObjRequestUpdate(HwRevoMiniHandle()); }

static inline void HwRevoMiniRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(HwRevoMiniHandle(), instId); }

static inline void HwRevoMiniUpdated() { UAVObjUpdated(HwRevoMiniHandle()); }

static inline void HwRevoMiniInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(HwRevoMiniHandle(), instId); }

static inline int32_t HwRevoMiniGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(HwRevoMiniHandle(), dataOut); }

static inline int32_t HwRevoMiniSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(HwRevoMiniHandle(), dataIn); }

static inline int8_t HwRevoMiniReadOnly() { return UAVObjReadOnly(HwRevoMiniHandle()); }

// Field information
// Field RcvrPort information
/* Enumeration options for field RcvrPort */
typedef enum { HWREVOMINI_RCVRPORT_DISABLED=0, HWREVOMINI_RCVRPORT_PWM=1, HWREVOMINI_RCVRPORT_PPM=2, HWREVOMINI_RCVRPORT_PPMPWM=3, HWREVOMINI_RCVRPORT_PPMOUTPUTS=4, HWREVOMINI_RCVRPORT_OUTPUTS=5 } HwRevoMiniRcvrPortOptions;
// Field MainPort information
/* Enumeration options for field MainPort */
typedef enum { HWREVOMINI_MAINPORT_DISABLED=0, HWREVOMINI_MAINPORT_TELEMETRY=1, HWREVOMINI_MAINPORT_GPS=2, HWREVOMINI_MAINPORT_SBUS=3, HWREVOMINI_MAINPORT_DSM2=4, HWREVOMINI_MAINPORT_DSMX10BIT=5, HWREVOMINI_MAINPORT_DSMX11BIT=6, HWREVOMINI_MAINPORT_DEBUGCONSOLE=7, HWREVOMINI_MAINPORT_COMBRIDGE=8 } HwRevoMiniMainPortOptions;
// Field FlexiPort information
/* Enumeration options for field FlexiPort */
typedef enum { HWREVOMINI_FLEXIPORT_DISABLED=0, HWREVOMINI_FLEXIPORT_TELEMETRY=1, HWREVOMINI_FLEXIPORT_GPS=2, HWREVOMINI_FLEXIPORT_I2C=3, HWREVOMINI_FLEXIPORT_DSM2=4, HWREVOMINI_FLEXIPORT_DSMX10BIT=5, HWREVOMINI_FLEXIPORT_DSMX11BIT=6, HWREVOMINI_FLEXIPORT_DEBUGCONSOLE=7, HWREVOMINI_FLEXIPORT_COMBRIDGE=8 } HwRevoMiniFlexiPortOptions;
// Field RadioPort information
/* Enumeration options for field RadioPort */
typedef enum { HWREVOMINI_RADIOPORT_DISABLED=0, HWREVOMINI_RADIOPORT_TELEMETRY=1 } HwRevoMiniRadioPortOptions;
// Field USB_HIDPort information
/* Enumeration options for field USB_HIDPort */
typedef enum { HWREVOMINI_USB_HIDPORT_USBTELEMETRY=0, HWREVOMINI_USB_HIDPORT_RCTRANSMITTER=1, HWREVOMINI_USB_HIDPORT_DISABLED=2 } HwRevoMiniUSB_HIDPortOptions;
// Field USB_VCPPort information
/* Enumeration options for field USB_VCPPort */
typedef enum { HWREVOMINI_USB_VCPPORT_USBTELEMETRY=0, HWREVOMINI_USB_VCPPORT_COMBRIDGE=1, HWREVOMINI_USB_VCPPORT_DEBUGCONSOLE=2, HWREVOMINI_USB_VCPPORT_DISABLED=3 } HwRevoMiniUSB_VCPPortOptions;
// Field DSMxBind information
// Field GyroRange information
/* Enumeration options for field GyroRange */
typedef enum { HWREVOMINI_GYRORANGE_250=0, HWREVOMINI_GYRORANGE_500=1, HWREVOMINI_GYRORANGE_1000=2, HWREVOMINI_GYRORANGE_2000=3 } HwRevoMiniGyroRangeOptions;
// Field AccelRange information
/* Enumeration options for field AccelRange */
typedef enum { HWREVOMINI_ACCELRANGE_2G=0, HWREVOMINI_ACCELRANGE_4G=1, HWREVOMINI_ACCELRANGE_8G=2, HWREVOMINI_ACCELRANGE_16G=3 } HwRevoMiniAccelRangeOptions;


// set/Get functions
extern void HwRevoMiniRcvrPortSet( uint8_t *NewRcvrPort );
extern void HwRevoMiniRcvrPortGet( uint8_t *NewRcvrPort );
extern void HwRevoMiniMainPortSet( uint8_t *NewMainPort );
extern void HwRevoMiniMainPortGet( uint8_t *NewMainPort );
extern void HwRevoMiniFlexiPortSet( uint8_t *NewFlexiPort );
extern void HwRevoMiniFlexiPortGet( uint8_t *NewFlexiPort );
extern void HwRevoMiniRadioPortSet( uint8_t *NewRadioPort );
extern void HwRevoMiniRadioPortGet( uint8_t *NewRadioPort );
extern void HwRevoMiniUSB_HIDPortSet( uint8_t *NewUSB_HIDPort );
extern void HwRevoMiniUSB_HIDPortGet( uint8_t *NewUSB_HIDPort );
extern void HwRevoMiniUSB_VCPPortSet( uint8_t *NewUSB_VCPPort );
extern void HwRevoMiniUSB_VCPPortGet( uint8_t *NewUSB_VCPPort );
extern void HwRevoMiniDSMxBindSet( uint8_t *NewDSMxBind );
extern void HwRevoMiniDSMxBindGet( uint8_t *NewDSMxBind );
extern void HwRevoMiniGyroRangeSet( uint8_t *NewGyroRange );
extern void HwRevoMiniGyroRangeGet( uint8_t *NewGyroRange );
extern void HwRevoMiniAccelRangeSet( uint8_t *NewAccelRange );
extern void HwRevoMiniAccelRangeGet( uint8_t *NewAccelRange );


#endif // HWREVOMINI_H

/**
 * @}
 * @}
 */