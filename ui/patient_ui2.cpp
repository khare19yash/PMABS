system("clear")
string hospital_name,hospital_id;
fstream fhandle;
fhandle.open("hospital_list.csv", ios::in);
while(fhandle)
{
getline(fhandle, hospital_name);
getline(fhandle, hospital_id);
cout<<"1."<<hospital_name<<" Id"<<hospital_id<<endl;
}
cout<<"Enter Hospital Id : "<<endl;
cin>>hospital_id;

