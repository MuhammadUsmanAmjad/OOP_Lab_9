#pragma once
#include<iostream>
using namespace std;
class person{
	char first_name[20];
	char last_name[20];
	protected:
	int age;
	public:
	person(const char*name,const char*last,int a)	
	{
		cout<<"person() called\n";
		int l=strlen(name);
		int i=0;
		for(;i<l;i++)
		{
			first_name[i]=name[i];
		}
		first_name[i]=0;
		i=0;
		l=strlen(last);
		for(;i<l;i++)
		{
			last_name[i]=last[i];
		}
		last_name[i]=0;
		age=a;
	}
	void set_first_name(const char*a)
	{
		int l=strlen(a);
		int i=0;
		for(;i<l;i++)
		{
			first_name[i]=a[i];
		}
		first_name[i]=0;
	}
	void set_last_name(const char*a)
	{
		int l=strlen(a);
		int i=0;
		for(;i<l;i++)
		{
			last_name[i]=a[i];
		}
		last_name[i]=0;
	}
	char*get_first_name()
	{
		return first_name;
	}
	char*get_last_name()
	{
		return last_name;
	}
	void set_age(int a)
	{
		age=a;
	}
	int get_age()
	{
		return age;
	}
	void print_information()
	{
		cout<<first_name<<"  ";
		cout<<last_name<<" is ";
		cout<<age<<" years old.";
	}
	~person()
{
	cout << "~person() called";
}

};