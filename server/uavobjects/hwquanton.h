/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup HwQuanton HwQuanton 
 * @brief Selection of optional hardware configurations.
 *
 * Autogenerated files and functions for HwQuanton Object
 
 * @{ 
 *
 * @file       hwquanton.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the HwQuanton object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: hwquanton.xml. 
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

#ifndef HWQUANTON_H
#define HWQUANTON_H

// Object constants
#define HWQUANTON_OBJID 0x2B4FF8BA
#define HWQUANTON_ISSINGLEINST 1
#define HWQUANTON_ISSETTINGS 1
#define HWQUANTON_NUMBYTES 11

// Generic interface functions
int32_t HwQuantonInitialize();
UAVObjHandle HwQuantonHandle();
void HwQuantonSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint8_t RcvrPort;
    uint8_t Uart1;
    uint8_t Uart2;
    uint8_t Uart3;
    uint8_t Uart4;
    uint8_t Uart5;
    uint8_t USB_HIDPort;
    uint8_t USB_VCPPort;
    uint8_t DSMxBind;
    uint8_t GyroRange;
    uint8_t AccelRange;

} __attribute__((packed)) __attribute__((aligned(4))) HwQuantonData;

// Typesafe Object access functions
/**
 * @function HwQuantonGet(dataOut)
 * @brief Populate a HwQuantonData object
 * @param[out] dataOut 
 */
static inline int32_t HwQuantonGet(HwQuantonData *dataOut) { return UAVObjGetData(HwQuantonHandle(), dataOut); }

static inline int32_t HwQuantonSet(const HwQuantonData *dataIn) { return UAVObjSetData(HwQuantonHandle(), dataIn); }

static inline int32_t HwQuantonInstGet(uint16_t instId, HwQuantonData *dataOut) { return UAVObjGetInstanceData(HwQuantonHandle(), instId, dataOut); }

static inline int32_t HwQuantonInstSet(uint16_t instId, const HwQuantonData *dataIn) { return UAVObjSetInstanceData(HwQuantonHandle(), instId, dataIn); }

static inline int32_t HwQuantonConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(HwQuantonHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t HwQuantonConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(HwQuantonHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t HwQuantonCreateInstance() { return UAVObjCreateInstance(HwQuantonHandle(), &HwQuantonSetDefaults); }

static inline void HwQuantonRequestUpdate() { UAVObjRequestUpdate(HwQuantonHandle()); }

static inline void HwQuantonRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(HwQuantonHandle(), instId); }

static inline void HwQuantonUpdated() { UAVObjUpdated(HwQuantonHandle()); }

static inline void HwQuantonInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(HwQuantonHandle(), instId); }

static inline int32_t HwQuantonGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(HwQuantonHandle(), dataOut); }

static inline int32_t HwQuantonSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(HwQuantonHandle(), dataIn); }

static inline int8_t HwQuantonReadOnly() { return UAVObjReadOnly(HwQuantonHandle()); }

// Field information
// Field RcvrPort information
/* Enumeration options for field RcvrPort */
typedef enum { HWQUANTON_RCVRPORT_DISABLED=0, HWQUANTON_RCVRPORT_PWM=1, HWQUANTON_RCVRPORT_PPM=2, HWQUANTON_RCVRPORT_PPMPWM=3, HWQUANTON_RCVRPORT_PPMOUTPUTS=4, HWQUANTON_RCVRPORT_OUTPUTS=5 } HwQuantonRcvrPortOptions;
// Field Uart1 information
/* Enumeration options for field Uart1 */
typedef enum { HWQUANTON_UART1_DISABLED=0, HWQUANTON_UART1_TELEMETRY=1, HWQUANTON_UART1_GPS=2, HWQUANTON_UART1_I2C=3, HWQUANTON_UART1_DSM2=4, HWQUANTON_UART1_DSMX10BIT=5, HWQUANTON_UART1_DSMX11BIT=6, HWQUANTON_UART1_DEBUGCONSOLE=7, HWQUANTON_UART1_COMBRIDGE=8 } HwQuantonUart1Options;
// Field Uart2 information
/* Enumeration options for field Uart2 */
typedef enum { HWQUANTON_UART2_DISABLED=0, HWQUANTON_UART2_TELEMETRY=1, HWQUANTON_UART2_GPS=2, HWQUANTON_UART2_SBUS=3, HWQUANTON_UART2_DSM2=4, HWQUANTON_UART2_DSMX10BIT=5, HWQUANTON_UART2_DSMX11BIT=6, HWQUANTON_UART2_DEBUGCONSOLE=7, HWQUANTON_UART2_COMBRIDGE=8 } HwQuantonUart2Options;
// Field Uart3 information
/* Enumeration options for field Uart3 */
typedef enum { HWQUANTON_UART3_DISABLED=0, HWQUANTON_UART3_TELEMETRY=1, HWQUANTON_UART3_GPS=2, HWQUANTON_UART3_I2C=3, HWQUANTON_UART3_DSM2=4, HWQUANTON_UART3_DSMX10BIT=5, HWQUANTON_UART3_DSMX11BIT=6, HWQUANTON_UART3_DEBUGCONSOLE=7, HWQUANTON_UART3_COMBRIDGE=8 } HwQuantonUart3Options;
// Field Uart4 information
/* Enumeration options for field Uart4 */
typedef enum { HWQUANTON_UART4_DISABLED=0, HWQUANTON_UART4_TELEMETRY=1, HWQUANTON_UART4_GPS=2, HWQUANTON_UART4_DSM2=3, HWQUANTON_UART4_DSMX10BIT=4, HWQUANTON_UART4_DSMX11BIT=5, HWQUANTON_UART4_DEBUGCONSOLE=6, HWQUANTON_UART4_COMBRIDGE=7 } HwQuantonUart4Options;
// Field Uart5 information
/* Enumeration options for field Uart5 */
typedef enum { HWQUANTON_UART5_DISABLED=0, HWQUANTON_UART5_TELEMETRY=1, HWQUANTON_UART5_GPS=2, HWQUANTON_UART5_DSM2=3, HWQUANTON_UART5_DSMX10BIT=4, HWQUANTON_UART5_DSMX11BIT=5, HWQUANTON_UART5_DEBUGCONSOLE=6, HWQUANTON_UART5_COMBRIDGE=7 } HwQuantonUart5Options;
// Field USB_HIDPort information
/* Enumeration options for field USB_HIDPort */
typedef enum { HWQUANTON_USB_HIDPORT_USBTELEMETRY=0, HWQUANTON_USB_HIDPORT_RCTRANSMITTER=1, HWQUANTON_USB_HIDPORT_DISABLED=2 } HwQuantonUSB_HIDPortOptions;
// Field USB_VCPPort information
/* Enumeration options for field USB_VCPPort */
typedef enum { HWQUANTON_USB_VCPPORT_USBTELEMETRY=0, HWQUANTON_USB_VCPPORT_COMBRIDGE=1, HWQUANTON_USB_VCPPORT_DEBUGCONSOLE=2, HWQUANTON_USB_VCPPORT_DISABLED=3 } HwQuantonUSB_VCPPortOptions;
// Field DSMxBind information
// Field GyroRange information
/* Enumeration options for field GyroRange */
typedef enum { HWQUANTON_GYRORANGE_250=0, HWQUANTON_GYRORANGE_500=1, HWQUANTON_GYRORANGE_1000=2, HWQUANTON_GYRORANGE_2000=3 } HwQuantonGyroRangeOptions;
// Field AccelRange information
/* Enumeration options for field AccelRange */
typedef enum { HWQUANTON_ACCELRANGE_2G=0, HWQUANTON_ACCELRANGE_4G=1, HWQUANTON_ACCELRANGE_8G=2, HWQUANTON_ACCELRANGE_16G=3 } HwQuantonAccelRangeOptions;


// set/Get functions
extern void HwQuantonRcvrPortSet( uint8_t *NewRcvrPort );
extern void HwQuantonRcvrPortGet( uint8_t *NewRcvrPort );
extern void HwQuantonUart1Set( uint8_t *NewUart1 );
extern void HwQuantonUart1Get( uint8_t *NewUart1 );
extern void HwQuantonUart2Set( uint8_t *NewUart2 );
extern void HwQuantonUart2Get( uint8_t *NewUart2 );
extern void HwQuantonUart3Set( uint8_t *NewUart3 );
extern void HwQuantonUart3Get( uint8_t *NewUart3 );
extern void HwQuantonUart4Set( uint8_t *NewUart4 );
extern void HwQuantonUart4Get( uint8_t *NewUart4 );
extern void HwQuantonUart5Set( uint8_t *NewUart5 );
extern void HwQuantonUart5Get( uint8_t *NewUart5 );
extern void HwQuantonUSB_HIDPortSet( uint8_t *NewUSB_HIDPort );
extern void HwQuantonUSB_HIDPortGet( uint8_t *NewUSB_HIDPort );
extern void HwQuantonUSB_VCPPortSet( uint8_t *NewUSB_VCPPort );
extern void HwQuantonUSB_VCPPortGet( uint8_t *NewUSB_VCPPort );
extern void HwQuantonDSMxBindSet( uint8_t *NewDSMxBind );
extern void HwQuantonDSMxBindGet( uint8_t *NewDSMxBind );
extern void HwQuantonGyroRangeSet( uint8_t *NewGyroRange );
extern void HwQuantonGyroRangeGet( uint8_t *NewGyroRange );
extern void HwQuantonAccelRangeSet( uint8_t *NewAccelRange );
extern void HwQuantonAccelRangeGet( uint8_t *NewAccelRange );


#endif // HWQUANTON_H

/**
 * @}
 * @}
 */
