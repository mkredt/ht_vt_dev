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

	gender = "default";

	unit_name = "The Default Unit";

	age = 0;
	phone_country_code = 0;
	phone_area_code = 0;
	phone_prefix = 0;
	phone_postfix = 0;
	phone_number = "+" + phone_country_code + " " + phone_area_code + "-" + phone_prefix + "-" + phone_postfix;
}

individual::individual(std::string new_first_name, std::string new_surname, std::string new_gender, std::string new_household, unsigned int new_age,
		unsigned int new_country_code, unsigned int new_area_code, unsigned int new_prefix, unsigned int new_postfix){
	given_name = new_first_name;
	surname = new_surname;
	full_name = given_name + " " + surname;

	gender = new_gender;

	unit_name = new_household;

	age = new_age;
	phone_country_code = new_country_code;
	phone_area_code = new_area_code;
	phone_prefix = new_prefix;
	phone_postfix = new_postfix;
	phone_number = "+" + phone_country_code + " " + phone_area_code + "-" + phone_prefix + "-" + phone_postfix;
}

individual::~individual(){

}

void individual::setName(std::string new_given_name, std::string new_surname){
	given_name = new_given_name;
	surname = new_surname;
	full_name = given_name + " " + surname;
}

void individual::setGender(std::string new_gender){
	gender = new_gender;
}

void individual::setAge(unsigned int new_age){
	age = new_age;
}

void individual::setHousehold(std::string new_household){
	unit_name = new_household;
}

void individual::setPhoneNumber(unsigned int new_country_code, unsigned int new_area_code, unsigned int new_prefix,
		unsigned int new_postfix){
	phone_country_code = new_country_code;
	phone_area_code = new_area_code;
	phone_prefix = new_prefix;
	phone_postfix = new_postfix;
	phone_number = "+" + phone_country_code + " " + phone_area_code + "-" + phone_prefix + "-" + phone_postfix;
}

std::string individual::toString(){
	std::string message;
	message = full_name + "(" + gender + "," + age +")\nPhone: " + phone_number + "\nUnit: " + unit_name + "\n";
	return message;
}


