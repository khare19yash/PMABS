void patient_ui2(string s)
{
	system("cls");
string hospital_name,hospital_id,doctor_id,appointment_date,uhid=s;
int i=1;
fstream fhandle;
fhandle.open("hospital_list.csv", ios::in);
while(!fhandle.eof())
{
	getline(fhandle, hospital_name,',');
	getline(fhandle, hospital_id,'\n');
	cout<<setw(20)<<i<<"."<<hospital_name<<" Id : "<<hospital_id<<endl<<setfill('*');
	i++;
	if(i>6)
	break;
}
fhandle.close();
hospital_id=get_hospital_id();
display_doctor_list(hospital_id);
doctor_id=get_doctor_id();
cout<<"You can book appointment for these dates : "<<endl;
appointment_date=show_date();
book_appointment(hospital_id,doctor_id,appointment_date,uhid);

}
