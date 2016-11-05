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
/*int check_username_password(string s, string p)
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
	if(flag==1)//if both strings are equal
	{
		//getline(fhandle,pass)
		//compare the passwords
		/*if(pass.compare(p)==0)
		{
		
			return 0;   //if password matches include patient_ui file
		
		}
		else
		{
			return 1;
		}*/
		//return 0;	
	//}	
	/*else
	{
		return 2;
	
	}*/

//}


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
int check_hospital_id(string s)
{
	string id,name;
	fstream fhandle;
	int flag=0;
	fhandle.open("hospital_list.csv",ios::in);
	while(fhandle)
	{
		getline(fhandle,name,',');
		getline(fhandle,id,'\n');
		if(s.compare(id)==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		return 0;
	}
		
	else
	{
		return 1;
	}
}

//function to get hospital id
string get_hospital_id()
{
	string hospital_id,s;
	cout<<"Enter Hospital Id : "<<endl;
	cin>>hospital_id;
	if(check_hospital_id(hospital_id)==1)
	{
		cout<<"Invalid Hospital Id"<<endl;
		s=get_hospital_id();
		return s;
	}
	else
	return hospital_id;	
}

//function to display doctors list
void display_doctor_list(string s)
{
	string doctor_id,doctor_name;
	string doctor_department,doctor_timing,id;
	fstream fhandle;
	fhandle.open("doctorslist.csv",ios::in);
	while(fhandle)
{
	getline(fhandle,doctor_id,',');
	getline(fhandle,doctor_name,',');
	getline(fhandle,doctor_department,',');
	getline(fhandle,doctor_timing,',');
	getline(fhandle,id,'\n');
	if(s.compare(id)==0)
	{
		cout<<doctor_id<<"\t"<<doctor_name<<"\t"<<doctor_department<<"\t"<<doctor_timing<<endl;
	}
}
}

//function to check doctor id
int check_doctor_id(string s)
{
	string id,name,department,timing,hid;
	fstream fhandle;
	int flag=0;
	fhandle.open("doctorslist.csv",ios::in);
	while(fhandle)
	{
		getline(fhandle,id,',');
		getline(fhandle,name,'.');
		getline(fhandle,department,',');
		getline(fhandle,timing,',');
		getline(fhandle,hid,'\n');
		if(s.compare(id)==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		return 0;
	}
		
	else
	{
		return 1;
	}
}

//function to get doctor id
string get_doctor_id()
{
	string doctor_id,s;
	cout<<"Enter Doctor Id : "<<endl;
	cin>>doctor_id;
	if(check_doctor_id(doctor_id)==1)
	{
		cout<<"Invalid Doctor Id"<<endl;
		s=get_doctor_id();
		return s;
	}
	else
	return doctor_id;	
}

//function to show dates 
string show_date()
{
	time_t now=time(0);
  struct tm * ltm=localtime(&now);
  char day1[20],day2[20],day3[20],day4[20],day5[20],buffer[20];

    ltm->tm_mday=ltm->tm_mday+1;
    strftime (day1,20,"%Y-%m-%d",ltm);
	cout<<"1. ";
    puts(day1);
     ltm->tm_mday=ltm->tm_mday+1;
    strftime (day2,20,"%Y-%m-%d",ltm);
	cout<<"2. ";
    puts(day2);
     ltm->tm_mday=ltm->tm_mday+1;
    strftime (day3,20,"%Y-%m-%d",ltm);
	cout<<"3. ";
    puts(day3);
     ltm->tm_mday=ltm->tm_mday+1;
    strftime (day4,20,"%Y-%m-%d",ltm);
	cout<<"4. ";
    puts(day4);
     ltm->tm_mday=ltm->tm_mday+1;
    strftime (day5,20,"%Y-%m-%d",ltm);
	cout<<"5. ";
    puts(day5);
	cout<<"Choose the Date of Appointment"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1: 
		{
			string st(day1);
			return st;
			break;
		}
		case 2:
		{
			string st(day2);
			return st;
			break;

		}
		case 3:
		{
			string st(day3);
			return st;
			break;
		}
		case 4:
		{
			string st(day4);
			return st;
			break;
		}
		case 5:
		{
			string st(day5);
			return st;
			break;
		}
		default:
		{
			cout<<"Invalid Input"<<endl;
		}
	}

}

//function to book appointment
void book_appointment()
{
	char value;
	cout<<"Confirm Appointment (y/n)"<<endl;
	cin>>value;
	switch(value)
	{
		case 'y':
		{

		}
		case 'n':
		{
			#include "patient_ui1.cpp"
		}
	}

}
