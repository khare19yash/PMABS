system("clear");
string hospital_name,hospital_id;
int i=1;
fstream fhandle;
fhandle.open("hospital_list.csv", ios::in);
while(!fhandle.eof())
{
getline(fhandle, hospital_name,',');
getline(fhandle, hospital_id,'\n');
cout<<i<<"."<<hospital_name<<" Id : "<<hospital_id<<endl;
i++;
if(i>5)
cout<<fhandle.tellp();
}
/*cout<<"Enter Hospital Id : "<<endl;
cin>>hospital_id;*/

