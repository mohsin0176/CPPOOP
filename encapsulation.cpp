#include <iostream>
using namespace std;
class Employee
{
public:
	string Name;
	string Company;
	int Age;
	
	void IntroduceYourself()
	{
		cout<<"Name"<<Name<<endl;
		cout<<"Company"<<Company<<endl;
		cout<<"Age"<<Age<<endl;		
	}
	Employee(string Name,string Company,int age)
	{
		Name=name;
		Company=company;
		Age=age;
	}

};

int main()
{
	Employee employee1=Employee("Saldina","YT-CodeBeauty",25);
	employee1.IntroduceYourself();
	Employee employee2=Employee("mohsin","YT-Code",45);
	employee2.IntroduceYourself();
	return 0;
}