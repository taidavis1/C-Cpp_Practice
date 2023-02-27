#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> v;
	string combine;
	ifstream in( "code.cpp" );  // read file code.cpp
	string line = "";           // get each line in code.cpp
	while( getline( in, line ) ){ // getline returns true if read successfully
		v.push_back( line ); // add the line to the end of v
	}
	// add line numbers:
	for(int i = 0; i < v.size(); i++){
		combine = combine + v[i];        // combine all data together in one single string "combine"
	}
	cout << combine << endl;
}