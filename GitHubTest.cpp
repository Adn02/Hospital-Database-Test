#include "class.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Patient> patientList;
    bool loop = true;
    string userInput;
    int idInput;
    
    
    int i = 0;

    while (loop == true) {
        Patient temp;
        patientList.push_back(temp);

        cout << endl << "Please enter your name: ";
        cin >> userInput;
        patientList.at(i).setName(userInput);

        cout << "Please enter your DOB: ";
        cin >> userInput;
        patientList.at(i).setDOB(userInput);

        cout << "Please enter your ID: ";
        cin >> idInput;
        patientList.at(i).setID(idInput);

        cout << endl << "Continue? Y/N ";
        cin >> userInput;
        if (userInput == "N") {
            loop = false;
            displayData(patientList);
            break;
        }else {
            i++;
        }
    }

   
    return 0;
}
