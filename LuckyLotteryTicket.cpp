// LuckyLotteryTicket.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Heather Johnson
//This app creates six random numbers for a lottery ticket!

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;

string titleHead() {

    //title art
    return R"(  _   _  _                _            _           _   _                   _   _  
 | | | || |              | |          | |         | | | |                 | | | | 
/ __) __) |    _   _  ___| | ___   _  | |     ___ | |_| |_ ___ _ __ _   _/ __) __)
\__ \__ \ |   | | | |/ __| |/ / | | | | |    / _ \| __| __/ _ \ '__| | | \__ \__ \
(   (   / |___| |_| | (__|   <| |_| | | |___| (_) | |_| ||  __/ |  | |_| (   (   /
 |_| |_|\_____/\__,_|\___|_|\_\\__, | \_____/\___/ \__|\__\___|_|   \__, ||_| |_| 
                                __/ |                                __/ |        
                                |___/                                |___/        )";

}

int main()
{   
    string userInput;

    //loops through lottery nums
    while (userInput != "N" && userInput != "n") {
        system("cls");
        cout << titleHead() << endl;
        cout << "Welcome to Lucky Lottery! Here are your lucky numbers:" << endl << endl;
        srand(time(0));
        for (int x = 1; x <= 7; x++) {
            cout << 1 + (rand() % 69) << "  ";
        }
        cout << endl << endl;
    //prompt user for more nums
    cout << "Would you like a new set of lucky numbers? Y/N" << "  ";
    cin >> userInput;
    cout << endl;
    }   
    
}