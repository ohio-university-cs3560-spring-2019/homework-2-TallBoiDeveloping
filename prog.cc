/*********************************************************
*Author: Matt Albrinck
*Class: CS 3560
*Professor: Chad Mourning
*Project: Homework 1
*Date: 1/28/19
*Details: The replace source file - contains functions:
*[replace]
**********************************************************/
#include "prog.h"
/*--------------------------------
Function: replace
Job: searches inputed string and replaces targeted word with new one
Elements required:
- string change_me (inputed list to be changed)
- string word1 (targeted word)
- string word2 (new word)
Newly Created Elements:
- string changed (changed inputed list)
------------------------*/
void Replace::replace(string change_me, string word1, string word2){
	string changed;
	changed = change_me;
	string::size_type position = 0;
	while ((position = changed.find(word1, position)) != string::npos){	//loop that controls the replacement
		changed.replace(position, word1.size(), word2);
		position += word2.size();
	}
	cout << endl << endl;
	cout << changed << endl;

}
