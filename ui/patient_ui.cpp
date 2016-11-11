char ch='y',c;
while(ch=='y')
{
	system("cls");
	cout<<"1.Outpatient Login"<<endl;
	cout<<"2.Inpatient Login"<<endl;
	cout<<"3.New User? Signup"<<endl;
	cout<<endl;
	cout<<"Enter your choice : "<<endl;
	cin>>c;
	switch(c)
	{
		case '1':
		{
			system("cls");
			choice=1;
			user_login(choice);
			break;
		}
		case '2':
		{
			system("cls");
			choice=2;
			user_login(choice);
			break;
		}
		case '3':
		{
			#include "patient_signup.cpp"
			break;
		}
		default:
		{
		cout<<"Invalid Choice"<<endl;
		}
}
cout<<"to continue press y and n to exit"<<endl;
cin>>ch;
if(ch=='n')
break;
}
