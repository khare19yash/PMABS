void display_doctor_details(string);
void patient_details(string);
void update_doctor_details(string,int,string);
system("cls");
string doctor_id,patient_id,detail;
int field;
cout<<"1. View OutPatient Details"<<endl;
cout<<"2. View InPatient Details"<<endl;
cout<<"3. View Doctor Details"<<endl;
cout<<"4. Update Patient Details"<<endl;
cout<<"5. Update Doctor Details"<<endl;
cout<<"6. Logout"<<endl;
cout<<endl;
cout<<"Enter your choice : ";
cin>>choice;
switch(choice)
{
    case 1:
    {
        cout<<"Enter Patient Id"<<endl;
        cin>>patient_id;
        patient_details(patient_id);
        break;
    }
    case 2:
    {
        cout<<"Enter Patient Id"<<endl;
        cin>>patient_id;
        //inpatient details
        break;
    }
    case 3:
    {
        cout<<"Enter Doctor Id"<<endl;
        cin>>doctor_id;
        display_doctor_details(doctor_id);
        break;
    }
    case 4:
    {
        break;
    }
    case 5:
    {
        cout<<"Enter Doctor Id"<<endl;
        cin>>doctor_id;
        display_doctor_details(doctor_id);
        cout<<"1. Update Doctor Name"<<endl;
        cout<<"2. Update Department"<<endl;
        cout<<"3. Update Schedule"<<endl;
        cout<<"Enter the choice : ";
        cin>>field;
        cout<<"Enter the new detail : ";
        cin.ignore();
        getline(cin,detail);
        update_doctor_details(doctor_id,field,detail);
        break;
    }

    default:
    {
        cout<<"Invalid Input"<<endl;
    }
}