#include <iostream>
#include "calisan.h"

using namespace std;

int main()
{
	Employe employe1 = { "savas","eratesli","it","embedded",5000,2 };
	Employe employe2 = { "savas","eratesli","it","embedded",5700,4 };
	Employe employe3 = { "savas","eratesli","soft","embedded",8000,7 };
	Employe employe4 = { "savas","eratesli","soft","embedded",54500,99 };
	
	Manager manager1("nazli", "kendal","soft" ,"embedded", 7000, 2);
	Manager manager2("nazli", "kendal", "it", "embedded", 7000, 2);

	Employe employelist[] = { employe1,employe2,employe3,employe4 };

	manager1.extractEmployes(employelist);


	return 0;
}


