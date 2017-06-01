/*
 * individual.cpp
 *
 *  Created on: May 31, 2017
 *      Author: x8444
 */

#include "individual.h"

individual::individual(){
	given_name = "John";
	surname = "Doe";
	full_name = given_name + " " + surname;

	unit_name = "The Default Unit";

	age = 0;
	phone_country_code = 0;
	phone_area_code = 0;
	phone_prefix = 0;
	phone_postfix = 0;
}

individual::individual(std::string new_first_name, std::string new_surname, std::string new_household, unsigned int new_age,
		unsigned int new_country_code, unsigned int new_area_code, unsigned int new_prefix, unsigned int new_postfix){
	given_name = new_first_name;
	surname = new_surname;
	full_name = given_name + " " + surname;

	unit_name = new_household;

	age = new_age;
	phone_country_code = new_country_code;
	phone_area_code = new_area_code;
	phone_prefix = new_prefix;
	phone_postfix = new_postfix;
}

individual::~individual(){

}

void individual::setName(std::string given_name, std::string surname){

}

void individual::setAge(unsigned int new_age){

}

void individual::setHousehold(std::string new_household){

}

void individual::setPhoneNumber(unsigned int new_country_code, unsigned int new_area_code, unsigned int new_prefix,
		unsigned int new_postfix){

}

std::string individual::toString(){
	return "standard_debug_message";
}


