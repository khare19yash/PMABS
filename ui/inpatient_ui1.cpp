void inpatient_ui1(string s)
{
    string uhid=s;
    string id,name,gender,age,bgroup,phone,mail;
    fstream fhandle;
    int flag=0;
    system("cls");
cout<<"1. View Details"<<endl;
cout<<"2. Logout"<<endl;
cout<<"Enter your choice : "<<endl;
cin>>choice;
switch(choice)
{
    case 1:
    {
        flag=inpatient_details(uhid);
    switch(flag)
    {
        case 1:
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

		}
		fhandle.close();
		cout<<"Name : "<<name<<endl;
		cout<<"Id : "<<id<<endl;
		cout<<"Gender : "<<gender<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Blood Group : "<<bgroup<<endl;
		cout<<"Contact Number : "<<phone<<endl;
		cout<<"Email Id : "<<mail<<endl;
        break;
        }
        case 2:
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

		}
		fhandle.close();
		cout<<"Name : "<<name<<endl;
		cout<<"Id : "<<id<<endl;
		cout<<"Gender : "<<gender<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Blood Group : "<<bgroup<<endl;
		cout<<"Contact Number : "<<phone<<endl;
		cout<<"Email Id : "<<mail<<endl;
        break;
        }
        case 3:
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

		}
		fhandle.close();
		cout<<"Name : "<<name<<endl;
		cout<<"Id : "<<id<<endl;
		cout<<"Gender : "<<gender<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Blood Group : "<<bgroup<<endl;
		cout<<"Contact Number : "<<phone<<endl;
		cout<<"Email Id : "<<mail<<endl;
        break;
        }
        case 4:
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

		}
		fhandle.close();
		cout<<"Name : "<<name<<endl;
		cout<<"Id : "<<id<<endl;
		cout<<"Gender : "<<gender<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Blood Group : "<<bgroup<<endl;
		cout<<"Contact Number : "<<phone<<endl;
		cout<<"Email Id : "<<mail<<endl;
        break;
        }
        case 5:
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

		}
		fhandle.close();
		cout<<"Name : "<<name<<endl;
		cout<<"Id : "<<id<<endl;
		cout<<"Gender : "<<gender<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Blood Group : "<<bgroup<<endl;
		cout<<"Contact Number : "<<phone<<endl;
		cout<<"Email Id : "<<mail<<endl;
        break;
        }
        case 6:
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

		}
		fhandle.close();
		cout<<"Name : "<<name<<endl;
		cout<<"Id : "<<id<<endl;
		cout<<"Gender : "<<gender<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Blood Group : "<<bgroup<<endl;
		cout<<"Contact Number : "<<phone<<endl;
		cout<<"Email Id : "<<mail<<endl;
        break;
        }

    }
    break;
    }
    
}
}
