#include <iostream>
#include <fstream>
#include <string>
#include "binarySearchTree.h"

using namespace std;

int main(){
	/*Prompt user input file*/
	cout << "Please input a file name(Ex: input.txt): " << flush;

	/*Declare input file*/
	ifstream myReadFile;

	binarySearchTree t; // Create BST object.

	int val = 0; // Initiallize value added to BST.

	/*While loop until a valid file input is found*/
	 while (true)
    	{
    		string inFile;
    		getline(cin, inFile );
    		myReadFile.open( inFile.c_str() );
    		if (myReadFile) break; //If found a valid input file, then exit while loop.
    		cout << "Invalid file. Please enter a valid input filename.txt> " << flush;
    	}

	cout<<"Open text file"<<endl;

	/*Check if input file is open*/
	if (myReadFile.is_open()){
		cout<<"Input file open"<<endl;
		}
	else {cout<< "Cannot read text file"<<endl;}

	/*Read text file and insert values to BST*/
	while(myReadFile >> val) {
		t.insert(val);
		cout << val << endl;
		}

	myReadFile.close(); //Close input file.
	cout<<"Input file is closed." <<endl;

	t.print(); //Display the result of Inorder Tree Walk.

return 0;
}

