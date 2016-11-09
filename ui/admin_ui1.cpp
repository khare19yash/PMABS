void display_doctor_details(string);
void patient_details(string);
void update_doctor_details(string,int,string);
void inpatient_details_print(string);
char ch='y';int flag=0;
while(ch=='y')
{
    system("cls");
string doctor_id,patient_id,detail;
int field;
cout<<"1. View OutPatient Details"<<endl;
cout<<"2. View InPatient Details"<<endl;
cout<<"3. View Doctor Details"<<endl;
cout<<"4. Update InPatient Details"<<endl;
cout<<"5. Update Doctor Details"<<endl;
cout<<"6. Logout"<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"----------------------------------------------"<<endl;
cout<<"Enter your choice : ";
cin>>choice;
switch(choice)
{
    case 1:
    {
        cout<<"Enter Patient Id"<<endl;
        cin>>patient_id;
        system("cls");
        patient_details(patient_id);
        break;
    }
    case 2:
    {
        cout<<"Enter Patient Id"<<endl;
        cin>>patient_id;
        system("cls");
        inpatient_details_print(patient_id);
        break;
    }
    case 3:
    {
        cout<<"Enter Doctor Id"<<endl;
        cin>>doctor_id;
        system("cls");
        display_doctor_details(doctor_id);
        break;
    }
    case 4:
    {
        break;
    }
    case 5:
    {
        doctor_id=get_doctor_id();
        system("cls");
        display_doctor_details(doctor_id);
        cout<<endl;
        cout<<"1. Update Doctor Name"<<endl;
        cout<<"2. Update Department"<<endl;
        cout<<"3. Update Schedule"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"----------------------------------------------"<<endl;
        cout<<"Enter the choice : ";
        cin>>field;
        cout<<"Enter the new detail : ";
        cin.ignore();
        getline(cin,detail);
        update_doctor_details(doctor_id,field,detail);
        system("cls");
        cout<<"Doctor Details Updated"<<endl;
        display_doctor_details(doctor_id);
        break;
    }
    case 6:
    {
        flag=1;break;
    }

    default:
    {
        cout<<"Invalid Input"<<endl;
    }
}
if(flag==1)
break;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"----------------------------------------------"<<endl;
cout<<"Press y to continue : ";
cin>>ch;
}
