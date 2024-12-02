#include<iostream>
using namespace std;
class animal
{
	public:
	char name[100];
	char species[100];
	int age;
	animal()
	{
		cin>>name;
		cin>>species;
		cin>>age;
	}
	void get()
	{
		cout<<"NAME ="<<name<<"\n";
		cout<<"SPECIES ="<<species<<"\n";
		cout<<"AGE ="<<age<<"\n";
	}
};
class cat:public animal
{
	public:
	char color[100];
	char breed[100];
	cat()
	{
		cin>>color;
		cin>>breed;
	}
	void get2()
	{
		cout<<"COLOUR ="<<color<<"\n";
		cout<<"BREED ="<<breed<<"\n";
	}
};
class dog:public animal
{
	public:
	char breed[100];
	int weight;
	dog()
	{
		cin>>breed;
		cin>>weight;
	}
	void get3()
	{
		cout<<"BREED ="<<breed<<"\n";
		cout<<"WEIGHT ="<<weight<<"\n";
	}
};
int main()
{
	cat s;
	dog g;
	s.get();
	s.get2();
	g.get();
	g.get3();
	return 0;
}