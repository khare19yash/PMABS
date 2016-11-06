system("cls");
cout<<"1.Outpatient Login"<<endl;
cout<<"2.Inpatient Login"<<endl;
cout<<"3.New User? Signup"<<endl;
cout<<endl;
cout<<"Enter your choice : "<<endl;
cin>>choice;
switch(choice)
{
	case 1:
	{
		system("cls");
		user_login(choice);
		break;
	}
	case 2:
	{
		system("cls");
		user_login(choice);
		break;
	}
	case 3:
	{
		#include "patient_signup.cpp"
		break;
	}
	default:
	{
		cout<<"Invalid Choice"<<endl;
	}
}
