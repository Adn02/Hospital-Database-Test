#include "class.h"
#include <iostream>
#include <iomanip>
#include <vector>

Patient::Patient() {
	name = "";
	dateOfBirth = "";
	id = 0;
}


Patient::Patient(std::string name, std::string dateOfBirth, int id){
	this->name = name;
	this->dateOfBirth = dateOfBirth;
	this->id = id;
}
Patient::~Patient(){}

void Patient::setName(std::string name) {
	this->name = name;
}
void Patient::setDOB(std::string dateOfBirth) {
	this->dateOfBirth = dateOfBirth;
}
void Patient::setID(int id) {
	this->id = id;
}
void Patient::printData() {
	
	std::cout << std::setw(10) << name << "\t |    " << dateOfBirth << "\t |     " << id << std::endl;
}

std::string Patient::getName() const {
	return name;
}
std::string Patient::getDOB() const {
	return dateOfBirth;
}
int Patient::getID() const {
	return id;
}

void displayData(std::vector<Patient> patientList) {
	std::cout << std::setw(9) << "Name" << "\t | \t" << std::setw(3) << "DOB" << "\t | \t" << "ID" << std::endl;
	std::cout << std::string(48, '-') << std::endl;
	for (unsigned int i = 0; i < patientList.size(); i++) {
		patientList.at(i).printData();
	}
}
