#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct PhoneBook
{
	string name;
	vector <long long int >ph_no;
};

class Customer
{
	PhoneBook *p1;
public:
	Customer()
	{
		p1 = new PhoneBook;
		p1->name = "";
		//p1->ph_no.push_back(0);

	}
	void AddCustomer();
	void DisplayCustomer();
	PhoneBook* getCustomer();
	void SearchCustomer(vector<Customer>);
	void UpdateCustomer(vector<Customer>);
	
};