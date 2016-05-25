// PPP_cpp_tutorial.cpp : Defines the entry point for the console application.
//

/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath> */

#include "stdafx.h"
#include "std_lib_facilities.h"

using namespace std;

/*
inline void keep_window_open() { char ch; cin >> ch; }
*/

//note - after you are done entering names, you have to hit ctrl + Z and then enter, then the rest will execute. 


int main()

try {
	//your code here
	bool cond = true;
	if (cond)
	cout << "Success!\n";
	else cout << "Fail!\n";
	keep_window_open();
	return 0;
}

catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}

catch (...) {
	cerr << "Ooops: unknown exception!\n";
	keep_window_open();
	return 2;
}