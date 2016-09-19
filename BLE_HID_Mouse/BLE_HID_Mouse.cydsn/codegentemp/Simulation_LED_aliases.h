/*******************************************************************************
* File Name: Simulation_LED.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Simulation_LED_ALIASES_H) /* Pins Simulation_LED_ALIASES_H */
#define CY_PINS_Simulation_LED_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define Simulation_LED_0			(Simulation_LED__0__PC)
#define Simulation_LED_0_PS		(Simulation_LED__0__PS)
#define Simulation_LED_0_PC		(Simulation_LED__0__PC)
#define Simulation_LED_0_DR		(Simulation_LED__0__DR)
#define Simulation_LED_0_SHIFT	(Simulation_LED__0__SHIFT)
#define Simulation_LED_0_INTR	((uint16)((uint16)0x0003u << (Simulation_LED__0__SHIFT*2u)))

#define Simulation_LED_INTR_ALL	 ((uint16)(Simulation_LED_0_INTR))


#endif /* End Pins Simulation_LED_ALIASES_H */


/* [] END OF FILE */
