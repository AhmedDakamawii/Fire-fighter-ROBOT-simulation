/*******************************************************************************************************************
/****************************AUTHER:Ahmed elsayed *****************************************************************
********************File: interface of DIO  ***************************************************************************
/********************Date: 3/9/2022 ***************************************************************************
/********************ver:v1**********************************************************************************
/********************Desc: **********************************************************************************
*/

#ifndef  TIMER2_interface_H_
#define  TIMER2_interface_H_


void TIMER2_VidInit(void);
void TIMER2SetCallBack(void (*ptr)(void));
void TIMER2_VidSetDesiredTime_ms(f32 Copy_F32DesiredTime);
void TIMER2_SetPRELOADVALUE (void);
void TIMER2_SetOCROPWM (u8 prcentage);

#endif