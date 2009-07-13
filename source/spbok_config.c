#include "spbok_config.h"
#include <stdio.h>

void spbok_parse_config_file (char * my_configfile, spbok_server_config_t* my_conf)
{
	// pointer check
	if( (!my_conf) || (!my_configfile) ) return;
	
	FILE * my_file_conf = fopen (my_configfile,"r");
	char c;
	if (my_file_conf == NULL) return;

	int line;
	int pos;
	
	while (!feof(my_file_conf))
	{
		switch (c)
		{
			case '#' : break;
			case '\n': break;
			case '\t' : break;
		}
	}
}

void spbok_set_default_config (spbok_server_config_t* my_conf)
{
	if(!my_conf) return;
}


void spbok_check_config (spbok_server_config_t* my_conf)
{
	if(!my_conf) return;
}


