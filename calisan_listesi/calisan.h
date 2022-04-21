#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
	string personName, personSurname, personDepartment, personPosition, personID;
	int personSalary, personYear;

public:
	Person(string name, string surname, string department, string position, int salary, int year)
	{
		personName = name;	personSurname = surname;
		personDepartment = department;	personPosition = position;	personSalary = salary;	personYear = year;
	};

	void setName(string name)
	{
		personName = name;
	}
	void setSurname(string surname)
	{
		personSurname = surname;
	}
	void setDepartment(string department)
	{
		personDepartment = department;
	}
	void setPosition(string position)
	{
		personPosition = position;
	}
	void setSalary(int salary)
	{
		personSalary = salary;
	}
	void setYear(int year)
	{
		personYear = year;
	}
	void setID(string ID)
	{
		personID = ID;
	}

	string getName()
	{
		return personName;
	}
	string getSurname()
	{
		return personSurname;
	}
	string getDepartment()
	{
		return personDepartment;
	}
	string getPosition()
	{
		return personDepartment;
	}
	string getID()
	{
		return personID;
	}
	int getSalary()
	{
		return personSalary;
	}
	int getYear()
	{
		return personYear;
	}

	void print()
	{
		cout << "-----------------------------------------------------------" << endl;
		cout << "Ad: " << personName << " " << "Soyad: " << personSurname << endl;
		cout << "Bolum: " << personDepartment << endl;
		cout << "Pozisyon: " << personPosition << endl;
		cout << "Yýl: " << personYear << endl;
		cout << "ID: " << personID << endl;
	}

};


class Employe :public Person//Kiþi den miras
{
private:
	int employeBonus;

public:
	Employe(string name, string surname, string department, string position, int salary, int year) :Person(name, surname, department, position, salary, year)
	{
		employeBonus = 85 * year;

		int randomID = rand() % 8999 + 1000;
		Employe::setID("EMP" + to_string(randomID));//Sayýyý string yaptýk

	}
	void print()
	{
		Person::print();
		cout << "Bonus: " << employeBonus << endl;
		cout << "-----------------------------" << endl;
	}
};

class Manager :public Employe//Çalýþandan miras
{
	int managerBonus;
	
public:
	Manager(string name, string surname, string department, string position, int salary, int year) :Employe(name, surname, department, position, salary, year)
	{
		managerBonus = 150 * year;
		int randomID = rand() % 8999 + 1000;
		Manager::setID("MNG" + to_string(randomID));
	}
	void print()
	{
		Person::print();

		cout << "Bonus: " << managerBonus << endl;
		cout << "-----------------------------" << endl;
	}

	//Yoneticiyle ayný dep çalýþan bul
	void extractEmployes(Employe employeArray[])
	{
		cout << "Yonetici Adi: " << Manager::getName() << " " << Manager::getSurname() << endl;
		cout << "Yonetici ID: " << Manager::getID() << endl;
		cout << getDepartment() << " Departman Listesi" << endl;

		for (int i = 0; i < sizeof(employeArray); i++)
		{
			if (getDepartment() == employeArray[i].getDepartment())
			{
				employeArray[i].print();
			}
		}
	}
};









