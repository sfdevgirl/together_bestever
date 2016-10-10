/*
 * UtilitiesClass.hpp
 *
 *  Created on: Sep 26, 2016
 *      Author: shannone_smith
 */

#ifndef UTILITIESCLASS_HPP_
#define UTILITIESCLASS_HPP_
#include <iostream>
using namespace std;

class UtilitiesClass {

public:
	UtilitiesClass();
	virtual ~UtilitiesClass();


	static string makeUpperCase(string);
	static string makeLowerCase(string);
	static void clearCIN(void);
	static string inputString(string, int, int);
	static int inputInt(string, int, int, int);
	static double inputDouble(string, double, double, double);
	static string centerString(string, int);
	static int getRandomInt(int, int);
	static double getRandomDouble(int, int, int);
	static bool verifyAction(string);
	static char askOverWrite(void);
	static string getRandomString(int, int);
    static char inputChar(string, char, char);

    private:


};

#endif /* UTILITIESCLASS_HPP_ */
