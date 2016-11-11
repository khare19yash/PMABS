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
        inpatient_details_print(uhid);
        cout<<endl;
        cout<<"hospital details"<<endl;
        print_inpatient_details(uhid);
        break;
    }
    case 2:
    {
        #include "patient_ui.cpp"
        break;
    }
}
    
}

