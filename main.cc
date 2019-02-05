/*********************************************************
*Author: Matt Albrinck
*Class: CS 3560
*Professor: Chad Mourning
*Project: Homework 1
*Date: 1/28/19
*Details: The main source file - calls functions
*[replace]
**********************************************************/
#include "prog.h"
int main(int argc, char * argv[]){
	Replace Action;
	string change_me;
	string word1, word2;
	string content;

	word1 = argv[1];
	cout << "The target word is: " << word1 << endl; //writes to output file what the targeted word is
	word2 = argv[2];
	cout << "The new word will be: " << word2 << endl; //writes to output file what the targeted word becomes
	while (getline(cin, change_me)){
		content += change_me;
	}
	Action.replace(content, word1, word2);	//calls replace function

}
