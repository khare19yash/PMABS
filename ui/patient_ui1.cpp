void patient_ui2(string);
void patient_ui1(string s)
{
	string uhid=s,pid,hid,did,adate;
	int flag=0;
	system("cls");
cout<<"1. Book Appointment"<<endl;
cout<<"2. Cancel Appointment"<<endl;
cout<<"3. View Details"<<endl;
cout<<"4. View Appointment Details"<<endl;
cout<<"5. Update Details"<<endl;
cout<<"6. Logout"<<endl;
cout<<"Enter your choice : "<<endl;
cin>>choice;
switch(choice)
{
	case 1:
	{
		flag=search_appointment(uhid);
		if(flag==0)
		{
			patient_ui2(uhid);
		break;
		}
		else
		{
			cout<<"Already have an appointment"<<endl;
			break;
		}
	}
	case 2:
	{
		break;
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
		appointment_details(uhid);
		break;
	}
	case 5:
	{
		patient_details(uhid);
		cout<<"1. Name"<<endl;
		cout<<"2. Gender"<<endl;
		cout<<"3. Age"<<endl;
		cout<<"4. Blood Group"<<endl;
		cout<<"5. Contact Number"<<endl;
		cout<<"6. Email Id"<<endl;
		update_personal_info(uhid);
		cout<<"Updated Details"<<endl;
		patient_details(uhid);
		break;
	}
	case 6:
	{
		system("cls");
		#include "patient_ui.cpp"
		break;
	}
}


}




