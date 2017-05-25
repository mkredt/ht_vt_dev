/*
 * entry_point.h
 *
 *  Created on: May 24, 2017
 *      Author: x8444
 */

#ifndef ENTRY_POINT_H_
#define ENTRY_POINT_H_

/*
 * INCLUDE STATEMENTS
 */
#include <String>

/*
 * LOCAL VARIABLES
 */
enum ENTRY_SM {NONE, INIT, LOOP, EXIT};
enum LOOP_SM {NONE, OPEN_PROJECT, SAVE_PROJECT, MANAGE_MEMBER_LIST, MANAGE_HT_LIST, MANAGE_VT_LIST, MANAGE_REPORTS, EXIT};
enum FILE_SM {NONE, INPUT_INIT, OUTPUT_INIT};
enum MOD_SM {NO_MOD, EX_MOD};

ENTRY_SM entry_state;
LOOP_SM loop_state;
FILE_SM file_state;

#endif /* ENTRY_POINT_H_ */
