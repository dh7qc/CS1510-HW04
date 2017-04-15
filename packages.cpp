//Dennis Hahn CS1510 1B Homework #4
//package.cpp

#include <iostream>
#include <string>
#include <iomanip>
#include "abstractpackage.h"
#include "package2d.h"
#include "package3d.h"
#include "package4d.h"
using namespace std;

void output(int); //parameter = # packages
float profit(int);

AbstractPackage **Packages; 

int main()
{
	string name1, name2;
	int P, dimen;
	float length, width, height, dur, weight;
	
	cin >> P;
	
	Packages = new AbstractPackage*[P]; 

	for (int k = 0; k < P; k++)
	{
		cin >> dimen;
		cin >> name1 >> name2;

		switch(dimen)
		{
		case 2: //2D
			{
				cin >> length >> width;
				Packages[k] = new Pack2D(name1, name2, length, width);
			}
			break;
		case 3: //3D
			{
				cin >> length >> width >> height >> weight;
				Packages[k] = new Pack3D(name1, name2, length, width, height, weight);
			}
			break;

		case 4: //4D
			{
				cin >> length >> width >> height >> dur >> weight;
				Packages[k] = new Pack4D(name1, name2, length, width, height, dur, weight);
			}
			break;
		}
	}

	output(P);

	cout << endl;
	cout.setf(ios_base::fixed,ios_base::floatfield);
	cout.precision(2);
	cout << "TOTAL PROFIT = $" << profit(P) << endl;
	cout << "AVERAGE = $" << profit(P)/P << endl;

	for (int k = 0; k < P; k++)
		delete Packages[k];

	delete [] Packages;

	return 0;
}

//Prints 
void output(int a)
{
		cout.setf(ios_base::fixed,ios_base::floatfield);
		cout.precision(2);
		for (int k = 0; k < a; k++)
		{
		cout << "#" << k << ": From " << Packages[k] -> getFrom() << " to " << Packages[k] -> getTo() << " $" 
			<< Packages[k] -> getCharge() << endl;
		}
}

float profit(int b) //Gets info for profit and average. 
{
	float prof = 0;

	for (int k = 0; k < b; k++)
	{
		prof = prof + Packages[k] -> getCharge();
	}

	return prof;
}
