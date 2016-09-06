#include "stdafx.h"
#include <iostream>
#include <string>
#include "Analisys.h"



using namespace std;


void Analisys::processExamResults()
{
	int passed = 0;
	int failuared = 0;
	int result;
	int resultCounter = 1;

	while (resultCounter <= 10) {
		cout << "Enter the test result (1 or 2): \n";
		cin >> result;
		if (result == 1)
		{
			passed++;
		}
		else {
			if (result == 2)
			{
				failuared++;
			}
			else
			{
				cout << "Error! The result is invalid. Please try again! \n\n";
				resultCounter--;
			}
		}
		resultCounter++;
	}
	cout << "\n\nRESULTS:\nThe exam had passed " << passed << " and failuared " << failuared << " students.\n\n";
	if (passed > 8)
	{
		cout << "Raise tuition\n\n\n";
	}

}