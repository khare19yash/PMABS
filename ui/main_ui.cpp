//this is main ui
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cstring>
#include<ctime>
using namespace std;
int choice;
#include "class.cpp"
#include "functions.cpp"
#include "login.cpp"
#include "patient_ui1.cpp"
#include "patient_ui2.cpp"
#include "inpatient_ui1.cpp"
#include "doctor_ui1.cpp"
int main(void)
{	system("cls");
	//there will be four modes
	//user can select any one of the modes
	while(1)
	{
		system("cls");
	cout<<"1. PATIENT LOGIN"<<endl;
	cout<<"2. ADMIN LOGIN"<<endl;
	cout<<"3. DOCTOR LOGIN"<<endl;	
	cout<<"4. FAQs"<<endl;
	cout<<"5. CONTACT DETAILS"<<endl;
	cout<<"6. EXIT"<<endl;

	cout<<"ENTER YOUR CHOICE : "<<endl;
	cin>>choice;
	switch(choice)
	{
	case 1:	
		{
			#include "patient_ui.cpp"
			break;
		}
	
	case 2:
		{
			system("cls");
			admin_login();
			break;
		}
				
	case 3:
		{
			system("cls");
			doctor_login();
			break;
		}
			
			
	/*case 4://FAQs
			break;
			
	case 5:	//contact details
			break;*/
	case 6: exit(0);
	default: break;
	}
	}
	
return 0;
}


