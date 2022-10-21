/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  SpeedSensor_header
 *       Module:  SpeedSensor
 *
 *  Description:  all SpeedSensor types and functions declared here to be included by any file to use SpeedSensor APIs
 *  
 *********************************************************************************************************************/
#ifndef SpeedSensor_HEADER_H
#define SpeedSensor_HEADER_H

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
//struct for Speed sensor
typedef struct
{
//data about pins that the sensor connected to
}SpeedSensor_type;
//enum for the reading of the sensor (10Kmh,20Kmh,..)
typedef enum{...}SpeedState;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void SpeedSensorInit( SpeedSensor_type );
SpeedState SpeedSensorRead( SpeedSensor_type );
 
#endif  /* SpeedSensor_HEADER_H*/

/**********************************************************************************************************************
 *  END OF FILE: SpeedSensor_header.h
 *********************************************************************************************************************/