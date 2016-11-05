system("cls");
cout<<"1.Login"<<endl;
cout<<"2.New User? Signup"<<endl;
cout<<endl;
cout<<"Enter your choice : "<<endl;
cin>>choice;
if(choice==1)
{
	system("cls");
	user_login();
}
else if(choice==2)
{
	#include "patient_signup.cpp"
}
else
cout<<"Invalid choice"<<endl;
