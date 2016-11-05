system("clear");
string hospital_name,hospital_id;
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
dislay_doctor_list(hospital_id);
doctor_id=get_doctor_id();
