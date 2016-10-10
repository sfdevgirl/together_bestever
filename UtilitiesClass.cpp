/*
 * UtilitiesClass.cpp
 *
 *  Created on: Sep 26, 2016
 *      Author: shannone_smith
 */

#include "UtilitiesClass.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

UtilitiesClass::UtilitiesClass() {
    // TODO Auto-generated constructor stub
    
}

UtilitiesClass::~UtilitiesClass() {
    // TODO Auto-generated destructor stub
}

string UtilitiesClass::makeUpperCase(string theString) {
    
    locale settings;
    string newString;
    
    for(short i = 0; i < theString.size(); ++i)
        newString += (toupper(theString[i], settings));
    
    return newString;
    
}//makeUpperCase
string UtilitiesClass::makeLowerCase(string theString) {
    
    locale settings;
    string newString;
    
    for(short i = 0; i < theString.size(); ++i)
        newString += (tolower(theString[i], settings));
    
    return newString;
    
}//makeLowerCase
void UtilitiesClass::clearCIN(void){
    
        cin.clear();
        cin.ignore(32768, '\n');
        return;
    }//clearCIN
    
string UtilitiesClass::inputString(string promptString, int minLength, int maxLength){
        string userInput;
        
        while (true) {
            cout << promptString << "\n";
            getline(cin, userInput);
            if (userInput.size() < minLength || userInput.size() > maxLength) {
                cout << "The string you entered is too short or too long.  Should be " << minLength << " to " << maxLength << " in Length\n";
                cout << "Please try again\n";
            }//if
            else
                break;
        }//while
        return userInput;
    }//inputString
    
    int UtilitiesClass::inputInt(string promptString, int minValue, int maxValue, int exitValue) {
        int userInput;
        
        cout << promptString << " \n";
        while (true) {
            cin >> userInput;
            if (!cin.fail()) {
                char myChar = cin.peek();
                if (myChar == '\n')
                    if ((userInput >= minValue && userInput <= maxValue) || userInput == exitValue)
                        break;
                    else {
                        cout << "Invalid value entered.  Should be between " << minValue << " and " << maxValue << " Please try again\n";
                        clearCIN();
                    }//else
                    else {
                        cout << "Invalid value entered.  Should be between " << minValue << " and " << maxValue << " Please try again\n";
                        clearCIN();
                    }//else
            }//if
            else {
                cout << "Invalid integer value entered. Please try again.\n";
                clearCIN();
            }//else
        }
        clearCIN();
        return userInput;
    }//inputInt
    
    double UtilitiesClass::inputDouble(string promptString, double minValue, double maxValue, double exitValue){
        double userInput;
        
        cout << promptString << " \n";
        while (true) {
            cin >> userInput;
            if (!cin.fail()) {
                char myChar = cin.peek();
                if (myChar == '\n')
                    if ((userInput >= minValue && userInput <= maxValue) || userInput == exitValue)
                        break;
                    else {
                        cout << "Invalid value entered.  Should be between " << minValue << " and " << maxValue << " Please try again\n";
                        clearCIN();
                    }//else
                    else {
                        cout << "Invalid value entered.  Should be between " << minValue << " and " << maxValue << " Please try again\n";
                        clearCIN();
                    }//else
            }//if
            else {
                cout << "Invalid double value entered. Please try again.\n";
                clearCIN();
            }//else
        }
        clearCIN();
        return userInput;
    }//inputdouble
    
    string UtilitiesClass::centerString(string stringToCenter, int toWidth){
        string outputString;
        int l = 0;
        int pos = 0;
        
        l = static_cast<int>(stringToCenter.length());
        pos=(toWidth-l)/2;
        for(int i=0;i<pos;i++) {
            outputString = outputString + " ";
        }//for
        outputString = outputString + stringToCenter;
        return outputString;
    }//centerString
    
    int UtilitiesClass::getRandomInt(int Min, int Max) {
        int tempInt = 0;
        
        while (true) {
            tempInt = rand() % Max;
            if (tempInt >= Min)
                break;
            else {}
        }//while
        
        return tempInt;
    }//getRandomInt
    
    double UtilitiesClass::getRandomDouble(int Min, int Max, int decimalPlaces) {
        double returnNum;
        int tempInt;
        double tempDouble;
        
        while (true) {
            returnNum = ((double)rand()/RAND_MAX);
            tempInt = (returnNum * Max)*(pow(10, decimalPlaces));
            tempDouble = static_cast<double>(tempInt)/(pow(10, decimalPlaces));
            if (tempDouble >= Min)
                break;
            else {}
        }//while
        return tempDouble;
    }//getRandomDouble

bool UtilitiesClass::verifyAction(string userPrompt) {
        char userInput;
        bool returnValue = false;
        
        while (true) {
            cout << "\n";
            cout << userPrompt << "\n";
            cout << "<Y>es, <N>o ==> ";
            cin >> userInput;
            if (toupper(userInput) == 'Y') {
                returnValue = true;
                break;
            }//if
            else if (toupper(userInput) == 'N') {
                returnValue = false;
                break;
            }//else if
            else {
                cout << "Invalid selection, please try again\n";
            }//else
            clearCIN();
        }//while
        
        clearCIN();
        return returnValue;
    }//verifyAction

char UtilitiesClass::askOverWrite(void){
        char userChoice;
        
        cout << "You already have data loaded into the system\n";
        cout << "Do you want to (O)verwrite, (A)ppend or (Q)uit? ";
        cin >> userChoice;
        switch (toupper(userChoice)) {
            case 'O': {
                break;
            }//case O
            case 'A':
                break;
            case 'Q':
            default: {
                cout << "Operation Aborted\n";
                return 'Q';
            }//default
        }//switch
        
        return toupper(userChoice);
        
    }//askOverwrite

string UtilitiesClass::getRandomString(int Min, int Max) {
    string tempString;
    
    int size = getRandomInt(Min, Max);
    for (int ctr=0; ctr<size; ctr++) {
        char tempChar = getRandomInt(97, 122);
        tempString += tempChar;
    }//for
    
    return tempString;
}//getRandomInt

char UtilitiesClass::inputChar(string prompt, char arg1, char arg2){
    
    char returnChar;
    
    while(true){
        cout << prompt;
        cin.get(returnChar);
        
        returnChar = toupper(returnChar);
        
        if (returnChar != toupper(arg1) || returnChar != toupper(arg2)){
            break;
        }//if
        else{
            cout << "*** Error, incorrect number of characters. ***\n";
            continue;
        }//else
    }//while first
    
    
    return returnChar;
}//string Prompt
