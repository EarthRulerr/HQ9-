#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
using namespace std;


int main() { 
	system("clear");
	cout << "HQ9+ recreated in C++ by @earthrulerr and @imcute-aaaa" << endl;
	sleep(4);
	system("clear");
	string input;
	int acc=0;
  int loop = 1;
  while (loop == 1) {
	cin>>input;
	if (input == "h"){
	cout << "Hello World" << endl; 
	}
	else if(input == "q"){
		cout<<"q";
	}
	else if (input == "9"){
		int bottle = 99;
    	while (bottle > 0){
	    	cout << bottle << " bottles of beer on the wall,"
	        << bottle << " bottles of beer." << endl;
	    	bottle--;
	    	cout << "Take one down and pass it around" << bottle << " " << "bottles of beer on the wall./n" << endl;
	    	if (bottle == 1){
	        break;
	    	}
	    }
	    cout << "1 bottle of beer on the wall, 1 bottle of bear." << endl;
	    cout << "Take one down and pass it around, no more bottles of beer on the wall./n" << endl;
	    cout << "No more bottles of beer on the wall, no more bottls of beer." << endl;
	    cout << "Go to the store and buy some more, 99 bottles of beer on the wall.";

    return 0;
	}
  else if(input == "+"){
      cout << ++acc << endl; 
    }
   }
}
