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
	Employee employee1;
	employee1.Name="Saldina";
	employee1.Company="YT-CodeBeauty";
	employee1.age=25;
	employee1.IntroduceYourself();
	return 0; 
}