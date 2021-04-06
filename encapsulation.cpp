#include <iostream>
using namespace std;

class Employee
{
private:
	string Name;
	string Company;
	int Age;
public:
	void setName(string name)
	{
		return name;
	}
	void setCompany(string company)
	{
		Company=company;
	}
	string getCompany()
	{
		return Company;
	}
	void setAge(int age)
	{
		if (age>=18)
		{
			Age=age;
		}
	}
	int getAge()
	{
		return Age;
	}
	
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
	employee1.setAge(39);
	cout<<employee1.getName()<<"is"<<employee1.getAge()<<"Year";
	return 0;
}