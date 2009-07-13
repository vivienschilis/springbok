#include "spbok_opt.h"

/* check command line options */
void spbok_get_opt (int argc,char ** argv)
{

#ifdef _SPBOK_LINUX_COMPLIANT

	int opt, optind;
	extern char * optarg;

	while ((opt=getopt_long(argc,argv,"C:f:vh", long_options,&optind))!=-1)
		switch(opt)
		{
			case 'h' : spbok_usage (); break;
			case 'C' : spbok_usage (); break;
			case 'v' : break;
			case 'f' : break;
		}
#endif
}

/* traditionnal usage */
void spbok_usage ()
{
	printf("Usage: ");
	spbok_print_name(); printf(" "); spbok_print_version();

	printf(" [option] [file] ...\n");
	spbok_print_name(); printf(" is a fast and flexible webserver\n");
	printf("\t -f  --file \t\t File path of the configuration file\n");
	printf("\t -C  --check \t\t Check the configuration file\n");
	printf("\t -v  --version \t\t Print the version of Springbok\n");
	printf("\t -h  --help \t\t Print usage\n");
	printf("\n");
}

void spbok_print_version ()
{
#ifndef _SPBOK_VERSION
	printf("0.0");
#else
	printf(_SPBOK_VERSION);
#endif
}

void spbok_print_name ()
{
#ifndef _SPBOK_NAME
	printf("Springbok");
#else
	printf(_SPBOK_NAME);
#endif
}
