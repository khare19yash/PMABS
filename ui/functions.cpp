//void check_username_password(string,string);
//login function
/*void user_login()
{
string username;
string password;
cout<<"Username : "<<endl;
cin>>username;
cout<<"Password : "<<endl;
cin>>password;
check_username_password(username,password);
}*/


//function to check username and password
/*void check_username_password(string s, string p)
{
	int flag=0;
	string id,uname,pass;
	fstream fhandle;
	fhandle.open("patients_userpass.csv", ios::in);
	while(fhandle)
	{
		getline(fhandle,id,',');
		getline(fhandle,uname,' ,');
		getline(fhandle,pass,'\n');
		if(uname.compare(s)==0)//compare the username
		{
			flag=1;
			break;
		}
	}
//fhandle.seekg(o,ios::cur);
	/*if(flag==1)//if both strings are equal
	{
		//getline(fhandle,pass)
		//compare the passwords
		if(pass.compare(p)==0)
		{
		
			#include "patient_ui1.cpp"   //if password matches include patient_ui file
		
		}
		else
		{
			cout<<"Incorrect Password"<<endl;
			cout<<endl;
			user_login();
		}	
	}	
	else
	{
		cout<<"Invalid Username"<<endl;
		user_login();
	
	}*/
	/*if(flag==1)
	{
		//#include "patient_ui1.cpp"
		cout<<"hi"<<endl;
	}

}*/


//function to check if username already exists
int unique_username(string s)
{
	string uname,id,pass;
	int flag=0;
	fstream fhandle;
	fhandle.open("patients_userpass.csv", ios::in);
	while(fhandle)
	{
		getline(fhandle,id,',');
		getline(fhandle,uname,',');
		getline(fhandle,pass,'\n');
		if(uname.compare(s)==0)
		{
			flag=1;
			break;
		}
	}
	fhandle.close();
	if(flag==1)
	return 1;
	else 
	return 0;

}

//function to insert patient_id username and password
void insert_username_password(Patient ob)
{
	string username,password;
	cout<<"Enter Username : "<<endl;
	cin>>username;
	if(unique_username(username)==1)
	{
		cout<<"Username already exists"<<endl;
		cout<<endl;
		insert_username_password(ob);
	}
	else
	{
		cout<<"Enter Password : "<<endl;
		cin.ignore();
		cin>>password;
		fstream fhandle1;
		fhandle1.open("patients_userpass.csv",ios::app);
		fhandle1<<ob.patient_id<<","<<username<<","<<password<<endl;
		fhandle1.close();
	}
	
}


//function to check hospital id
/*void check_hospital_id(string s)
{
	string id;
	fstream fhandle;
	int flag=0;
	fhandle.open("hospital_list",ios::in);
	while(fhandle)
	{
		getline(fhandle,id,',');
		if(id.compare(s)==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	//you have selected the following hospital
	else
	cout<<"Invalid Hospital Id"<<endl;
}*/

