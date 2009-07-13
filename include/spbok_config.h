/******************************************************************************
 *	spbok_config.h
 * ***************************************************************************/

#ifndef __SPBOK_CONFIG_H__
#define __SPBOK_CONFIG_H__


/* server params */
typedef struct {

	unsigned short port;
	char* file_log;

}spbok_server_config_t;


/* initialize values with configuration file */
void spbok_parse_config_file (char * my_configfile, spbok_server_config_t* my_conf);
void spbok_set_default_config (spbok_server_config_t* my_conf);

/* check values to run correctly the web server */
void spbok_check_config (spbok_server_config_t* my_conf);

#endif
