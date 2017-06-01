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
#include "individual.h"

class household_unit{
public:
	/*
	 * Default <household_unit> constructor
	 */
	household_unit();

	/*
	 * Parameterized <household_unit> constructor
	 * @param new_unit_name, a std::string which will rename the household
	 * @param new_household_members, a std::deque* which will contain <individual*> to be inserted here
	 * @param new_household_size, an unsigned int specifying number of potential <individual> who may live at <household_unit>
	 */
	household_unit(std::string new_unit_name, std::deque<individual>* new_household_members, unsigned int new_household_size);

	/*
	 * Default <household_unit> de-constructor
	 */
	~household_unit();

	/*
	 * Function will add a member to the <household_unit>
	 * @param new_member, an <individual*> which will point to the member
	 */
	void addMember(individual* new_household_member);

	/*
	 * Function will remove a member from the <household_unit>
	 * @param member_index, an unsigned int which points to an index of the deque
	 */
	void removeMember(unsigned int remove_index);

	/*
	 * Function will change the <household_unit> name
	 * @param, a std::string
	 */
	void editHouseholdName(std::string new_household_name);

	/*
	 * Function will set the size (number of potential inhabitants) of the <household_unit>
	 * @param new_household_size, an unsigned int which represents the number of inhabitants for the <household_unit>
	 */
	void editHouesholdSize(unsigned int new_household_size);

	/*
	 * Function will return the household information and list of names of the inhabitants
	 * @return household_data, std::string formatted with <household_unit> data and names of the <individual> living there
	 */
	std::string toString();
private:
	/*
	 * LOCAL VARIABLES
	 */
	unsigned int household_size;
	std::deque<individual*> unit_members;
	std::string unit_name;
};
#endif /* HOUSEHOLD_UNIT_H_ */
