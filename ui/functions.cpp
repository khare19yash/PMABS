//function to check username and password
void check_username_password(string s, string p)
{
int flag=0;
string uname,pass;
fstream fhandle;
fhandle.open("patient username password.csv", ios::in);
while(fhandle)
{
getline(fhandle, uname, ' ,');
if(uname.compare(s)==0)//compare the username
{
	flag=1;
	break;
}
}
fhandle.seekg(o,ios::cur);
if(flag==1)//if both strings are equal
{
	getline(fhandle,pass)
	if(pass.compare(p)==0)//compare the passwords
	#include "patient_ui1.cpp"//if password matches include patient_ui file
	else
	cout<<"Incorrect Password"<<endl;
}
else
cout<<"Invalid Username"<<endl;
}


//function to check if username already exists
void unique_username(string s)
{
	string uname;
	int flag=0;
	fstream fhandle;
	fhandle.open("patient username password", ios::in);
	while(fhandle)
	{
		getline(fhandle,uname,',');
		if(uname.compare(s)==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	cout<<"Username already exists"<<endl;
	
}


