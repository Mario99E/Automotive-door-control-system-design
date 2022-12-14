/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  GPIO_header
 *       Module:  GPIO
 *
 *  Description:  GPIO_header to intialization of all public types&function that should be included to any file to use GPIO Module    
 *  
 *********************************************************************************************************************/
#ifndef GPIO_HEADER_H
#define GPIO_HEADER_H

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
//enum for all ports in the controller
typedef enum { PORTA,PORRB,..}PORT_type;
//enum for direction
typedef enum {INPUT,OUTPUT} Direction_type;
//..any other config. like PULLUP/PullDown enum can be added 

//sturcure for pin_config
typedef struct 
{
	PORT_type myPort;
	int muPin;
	Direction_type myDir;
	//any user config values
}PIN_config;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void InitPORT(PORT_type, Direction_type,..); //any other config. like PULLUP/PullDown can be passed as parameter
void InitPin(Pin_config);
int ReadPort(PORT_type);
void WritePort(PORT_type,int value);
int ReadPIN(PORT_type,int PinNum);
void WritePIN(PORT_type,int PinNum,int value);

#endif  /* GPIO_HEADER_H*/

/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/
