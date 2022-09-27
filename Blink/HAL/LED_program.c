/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/*   FILE NAME					:  LED_program.c
 *   BRIEF DESCRIPTION	:  Implementation of LED_interface.h
 *   AUTHOR							:  Yasser Waleed 
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "../HAL/LED_interface.h"
#include "../MCAL/PORT_interface.h"
#include "../MCAL/INTERRUPT_interface.h"
#include "../MCAL/TIMER_interface.h"
#include "../Library/stdtypes.h"
/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/
void LED_Init(u8 LED_PORT, u8 LED_PIN)
{
	PORT_Init(LED_PORT, LED_PIN, OUTPUT, PULL_DOWN, CUR_4MA);
	TIMER_Init(SYSCLOCK);		// SYSCLOCK OR PIOSC
	INTERRUPT_Init();
}
void LED_Toggle(u8 LED_PORT, u8 LED_PIN)
{
	PORT_TogglePin(LED_PORT, LED_PIN);
}
/**********************************************************************************************************************
 *  END OF FILE: LED_program.c
 *********************************************************************************************************************/