void user_login()
{
string username;
string password;
cout<<"Username : "<<endl;
cin>>username;
cout<<"Password : "<<endl;
cin>>password;
//check_username_password(username,password);
if(unique_username(username)==1)
{
	#include "patient_ui1.cpp"
}
/*if(check_username_password(username,password)==2)
{
	cout<<"Invalid Username"<<endl;
	user_login();
}
else if(check_username_password(username,password)==1)
{
	cout<<"Invalid Password"<<endl;
	user_login();
}*/
/*if(check_username_password(username,password)==0)
{
	#include "patient_ui1.cpp"
}*/
}
