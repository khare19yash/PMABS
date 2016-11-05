void patient_ui2(string);
void patient_ui1(string s)
{
	string uhid=s;
	system("cls");
cout<<"1. Book Appointment"<<endl;
cout<<"2. Cancel Appointment"<<endl;
cout<<"3. View Details"<<endl;
cout<<"4. Logout"<<endl;
cout<<"Enter your choice : "<<endl;
cin>>choice;
if(choice==1)
{
	patient_ui2(uhid);
}

}




