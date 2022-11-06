int PistonMoveAbs(int newPosition); 
int PistonMoveAbsWTO(int newPosition, short int *Volt,
                     short int *Amp, time_t timeout);
 
#include <apf9i.h>
#include <control.h>
#include <limits.h>
#include <logger.h>
#include <stdlib.h>
#include <time.h>
