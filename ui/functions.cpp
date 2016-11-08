void patient_ui1(string);
void update(string,int,string,string);
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
		if(uname==s)//compare the username
		{
			flag=1;
			break;
		}
		else
		continue;
	}
	if(flag==1)//if both strings are equal
	{
		//compare the passwords
		if(pass==p)
		return 0; 
		else
		return 1;
	}	
	else
	{
		return 2;
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
	else
	continue;
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
  char day1[20],day2[20],day3[20],day4[20],day5[20];

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
void book_appointment(string p,string q,string r,string s)
{
	string uhid=s;
	string hname,hid;
	string did,dname,depart,timing,hid1;
	string pid,pname,g,a,bgroup,phone,mail;
	time_t now=time(0);
	char *dt=ctime(&now);
	char value;
	cout<<"Confirm Appointment (y/n)"<<endl;
	cin>>value;
	switch(value)
	{
		case 'y':
		{
			fstream fhandle;
			fhandle.open("hospital_list.csv",ios::in);
			while(fhandle)
			{
				getline(fhandle,hname,',');
				getline(fhandle,hid,'\n');
				if(p.compare(hid)==0)
				break;
				else
				continue;
			}
			fhandle.close();
			fhandle.open("doctorslist.csv",ios::in);
			while(fhandle)
			{
				getline(fhandle,did,',');
				getline(fhandle,dname,',');
				getline(fhandle,depart,',');
				getline(fhandle,timing,',');
				getline(fhandle,hid1,'\n');
				if(q.compare(did)==0)
				break;
				else
				continue;
			}
			fhandle.close();
			fhandle.open("outpatient.csv",ios::in);
			while(fhandle)
			{
				getline(fhandle,pid,',');
				getline(fhandle,pname,',');
				getline(fhandle,g,',');
				getline(fhandle,a,',');
				getline(fhandle,bgroup,',');
				getline(fhandle,phone,',');
				getline(fhandle,mail,'\n');
				if(s.compare(pid)==0)
				break;
				else 
				continue;
			}
			fhandle.close();
			//show the appointment details to the patient
			system("cls");
			cout<<"Appointment Booked"<<endl;
			cout<<"Patient Name : "<<pname<<endl;
			cout<<"Patient Id : "<<s<<endl;
			cout<<"Hospital Name : "<<hname<<endl;
			cout<<"Doctor Name : "<<dname<<endl;
			cout<<"Appointment Date : "<<r<<endl;
			cout<<"Booked on : "<<dt<<endl;
			fhandle.open("appointments.csv",ios::app);
			cin.ignore();
			fhandle<<s<<","<<pname<<","<<hname<<","<<dname<<","<<r<<endl;
			fhandle.close();
			/*enter the patient details from outpatients in the respective 
			hospital file base on hospital id*/
			if(p=="H101")
			{
				fhandle.open("AIIMS_patientsdetail.csv",ios::app);
				fhandle<<pid<<","<<pname<<","<<g<<","<<a<<","<<bgroup<<","<<phone<<","<<mail<<endl;
				
			}
			
			else if(p=="H102")
			{
				fhandle.open("appollo_patientsdetail.csv",ios::app);
				fhandle<<pid<<","<<pname<<","<<g<<","<<a<<","<<bgroup<<","<<phone<<","<<mail<<endl;

			}
			else if(p=="H103")
			{
				fhandle.open("cityhospital_patientsdetail.csv",ios::app);
				fhandle<<pid<<","<<pname<<","<<g<<","<<a<<","<<bgroup<<","<<phone<<","<<mail<<endl;


			}
			else if(p=="H104")
			{
				fhandle.open("fortis_patientsdetail.csv",ios::app);
				fhandle<<pid<<","<<pname<<","<<g<<","<<a<<","<<bgroup<<","<<phone<<","<<mail<<endl;


			}
			else if(p=="H105")
			{
				fhandle.open("kalingahospital_patientsdetail.csv",ios::app);
				fhandle<<pid<<","<<pname<<","<<g<<","<<a<<","<<bgroup<<","<<phone<<","<<mail<<endl;


			}
			else if(p=="H106")
			{
				fhandle.open("sum_patientsdetail.csv",ios::app);
				fhandle<<pid<<","<<pname<<","<<g<<","<<a<<","<<bgroup<<","<<phone<<","<<mail<<endl;

			}
			break;
		}
		case 'n':
		{
			patient_ui1(uhid);
			break;
		}
		default:
		{
			cout<<"Invalid Input"<<endl;
		}
	}

}

//function to view patient details
void patient_details(string s)
{
	string pid,pname,hname,dname,adate;
	string id,name,gender,age,bgroup,phone,mail;
	int flag=0;
	fstream fhandle;
	fhandle.open("appointments.csv",ios::in);
	while(fhandle)
	{
		getline(fhandle,pid,',');
		getline(fhandle,pname,',');
		getline(fhandle,hname,',');
		getline(fhandle,dname,',');
		getline(fhandle,adate,'\n');
		if(s.compare(pid)==0)
		{
			flag=1;
			break;
		}
		else
		continue;
	}
	fhandle.close();
	if(flag==1)
	{
		if(hname=="AIIMS Hospital")
		{
			fhandle.open("AIIMS_patientsdetail.csv",ios::in);
		while(fhandle)
		{
			getline(fhandle,id,',');
			getline(fhandle,name,',');
			getline(fhandle,gender,',');
			getline(fhandle,age,',');
			getline(fhandle,bgroup,',');
			getline(fhandle,phone,',');
			getline(fhandle,mail,'\n');
			if(s.compare(id)==0)
			{
				break;
			}
			else
			continue;

		}
		fhandle.close();
		cout<<"Name : "<<name<<endl;
		cout<<"Id : "<<id<<endl;
		cout<<"Gender : "<<gender<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Blood Group : "<<bgroup<<endl;
		cout<<"Contact Number : "<<phone<<endl;
		cout<<"Email Id : "<<mail<<endl;

		}
		else if(hname=="APPOLLO Hospital")
		{
			fhandle.open("appollo_patientsdetail.csv",ios::in);
		while(fhandle)
		{
			getline(fhandle,id,',');
			getline(fhandle,name,',');
			getline(fhandle,gender,',');
			getline(fhandle,age,',');
			getline(fhandle,bgroup,',');
			getline(fhandle,phone,',');
			getline(fhandle,mail,'\n');
			if(s.compare(id)==0)
			{
				break;
			}
			else
			continue;

		}
		fhandle.close();
		cout<<"Name : "<<name<<endl;
		cout<<"Id : "<<id<<endl;
		cout<<"Gender : "<<gender<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Blood Group : "<<bgroup<<endl;
		cout<<"Contact Number : "<<phone<<endl;
		cout<<"Email Id : "<<mail<<endl;

		}
		else if(hname=="CITY Hospital")
		{
			fhandle.open("cityhospital_patientsdetail.csv",ios::in);
		while(fhandle)
		{
			getline(fhandle,id,',');
			getline(fhandle,name,',');
			getline(fhandle,gender,',');
			getline(fhandle,age,',');
			getline(fhandle,bgroup,',');
			getline(fhandle,phone,',');
			getline(fhandle,mail,'\n');
			if(s.compare(id)==0)
			{
				break;
			}
			else 
			continue;

		}
		fhandle.close();
		cout<<"Name : "<<name<<endl;
		cout<<"Id : "<<id<<endl;
		cout<<"Gender : "<<gender<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Blood Group : "<<bgroup<<endl;
		cout<<"Contact Number : "<<phone<<endl;
		cout<<"Email Id : "<<mail<<endl;

		}
		else if(hname=="FORTIS Hospital")
		{
			fhandle.open("fortis_patientsdetail.csv",ios::in);
		while(fhandle)
		{
			getline(fhandle,id,',');
			getline(fhandle,name,',');
			getline(fhandle,gender,',');
			getline(fhandle,age,',');
			getline(fhandle,bgroup,',');
			getline(fhandle,phone,',');
			getline(fhandle,mail,'\n');
			if(s.compare(id)==0)
			{
				break;
			}
			else
			continue;

		}
		fhandle.close();
		cout<<"Name : "<<name<<endl;
		cout<<"Id : "<<id<<endl;
		cout<<"Gender : "<<gender<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Blood Group : "<<bgroup<<endl;
		cout<<"Contact Number : "<<phone<<endl;
		cout<<"Email Id : "<<mail<<endl;

		}
		else if(hname=="KALINGA Hospital")
		{
			fhandle.open("kalingahospital_patientsdetail.csv",ios::in);
		while(fhandle)
		{
			getline(fhandle,id,',');
			getline(fhandle,name,',');
			getline(fhandle,gender,',');
			getline(fhandle,age,',');
			getline(fhandle,bgroup,',');
			getline(fhandle,phone,',');
			getline(fhandle,mail,'\n');
			if(s.compare(id)==0)
			{
				break;
			}
			else
			continue;

		}
		fhandle.close();
		cout<<"Name : "<<name<<endl;
		cout<<"Id : "<<id<<endl;
		cout<<"Gender : "<<gender<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Blood Group : "<<bgroup<<endl;
		cout<<"Contact Number : "<<phone<<endl;
		cout<<"Email Id : "<<mail<<endl;

		}
		else if(hname=="SUM Hospital")
		{
			fhandle.open("sum_patientsdetail.csv",ios::in);
		while(fhandle)
		{
			getline(fhandle,id,',');
			getline(fhandle,name,',');
			getline(fhandle,gender,',');
			getline(fhandle,age,',');
			getline(fhandle,bgroup,',');
			getline(fhandle,phone,',');
			getline(fhandle,mail,'\n');
			if(s.compare(id)==0)
			{
				break;
			}
			else
			continue;

		}
		fhandle.close();
		cout<<"Name : "<<name<<endl;
		cout<<"Id : "<<id<<endl;
		cout<<"Gender : "<<gender<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Blood Group : "<<bgroup<<endl;
		cout<<"Contact Number : "<<phone<<endl;
		cout<<"Email Id : "<<mail<<endl;

		}
	}
	else
	{
		fhandle.open("outpatient.csv",ios::in);
		while(fhandle)
		{
			getline(fhandle,id,',');
			getline(fhandle,name,',');
			getline(fhandle,gender,',');
			getline(fhandle,age,',');
			getline(fhandle,bgroup,',');
			getline(fhandle,phone,',');
			getline(fhandle,mail,'\n');
			if(s.compare(id)==0)
			{
				break;
			}
			else
			continue;

		}
		fhandle.close();
		cout<<"Name : "<<name<<endl;
		cout<<"Id : "<<id<<endl;
		cout<<"Gender : "<<gender<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Blood Group : "<<bgroup<<endl;
		cout<<"Contact Number : "<<phone<<endl;
		cout<<"Email Id : "<<mail<<endl;
	}
}

//function to view inpatients details
int inpatient_details(string s)
{
	int flag=0;
	string id,name,gender,age,bgroup,phone,mail;
	fstream fhandle;
	//check in aiims patients list
	fhandle.open("AIIMS_patientsdetail.csv",ios::in);
		while(fhandle)
		{
			getline(fhandle,id,',');
			getline(fhandle,name,',');
			getline(fhandle,gender,',');
			getline(fhandle,age,',');
			getline(fhandle,bgroup,',');
			getline(fhandle,phone,',');
			getline(fhandle,mail,'\n');
			if(s.compare(id)==0)
			{				
				flag=1;
				break;		
			}
			else
			continue;
		}
		fhandle.close();
		/*if(flag==1)
		{
			fhandle.close();
			return 1;
		}*/

		//check in appollo patients details
		fhandle.open("appollo_patientsdetail.csv",ios::in);
		while(fhandle)
		{
			getline(fhandle,id,',');
			getline(fhandle,name,',');
			getline(fhandle,gender,',');
			getline(fhandle,age,',');
			getline(fhandle,bgroup,',');
			getline(fhandle,phone,',');
			getline(fhandle,mail,'\n');
			if(s.compare(id)==0)
			{				
				flag=2;
				break;
			}
			else
			continue;

		}
		fhandle.close();
		/*if(flag==2)
		{
			fhandle.close();
			return 2;
		}*/
		
		//check in city hospital patients detail
		fhandle.open("cityhospital_patientsdetail.csv",ios::in);
		while(fhandle)
		{
			getline(fhandle,id,',');
			getline(fhandle,name,',');
			getline(fhandle,gender,',');
			getline(fhandle,age,',');
			getline(fhandle,bgroup,',');
			getline(fhandle,phone,',');
			getline(fhandle,mail,'\n');
			if(s.compare(id)==0)
			{				
				flag=3;
				break;
			}
			else
			continue;

		}
		fhandle.close();
		/*if(flag==3)
		{
			fhandle.close();
			return 3;
		}*/
	
		//check in fortis patients details
		fhandle.open("fortis_patientsdetail.csv",ios::in);
		while(fhandle)
		{
			getline(fhandle,id,',');
			getline(fhandle,name,',');
			getline(fhandle,gender,',');
			getline(fhandle,age,',');
			getline(fhandle,bgroup,',');
			getline(fhandle,phone,',');
			getline(fhandle,mail,'\n');
			if(s.compare(id)==0)
			{
				flag=4;
				break;
			}
			else
			continue;

		}
		fhandle.close();
		/*if(flag==4)
		{
			fhandle.close();
			return 4;
		}*/
		//check in kalinga patients details
		fhandle.open("kalingahospital_patientsdetail.csv",ios::in);
		while(fhandle)
		{
			getline(fhandle,id,',');
			getline(fhandle,name,',');
			getline(fhandle,gender,',');
			getline(fhandle,age,',');
			getline(fhandle,bgroup,',');
			getline(fhandle,phone,',');
			getline(fhandle,mail,'\n');
			if(s.compare(id)==0)
			{
				flag=5;
				break;			
			}
			else
			continue;
		}
		fhandle.close();
		/*if(flag==5)
		{
			fhandle.close();
			return 5;
		}*/

		//check in sum patients details
		fhandle.open("sum_patientsdetail.csv",ios::in);
		while(fhandle)
		{
			getline(fhandle,id,',');
			getline(fhandle,name,',');
			getline(fhandle,gender,',');
			getline(fhandle,age,',');
			getline(fhandle,bgroup,',');
			getline(fhandle,phone,',');
			getline(fhandle,mail,'\n');
			if(s.compare(id)==0)
			{
				flag=6;
				break;
			}
			else
			continue;

		}
		fhandle.close();
	 	 if(flag==1)
		 return 1;
		 else if(flag==2)
		 return 2;
		 else if (flag==3)
		 return 3;
		 else if(flag==4)
		 return 4;
		 else if(flag==5)
		 return 5;
		 else if(flag==6)
		 return 6;
		 else
		 return 0;
		
}

//function to view appointment details
void appointment_details(string s)
{
	fstream fhandle;
	string id,name,hname,dname,date;
	int flag=0;
	fhandle.open("appointments.csv",ios::in);
	while(fhandle)
	{
		getline(fhandle,id,',');
		getline(fhandle,name,',');
		getline(fhandle,hname,',');
		getline(fhandle,dname,',');
		getline(fhandle,date,'\n');
		if(s.compare(id)==0)
		{
			flag=1;
			break;
		}
		else
		continue;
	}
	fhandle.close();
	if(flag==1)
	{
			cout<<"Patient Name : "<<name<<endl;
			cout<<"Patient Id : "<<id<<endl;
			cout<<"Hospital Name : "<<hname<<endl;
			cout<<"Doctor Name : "<<dname<<endl;
			cout<<"Appointment Date : "<<date<<endl;
	}
	else
	{
		cout<<"No Appointments"<<endl;
	}
}

//function to search patient id in appointments.csv file
int search_appointment(string s)
{
	int flag=0;
	string pid,name,hname,dname,adate;
	fstream fhandle;
	fhandle.open("appointments.csv",ios::in);
	while(fhandle)
	{
		getline(fhandle,pid,',');
		getline(fhandle,name,',');
		getline(fhandle,hname,',');
		getline(fhandle,dname,',');
		getline(fhandle,adate,'\n');
		if(s.compare(pid)==0)
		{
			flag=1;
			break;
		}
		else
		continue;
	}
	fhandle.close();
	if(flag==1 && hname=="AIIMS Hospital")
	return 1;
	else if(flag==1 && hname=="APPOLLO Hospital")
	return 2;
	else if(flag==1 && hname=="CITY Hospital")
	return 3;
	else if(flag==1 && hname=="FORTIS Hospital")
	return 4;
	else if(flag==1 && hname=="KALINGA Hospital")
	return 5;
	else if(flag==1 && hname=="SUM Hospital")
	return 6;
	else
	return 0;
}

//function to update patient details
void update_personal_info(string s)
{
	string uhid=s,filename,detail;
	int field,flag=0;
	cout<<"Enter the Field Number You Want to Update"<<endl;
	cin>>field;
	flag=search_appointment(uhid);
	switch(flag)
	{
		case 1:
		{
			cout<<"Enter New Detail"<<endl;
			cin.ignore();
			getline(cin,detail);
			filename="AIIMS_patientsdetail.csv";
			update(uhid,field,filename,detail);
			filename="outpatient.csv";
			update(uhid,field,filename,detail);
			break;
		}
		case 2:
		{
			cout<<"Enter New Detail"<<endl;
			cin.ignore();
			getline(cin,detail);
			filename="appollo_patientsdetail.csv";
			update(uhid,field,filename,detail);
			filename="outpatient.csv";
			update(uhid,field,filename,detail);
			break;				
		}
		case 3:
		{
			cout<<"Enter New Detail"<<endl;
			cin.ignore();
			getline(cin,detail);
			filename="cityhospital_patientsdetail.csv";
			update(uhid,field,filename,detail);
			filename="outpatient.csv";
			update(uhid,field,filename,detail);
			break;
		}
		case 4:
		{
			cout<<"Enter New Detail"<<endl;
			cin.ignore();
			getline(cin,detail);
			filename="fortis_patientsdetail.csv";
			update(uhid,field,filename,detail);
			filename="outpatient.csv";
			update(uhid,field,filename,detail);
			break;
		}
		case 5:
		{
			cout<<"Enter New Detail"<<endl;
			cin.ignore();
			getline(cin,detail);
			filename="kalingahospital_patientsdetail.csv";
			update(uhid,field,filename,detail);
			filename="outpatient.csv";
			update(uhid,field,filename,detail);
			break;
		}
		case 6:
		{
			cout<<"Enter New Detail"<<endl;
			cin.ignore();
			getline(cin,detail);
			filename="sum_patientsdetail.csv";
			update(uhid,field,filename,detail);
			filename="outpatient.csv";
			update(uhid,field,filename,detail);
			break;
		}
		default:
		{
			cout<<"Enter New Detail"<<endl;
			cin.ignore();
			getline(cin,detail);
			filename="outpatient.csv";
			update(uhid,field,filename,detail);
		}
	}

}

//update function
void update(string p,int q,string r,string t)
{
	int flag=q;
	string detail=t;
	char *filename = new char[r.length() + 1];
	strcpy(filename, r.c_str());
	string str="sample.csv";
	char *sample = new char[str.length() + 1];
	strcpy(sample, str.c_str());
	cout<<filename<<endl;
	cout<<sample<<endl;
	cout<<p<<endl;
	cout<<q<<endl;
	cout<<r<<endl;
	string id,name,g,age,bgroup,phone,mail;
	fstream fhandle,fhandle1;
	fhandle.open(filename,ios::in);
	fhandle1.open(sample,ios::out);
	/*cout<<"Enter New Detail"<<endl;
	cin.ignore();
	getline(cin,detail);*/
	switch(flag)
	{
		case 1:
		{
		getline(fhandle,id,',');
		getline(fhandle,name,',');
		getline(fhandle,g,',');
		getline(fhandle,age,',');
		getline(fhandle,bgroup,',');
		getline(fhandle,phone,',');
		getline(fhandle,mail,'\n');
	while(!fhandle.eof())
	{
		if(p==id)
		{
			name=detail;
			fhandle1<<id<<","<<name<<","<<g<<","<<age<<","<<bgroup<<","<<phone<<","<<mail<<endl;
		}
		else
		{
			fhandle1<<id<<","<<name<<","<<g<<","<<age<<","<<bgroup<<","<<phone<<","<<mail<<endl;
		}
		getline(fhandle,id,',');
		getline(fhandle,name,',');
		getline(fhandle,g,',');
		getline(fhandle,age,',');
		getline(fhandle,bgroup,',');
		getline(fhandle,phone,',');
		getline(fhandle,mail,'\n');		
		}
		break;
	}
	case 2:
	{
		getline(fhandle,id,',');
		getline(fhandle,name,',');
		getline(fhandle,g,',');
		getline(fhandle,age,',');
		getline(fhandle,bgroup,',');
		getline(fhandle,phone,',');
		getline(fhandle,mail,'\n');
	while(!fhandle.eof())
	{
		if(p==id)
		{
			g=detail;
			fhandle1<<id<<","<<name<<","<<g<<","<<age<<","<<bgroup<<","<<phone<<","<<mail<<endl;
		}
		else
		{
			fhandle1<<id<<","<<name<<","<<g<<","<<age<<","<<bgroup<<","<<phone<<","<<mail<<endl;
		}
		getline(fhandle,id,',');
		getline(fhandle,name,',');
		getline(fhandle,g,',');
		getline(fhandle,age,',');
		getline(fhandle,bgroup,',');
		getline(fhandle,phone,',');
		getline(fhandle,mail,'\n');		
	}
	break;
	}
	case 3:
	{
		getline(fhandle,id,',');
		getline(fhandle,name,',');
		getline(fhandle,g,',');
		getline(fhandle,age,',');
		getline(fhandle,bgroup,',');
		getline(fhandle,phone,',');
		getline(fhandle,mail,'\n');
	while(!fhandle.eof())
	{
		if(p==id)
		{
			age=detail;
			fhandle1<<id<<","<<name<<","<<g<<","<<age<<","<<bgroup<<","<<phone<<","<<mail<<endl;
		}
		else
		{
			fhandle1<<id<<","<<name<<","<<g<<","<<age<<","<<bgroup<<","<<phone<<","<<mail<<endl;
		}
		getline(fhandle,id,',');
		getline(fhandle,name,',');
		getline(fhandle,g,',');
		getline(fhandle,age,',');
		getline(fhandle,bgroup,',');
		getline(fhandle,phone,',');
		getline(fhandle,mail,'\n');		
	}
	break;
	}
	case 4:
	{
		getline(fhandle,id,',');
		getline(fhandle,name,',');
		getline(fhandle,g,',');
		getline(fhandle,age,',');
		getline(fhandle,bgroup,',');
		getline(fhandle,phone,',');
		getline(fhandle,mail,'\n');
	while(!fhandle.eof())
	{
		if(p==id)
		{
			bgroup=detail;
			fhandle1<<id<<","<<name<<","<<g<<","<<age<<","<<bgroup<<","<<phone<<","<<mail<<endl;
		}
		else
		{
			fhandle1<<id<<","<<name<<","<<g<<","<<age<<","<<bgroup<<","<<phone<<","<<mail<<endl;
		}
		getline(fhandle,id,',');
		getline(fhandle,name,',');
		getline(fhandle,g,',');
		getline(fhandle,age,',');
		getline(fhandle,bgroup,',');
		getline(fhandle,phone,',');
		getline(fhandle,mail,'\n');		
	}
	break;
	}
	case 5:
	{
		getline(fhandle,id,',');
		getline(fhandle,name,',');
		getline(fhandle,g,',');
		getline(fhandle,age,',');
		getline(fhandle,bgroup,',');
		getline(fhandle,phone,',');
		getline(fhandle,mail,'\n');
	while(!fhandle.eof())
	{
		if(p==id)
		{
			phone=detail;
			fhandle1<<id<<","<<name<<","<<g<<","<<age<<","<<bgroup<<","<<phone<<","<<mail<<endl;
		}
		else
		{
			fhandle1<<id<<","<<name<<","<<g<<","<<age<<","<<bgroup<<","<<phone<<","<<mail<<endl;
		}
		getline(fhandle,id,',');
		getline(fhandle,name,',');
		getline(fhandle,g,',');
		getline(fhandle,age,',');
		getline(fhandle,bgroup,',');
		getline(fhandle,phone,',');
		getline(fhandle,mail,'\n');		
	}
	break;
	}
	case 6:
	{
		getline(fhandle,id,',');
		getline(fhandle,name,',');
		getline(fhandle,g,',');
		getline(fhandle,age,',');
		getline(fhandle,bgroup,',');
		getline(fhandle,phone,',');
		getline(fhandle,mail,'\n');
	while(!fhandle.eof())
	{
		if(p==id)
		{
			mail=detail;
			fhandle1<<id<<","<<name<<","<<g<<","<<age<<","<<bgroup<<","<<phone<<","<<mail<<endl;
		}
		else
		{
			fhandle1<<id<<","<<name<<","<<g<<","<<age<<","<<bgroup<<","<<phone<<","<<mail<<endl;
		}
		getline(fhandle,id,',');
		getline(fhandle,name,',');
		getline(fhandle,g,',');
		getline(fhandle,age,',');
		getline(fhandle,bgroup,',');
		getline(fhandle,phone,',');
		getline(fhandle,mail,'\n');		
	}
	break;
	}
	default:
	{
		cout<<"Nothing to update"<<endl;
	}
	}
	fhandle.close();
	fhandle1.close();
	remove(filename);
	rename(sample,filename);
}

//function to view doctor details
void display_doctor_details(string s)
{
	string did,dname,depart,timing,hid;
	fstream fhandle;
	fhandle.open("doctorslist.csv",ios::in);
	while(fhandle)
	{
		getline(fhandle,did,',');
		getline(fhandle,dname,',');
		getline(fhandle,depart,',');
		getline(fhandle,timing,',');
		getline(fhandle,hid,'\n');
		if(s.compare(did)==0)
		{
			cout<<"Name : "<<dname<<endl;
			cout<<"Id : "<<did<<endl;
			cout<<"Department : "<<depart<<endl;
			cout<<"Schedule : "<<timing<<endl;
			cout<<"Hospital Id : "<<hid<<endl;
		}
		else
		continue;

	}

}

//function to update doctor id
void update_doctor_details(string s,int field,string detail)
{
	string id,dname,depart,timing,hid;
	fstream fhandle,fhandle1;
	fhandle.open("doctorlist.csv",ios::in);
	fhandle1.open("temp.csv",ios::out);
	switch(field)
	{
		case 1:
		{
			getline(fhandle,id,',');
			getline(fhandle,dname,',');
			getline(fhandle,depart,',');
			getline(fhandle,timing,',');
			getline(fhandle,hid,'\n');
			while(fhandle)
			{
				if(s.compare(id)==0)
				{
					dname=detail;
					fhandle1<<id<<","<<dname<<","<<depart<<","<<timing<<","<<hid<<endl;
				}
				else
				{
					fhandle1<<id<<","<<dname<<","<<depart<<","<<timing<<","<<hid<<endl;
				}
				getline(fhandle,id,',');
				getline(fhandle,dname,',');
				getline(fhandle,depart,',');
				getline(fhandle,timing,',');
				getline(fhandle,hid,'\n');
			}
		}
		case 2:
		{
			getline(fhandle,id,',');
			getline(fhandle,dname,',');
			getline(fhandle,depart,',');
			getline(fhandle,timing,',');
			getline(fhandle,hid,'\n');
			while(fhandle)
			{
				if(s.compare(id)==0)
				{
					depart=detail;
					fhandle1<<id<<","<<dname<<","<<depart<<","<<timing<<","<<hid<<endl;
				}
				else
				{
					fhandle1<<id<<","<<dname<<","<<depart<<","<<timing<<","<<hid<<endl;
				}
				getline(fhandle,id,',');
				getline(fhandle,dname,',');
				getline(fhandle,depart,',');
				getline(fhandle,timing,',');
				getline(fhandle,hid,'\n');

			}
			
		}
		case 3:
		{
			getline(fhandle,id,',');
			getline(fhandle,dname,',');
			getline(fhandle,depart,',');
			getline(fhandle,timing,',');
			getline(fhandle,hid,'\n');
			while(fhandle)
			{
				if(s.compare(id)==0)
				{
					timing=detail;
					fhandle1<<id<<","<<dname<<","<<depart<<","<<timing<<","<<hid<<endl;
				}
				else
				{
					fhandle1<<id<<","<<dname<<","<<depart<<","<<timing<<","<<hid<<endl;
				}
				getline(fhandle,id,',');
				getline(fhandle,dname,',');
				getline(fhandle,depart,',');
				getline(fhandle,timing,',');
				getline(fhandle,hid,'\n');
			}
		}
		default:
		{
			cout<<"Invalid Input"<<endl;
		}
		
	}	
}

//function for admin login
void admin_login()
{
	int flag;
	string username;
	string password;
	cout<<"Username : "<<endl;
	cin>>username;
	cout<<"Password : "<<endl;
	cin>>password;
	/*flag=check_username_password(username,password);
	switch(flag)
	{
		case 0:
		{
			#include "admin_ui1.cpp"
			break;
		}
		case 1:
		{
			system("cls");
			cout<<"Invalid Password"<<endl;
			admin_login();
			break;
		}
		case 2:
		{
			system("cls");
			cout<<"Invalid Username"<<endl;
			admin_login();
			break;
		}
		default:
		{
			cout<<"Invalid Input"<<endl;
		}
	}*/
	
}

		

				