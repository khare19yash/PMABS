void patient_ui2(string);
void patient_ui1(string s)
{
	string uhid=s,pid,hid,did,adate;
	int flag=0;
	system("cls");
cout<<"1. Book Appointment"<<endl;
cout<<"2. Cancel Appointment"<<endl;
cout<<"3. View Details"<<endl;
cout<<"4. Logout"<<endl;
cout<<"Enter your choice : "<<endl;
cin>>choice;
switch(choice)
{
	case 1:
	{
		fstream fhandle;
	fhandle.open("appointments.csv",ios::in);
	while(fhandle)
	{
		getline(fhandle,pid,',');
		getline(fhandle,hid,',');
		getline(fhandle,did,',');
		getline(fhandle,adate,'\n');
		if(uhid.compare(pid)==0)
		{
			flag=1;
			break;
		}
		else
		continue;
	}
	fhandle.close();
	if(flag==0)
	{
		patient_ui2(uhid);
		break;
	}
	else
	{
		cout<<"Already have an appointment"<<endl;
	}

	}
	case 2:
	{

	}
	case 3:
	{
		system("cls");
		patient_details(uhid);
		break;
	}
	case 4:
	{
		system("cls");
		#include "patient_ui.cpp"
		break;
	}
}


}




