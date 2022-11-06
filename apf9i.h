int PistonMoveAbs(int newPosition); 
int PistonMoveAbsWTO(int newPosition, short int *Volt,
                     short int *Amp, time_t timeout);
#include <apf11.h>
#include <apf9.h>
#include <apf9icom.h>
#include <control.h>
#include <limits.h>
#include <logger.h>
#include <stdlib.h>
#include <time.h>

* Revision 1.19  2022/04/21 13:37:41  swift
* Changed copyright attribute.
