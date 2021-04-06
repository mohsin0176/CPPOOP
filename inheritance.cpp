#include <iostream>
using namespace std;
class AbstractEmployee
{
	virtual void AskForPromotion()=0;
}
class Employee:AbstractEmployee
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

	void AskForPromotion()
	{
		if (Age>30)
		{
			cout<<Name<<"Got Promoted"<<endl;
		}
		else
		{
			cout<<Name<<"Got no Promotion"<<endl;
		}
	}

};

class developer:Employee
{

public:
	string FavProgrammingLanguage;
	Developer(string name,string company,int age,string favProgrammingLanguage):Employee(name,company,age)
	{
		FavProgrammingLanguage=favProgrammingLanguage;
	}
	void FixBug()
	{
		cout<<getName()<<"fixed bug using"<<FavProgrammingLanguage<<endl;
		cout<<Name<<"fixed bug using"<<FavProgrammingLanguage<<endl;
	}

};
class Teacher : Employee{
public:
	string Subject;
	Teacher(string name,string company,int age,string subject):Employee(name,company,age)
	{
         Subject=subject;
	}
	void PrepareLesson()
	{
		cout<<Name<<"is Preparing"<<Subject<<"Lesson"<<endl;
	}
}

int main()
{
	Employee employee1=Employee("Saldina","YT-CodeBeauty",25);
	employee1.IntroduceYourself();
	Employee employee2=Employee("mohsin","YT-Code",45);
	employee2.IntroduceYourself();
	employee1.setAge(39);
	cout<<employee1.getName()<<"is"<<employee1.getAge()<<"Year";
    employee1.AskForPromotion();
    employee2.AskForPromotion();
    Developer d=Developer("Saldina","YT-CodeBeauty",12,"c++");
    Teacher t=Teacher("Jack","YT-Code",45,"History");
    t.PrepareLesson();
    t.AskForPromotion();
    d.FixBug();
    d.AskForPromotion();
    d.FixBug();
    d.AskForPromotion();	
	return 0;
}