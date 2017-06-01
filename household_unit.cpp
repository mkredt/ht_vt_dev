/*
 * household_unit.cpp
 *
 *  Created on: May 31, 2017
 *      Author: x8444
 */

#include "household_unit.h"

household_unit::household_unit(){
	household_size = 0;
	unit_name = "default unit name";
}

household_unit::household_unit(std::string new_unit_name, std::deque<individual>*  new_household_members, unsigned int new_household_size){
	household_size = new_household_size;
	unit_name = new_unit_name;

	unit_members.resize(new_household_size);
}

household_unit::~household_unit(){

}

void household_unit::addMember(individual* new_household_member){
	/*
	 * Insert new member into household
	 */
	unit_members.push_back(new_household_member);

	/*
	 * Adjust the household size
	 */
	household_size = unit_members.size();
}

void household_unit::removeMember(unsigned int remove_index){

}

void household_unit::editHouseholdName(std::string new_household_name){

}

void household_unit::editHouesholdSize(unsigned int new_household_size){

}

std::string household_unit::toString(){
	return "standard debug message";
}
