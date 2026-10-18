// Week01_Programming_Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declaring variables for user input
    string baseColor;
    int colorCount;
    int schemeCount;

    cout << "Welcome to the mini painter color scheme generator!" << endl;

    // Call out user entered variables after each entry to the user for verification
    cout << "What is your base color?" << endl;
    cin >> baseColor;
    cout << "Your base color is " << baseColor << "." << endl;

    cout << "How many additional colors would you like to use? (Maximum: 4)" << endl;
    cin >> colorCount;
    cout << "You want to use " << colorCount << " additional colors." << endl;

    cout << "How many color schemes would you like to generate? (Maximum: 10)" << endl;
    cin >> schemeCount;
    cout << "You want to generate " << schemeCount << " color schemes." << endl;

	cout << "This program will now generate color schemes based on Analogus, Complementary, Split Complementary, Double Split Complementary, Triadic, Tetradic, and Rectangle color wheel palettes." << endl;
    cout << "Generating " << schemeCount << " color schemes with base color " << baseColor << " and " << colorCount << " additional colors..." << endl;

    // Calculate the total number of schemes generated and display it
	cout << "Generating " << schemeCount << " out of " << schemeCount * colorCount << " color schemes..." << endl;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
