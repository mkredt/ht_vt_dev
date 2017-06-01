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
	 * Default <individual> constructor
	 */
	individual();

	/*
	 * Parameterized <individual> constructor
	 */
	individual(std::string new_first_name, std::string new_surname, std::string new_household, unsigned int new_age,
			unsigned int new_country_code, unsigned int new_area_code, unsigned int new_prefix, unsigned int new_postfix);

	/*
	 * Default <individual> de-constructor
	 */
	~individual();

	/*
	 * Function will set name of the <individual>. It will accept
	 * @param given_name, a std::string which will replace the given_name of the <individual>
	 */
	void setName(std::string given_name, std::string surname);

	/*
	 * Function will set age of the <individual>
	 * @param new_age, a unsigned int which will replace the age of the <individual>
	 */
	void setAge(unsigned int new_age);

	/*
	 * Function will assign the name of the housing unit in which the <individual> lives
	 * @param new_household, a std::string which will replace the household name of the <individual>
	 */
	void setHousehold(std::string new_household);

	/*
	 * Function will assign the phone number for the <individual>
	 * @param new_country_code, an unsigned int which will replace the country code of the <individual>
	 * @param new_area_code, an unsigned int which will replace the area code the <individual>
	 * @param new_prefix, an unsigned int which will replace the prefix of the <individual>
	 * @param new_postfix, an unsigned int which will replace the postfix of the <individual>S
	 */
	void setPhoneNumber(unsigned int new_country_code, unsigned int new_area_code, unsigned int new_prefix,
			unsigned int new_postfix);

	/*
	 * Function will print the data stored for this <individual>
	 * @return user_data, a std:string formatted with the <individual> information
	 */
	std::string toString();
private:
	/*
	 * LOCAL VARIABLES
	 */
	std::string full_name, given_name, surname;
	std::string unit_name;
	unsigned int age, phone_country_code, phone_area_code, phone_prefix, phone_postfix;
};
#endif /* INDIVIDUAL_H_ */
