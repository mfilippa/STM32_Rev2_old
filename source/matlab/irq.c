// -----------------------------------------------------------------------------
// irq.c - MPF - Dec 4, 2011
// -----------------------------------------------------------------------------

// includes
#include "../stdint.h"
#include "../globals.h"
#include "irq.h"
#include "../app/ctrl.h"
#include "../app/sch.h"

// definitions

// module structure

// prototypes

// -----------------------------------------------------------------------------
// 
// -----------------------------------------------------------------------------
void IRQ_Initialize(void){

}
// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void IRQ_Fast(void){
	FB_ReadFastADC();
//	FAULT_FastMonitor();
	CTRL_FastStep();
}
// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void IRQ_Slow(void){
	FB_ReadSlowADC();
//	FAULT_SlowMonitor();
	CTRL_SlowStep();
}
// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void IRQ_PWMFault(void){
	// do nothing
}
// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void IRQ_SystemTimer(void){
	SCH_Step();
}
