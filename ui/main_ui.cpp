//this is main ui
#include<iostream>
#include<fstream>
#include<string>
#include "functions.cpp"
#include "class.cpp"
using namespace std;
int main(void)
{	system("clear");
	int choice;

	//there will be four modes
	//user can select any one of the modes
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
	#include "patient_ui.cpp"
			break;
	
	case 2:
	#include "login.cpp"
			break;
				
	case 3:
	#include "login.cpp"
			break;
			
	case 4://FAQs
			break;
			
	case 5:	//contact details
			break;
	default: //exit(0);
}

return 0;
}


