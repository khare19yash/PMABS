void patient_ui1(string);
void inpatient_ui1(string);
void user_login(int value)
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
	string uhid,uname,pass;
	fstream fhandle;
	fhandle.open("patients_userpass.csv",ios::in);
	while(fhandle)
	{
		getline(fhandle,uhid,',');
		getline(fhandle,uname,',');
		getline(fhandle,pass,'\n');
		if(username.compare(uname)==0)
		break;
		else
		continue;
	}
	fhandle.close();
	if(value==1)
	{
		patient_ui1(uhid);

	}
	else if(value==2)
	{
		inpatient_ui1(uhid);
	}
	
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
