/*
 * a.c
 *
 *  Created on: 14.09.2020
 *      Author: lwngim1
 */

#include "a.h"

#include "a_config.h"

uint32_t mylib_add(uint32_t a, uint32_t b)
{

#ifdef A_CONFIG_1
	return (a+b) * 2;
#else
	return (a+b);
#endif

}
