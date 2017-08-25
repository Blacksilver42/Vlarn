/* nap.c */
#include "header.h"
#include "extern.h"

int nonap;

/*
 *	routine to take a nap for n milliseconds
 */
void nap(x)
int x;
{
	if (nonap) return;
	lflush();
	usleep(x*1000l);
}

