/*******************************************************************************************************************
/****************************AUTHER:Ahmed elsayed *****************************************************************
********************File: interface of DIO  ***************************************************************************
/********************Date: 3/9/2022 ***************************************************************************
/********************ver:v1**********************************************************************************
/********************Desc: **********************************************************************************
*/

#ifndef  TIMER_interface_H_
#define  TIMER_interface_H_


void TIMER0_VidInit(void);
void TIMER0SetCallBack(void (*ptr)(void));
void TIMER0_SetPRELOADVALUE (void);
void TIMER0_VidSetDesiredTime_ms(f32 Copy_F32DesiredTime);
void TIMER0_SetOCROPWM (u8 prcentage);

#endif
