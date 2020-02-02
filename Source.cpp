#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include "PhoneBook.h"
using namespace std;


int main()
{
	vector <Customer>vc1;
	vector <Customer>::iterator itr1;
	char ch = '\0';
	int s = 0;//search variable
	int swVar = 0;
	do
	{
		Customer c;

		c.AddCustomer();
		c.DisplayCustomer();
		vc1.push_back(c);
		cout << endl;
		cout << vc1.capacity();
		cout << "\nUpdate in List 1/0??";
		cin >> s;
		if (s == 1)
		{
			c.UpdateCustomer(vc1);
		}
		cout << "\nEnter the choice as y to continue" << endl;
		cin >> ch;
	} while (ch == 'Y' || ch == 'y');
	cout << "\nPopping Data...........";

	/*for (itr1 = vc1.begin(); itr1 < vc1.end(); itr1++)
	{
	cout << *itr1;
	}*/
	ofstream fout;
	fout.open("myfile.dat");
	PhoneBook *p;
	p = new PhoneBook;
	for (int i = 0; i < vc1.size(); i++)
	{
		vc1[i].DisplayCustomer();
		p = vc1[i].getCustomer();
		fout <<"Name" <<p->name << " " ;

		vector <long long int>::iterator itr;
		for (itr = p->ph_no.begin(); itr < p->ph_no.end(); itr++)
		{
			fout << "Phone No. :" << *itr;
		}
		fout << endl;
	}
	fout.close();





	system("pause");
	return 0;
}