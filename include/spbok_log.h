/******************************************************************************
 *	spbok_log.h
 * ***************************************************************************/

#ifndef __SPBOK_LOG_H__
#define __SPBOK_LOG_H__

/* information type */
typedef enum {
	_ERROR,
	_WARNING,
	_INFO,
}spbok_log_type_t;

// log information
void spbok_log_write(char * log_file, char * log_msg, spbok_log_type_t log_type);

#endif
