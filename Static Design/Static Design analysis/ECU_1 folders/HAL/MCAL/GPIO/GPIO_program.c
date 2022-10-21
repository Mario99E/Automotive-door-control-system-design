/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  GPIO_program.c
 *        \brief  
 *		the implementation of all GPIO functions
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "GPIO_header.h"
#include "GPIO_private.h"



/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/******************************************************************************
* \Syntax          : void InitPORT(PORT_type thePort, Direction_type theDir,..)       
* \Description     : Initialize specific port to specific configrations                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion 
			thePort 	pick the specific port needed to be intialized
			theDir		set the direction of the port
			..		any other config. like PULLUP/PullDown can be passed as parameter	                    
* \Parameters (out): None                                                      
* \Return value:   : void
* 
*******************************************************************************/
void InitPORT(PORT_type thePort, Direction_type theDir,..) 
{
	
	//function implementation
}


/******************************************************************************
* \Syntax          : void InitPin(Pin_config myPin)      
* \Description     : Initialize specific pin to specific configrations                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion 
			myPin		struct contain all configrations of the pin as elements	                    
* \Parameters (out): None                                                      
* \Return value:   : void
* 
*******************************************************************************/
void InitPin(Pin_config);
{
	
	//function implementation
}



/******************************************************************************
* \Syntax          : int ReadPort(PORT_type myPort)     
* \Description     : Read port value                                   
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion 
			myPort		The port to be read
* \Parameters (out): None                                                      
* \Return value:   : int 	the value on the port
* 
*******************************************************************************/
int ReadPort(PORT_type myPORT myPort)
{
	
	//function implementation
}


/******************************************************************************
* \Syntax          : void WritePort(PORT_type myPort,int value)
* \Description     : write port value                                   
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : nonReentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion 
			myPort		The port to write on
			value		the value to be written
* \Parameters (out): None                                                      
* \Return value:   : void
* 
*******************************************************************************/
void WritePort(PORT_type myPort,int value)
{
	
	//function implementation
}


/******************************************************************************
* \Syntax          : int ReadPIN(PORT_type thePort ,int PinNum)     
* \Description     : Read port value                                   
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion 
			thePort		The port of the pin to be read
			PinNum		the pin number
* \Parameters (out): None                                                      
* \Return value:   : int 	the value on the pin  0 or 1
* 
*******************************************************************************/
int ReadPIN(PORT_type thePort ,int PinNum)
{
	
	//function implementation
}


/******************************************************************************
* \Syntax          : void WritePIN(PORT_type thePort,int PinNum,int value)
* \Description     : write pin value                                   
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : nonReentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion 
			thePort		The port of the pin to write on
			PinNum		the pin number
			value		the value to be written
* \Parameters (out): None                                                      
* \Return value:   : void
* 
*******************************************************************************/
void WritePIN(PORT_type thePort,int PinNum,int value)
{
	
	//function implementation
}

/**********************************************************************************************************************
 *  END OF FILE: FileName.c
 *********************************************************************************************************************/
