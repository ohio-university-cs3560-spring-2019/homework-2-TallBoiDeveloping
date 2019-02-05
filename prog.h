/*********************************************************
*Author: Matt Albrinck
*Class: CS 3560
*Professor: Chad Mourning
*Project: Homework 1
*Date: 1/28/19
*Details: The replace header file - defines functions:
*[replace]
**********************************************************/
#ifndef _PROG_H_
#define _PORG_H_
#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

class Replace{
	public:
		void replace(string change_me, string word1, string word2);
	private:
		string change_me, word1, word2;

};

#endif
