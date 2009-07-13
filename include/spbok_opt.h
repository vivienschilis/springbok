/******************************************************************************
 *	spbok_opt.h
 * ***************************************************************************/

#ifndef __SPBOK_OPT_H__
#define __SPBOK_OPT_H__

#include <stdlib.h>


#ifdef _SPBOK_LINUX_COMPLIANT
#include <getopt.h>

static struct option long_options[] =
{
	{"file", 0, 0, 'f'},
	{"check", 0, 0, 'C'},
	{"version", 0, 0, 'v'},
	{"help", 0, 0, 'h'},
	{0, 0, 0, 0}
};

#endif

void spbok_get_opt (int argc,char ** argv);

void spbok_usage ();
void spbok_print_version ();
void spbok_print_name ();

#endif
