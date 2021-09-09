// -----------------------------------------------------------------------------
// pwm.c - MPF - Dec 4, 2011
// -----------------------------------------------------------------------------

// includes
#include "../stdint.h"
#include "../globals.h"
#include "pwm.h"
#include "wrapper.h"

// definitions

// module structure

// prototypes

// -----------------------------------------------------------------------------
// 
// -----------------------------------------------------------------------------
void PWM_Initialize(void){
	// nothing to initialize
}
// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void PWM_Set(int16_t val1, int16_t val2, int16_t val3){
	*(pOut+0) = (double)val1/(1<<FP_AMPLITUDE);
	*(pOut+1) = (double)val2/(1<<FP_AMPLITUDE);
	*(pOut+2) = (double)val3/(1<<FP_AMPLITUDE);
}
// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void PWM_SetOutputState(int state){
	*(pOut+3) = state;
}
// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void PWM_DisableChannel(int channel){
	// do nothing
}
// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void PWM_SetBreakIRQEnableState(int state){
	// do nothing
}
