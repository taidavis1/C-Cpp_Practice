#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<string> v;
	ifstream in( "code.cpp" );
	string line;
	while( getline( in, line ) ){ // getline returns true if read successfully
		v.push_back( line ); // add the line to the end of v
	}
	int reverse = v.size() - 1;       // let reverse equal to size of vector v indicates last number
	// add line numbers:
	for(int i = 0; i < v.size(); i++){
		cout << reverse << ": ";     
		cout << v[i] << endl;
		reverse = reverse - 1;        // loop through data with reverse descrease by 1
	}
}