/*
 * household_unit.h
 *
 *  Created on: May 24, 2017
 *      Author: x8444
 */

#ifndef HOUSEHOLD_UNIT_H_
#define HOUSEHOLD_UNIT_H_

/*
 * INCLUDE STATEMENTS
 */
#include <String>
#include <Deque>
#include <individual.h>

class household_unit{
public:
	/*
	 * FUNCTIONS
	 */
	household_unit::household_unit();
	household_unit::~household_unit();
	void household_unit::addMember();
	void household_unit::removeMember();
	void household_unit::editHouseholdName();
	std::string household_unit::toString();
private:
	/*
	 * LOCAL VARIABLES
	 */
	std::deque unit_members;
	std::string unit_name;
};

#endif /* HOUSEHOLD_UNIT_H_ */
