/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  DoorSensor_header
 *       Module:  DoorSensor
 *
 *  Description:  all DoorSensor types and functions declared here to be included by any file to use DoorSensor APIs
 *  
 *********************************************************************************************************************/
#ifndef DoorSensor_HEADER_H
#define DoorSensor_HEADER_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
//struct for Door sensor
typedef struct
{
//data about pins that the sensor connected to
}DoorSensor_type;
//enum for the reading of the sensor (opened/closed)
typedef enum{...}DoorState;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void DoorSensorInit( DoorSensor_type );
DoorState DoorSensorRead( DoorSensor_type );
 
#endif  /* DoorSensor_HEADER_H*/

/**********************************************************************************************************************
 *  END OF FILE: DoorSensor_header.h
 *********************************************************************************************************************/
