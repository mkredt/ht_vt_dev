/*
 * companionship.cpp
 *
 *  Created on: May 31, 2017
 *      Author: x8444
 */

#include "companionship.h"

companionship::companionship(){
	companionship_size = 0;
	companionship_name = "default companionship name";
}

companionship::companionship(std::deque<individual*> new_companionship_members){
	companionship_members = new_companionship_members;
	companionship_size = companionship_members.size();
	companionship_name = "testtesttest";
}

companionship::~companionship(){

}

void companionship::setCompanionshipSize(unsigned int new_companionship_size){

}

void companionship::editCompanionshipName(std::string new_companionship_name){

}

void companionship::addCompanionshipMember(individual* new_companion){

}

void companionship::removeCompanionshipMember(unsigned int remove_index){

}

std::string companionship::toString(){
	return "standard debug message";
}
