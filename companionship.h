/*
 * companionship.h
 *
 *  Created on: May 24, 2017
 *      Author: x8444
 */

#ifndef COMPANIONSHIP_H_
#define COMPANIONSHIP_H_


/*
 * INCLUDE STATEMENTS
 */
#include <String>
#include <Deque>
#include <individual.h>

class companionship{
public:
	/*
	 * Default <companionship> constructor
	 */
	companionship::companionship();

	/*
	 * Parameterized <companionship> constructor
	 */
	companionship::companionship(unsigned int new_companionship_size ,std::string new_companionship_name, std::deque* new_companionship_members);

	/*
	 * Default <companionship> de-constructor
	 */
	companionship::~companionship();

	/*
	 * Function will change the companionship size; larger in all cases, but only smaller if the appropriate number of companions have been first
	 * removed
	 * @param new_companionship_size, an unsigned int which is used to assign companionship_size
	 */
	void companionship::setCompanionshipSize(unsigned int new_companionship_size);

	/*
	 * Function will rename the <companionship>
	 * @param new_companionship_name, a std::string which is used to assign companionship_name
	 */
	void companionship::editCompanionshipName(std::string new_companionship_name);

	/*
	 * Function will add a new companion to the companionship
	 * @param new_companion, an <individual*> which is added to companionship_members
	 */
	void companionship::addCompanionshipMember(individual* new_companion);

	/*
	 * Function will remove a companion from the companionship
	 * @param remove_index, an unsigned int which indicates the index of the companion to remove from companionship_members
	 */
	void companionship::removeCompanionshipMember(unsigned int remove_index);

	/*
	 * Function will return the companionship information including names of <individual> involved
	 * @return companionship_data, a std::string formatted to include companionship information
	 */
	std::string companionship::toString();
private:
	/*
	 * LOCAL VARIABLES
	 */
	unsigned int companionship_size;
	std::string companionship_name;
	std::deque companionship_members;
};
#endif /* COMPANIONSHIP_H_ */
