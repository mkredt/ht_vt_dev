/*
 * individual.h
 *
 *  Created on: May 24, 2017
 *      Author: x8444
 */

#ifndef INDIVIDUAL_H_
#define INDIVIDUAL_H_

/*
 * INCLUDE STATEMENTS
 */
#include <string>

class individual{
public:
	/*
	 * FUNCTIONS
	 */
	individual::individual();
	individual::~individual();
	void individual::setName();
	void individual::setAge();
	void individual::setHoushold();
	std::string individual::toString();
private:
	/*
	 * LOCAL VARIABLES
	 */
	std::string full_name, given_name, surname;
	std::string unit_name;
	unsigned int age, phone_country_code, phone_area_code, phone_prefix, phone_postfix;
};
#endif /* INDIVIDUAL_H_ */
