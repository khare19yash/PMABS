void doctor_ui(string s)
{
    char ch='y',c;
    while(ch=='y')
    {
        system("cls");
        string patient_id,doctor_id;
        cout<<"1. Search InPatient Details"<<endl;
        cout<<"2. Search OutPatient Details"<<endl;
        cout<<"3. View Details"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>c;
        switch(c)
        {
            case '1':
            {
                cout<<"Enter Patient Id"<<endl;
                cin>>patient_id;
                inpatient_details_print(patient_id);
                break;
            }
            case '2':
            {
                cout<<"Enter Patient Id"<<endl;
                cin>>patient_id;
                patient_details(patient_id);
                break;
            }
            case '3':
            {
                cout<<"Enter Doctor Id"<<endl;
                cin>>doctor_id;
                system("cls");
                display_doctor_details(doctor_id);
                break;  
            }
            default:
            {
                cout<<"Invalid Input"<<endl;
                break;
            }
    }
    cout<<"Press y to continue : "<<endl;
    cin>>ch;
    }
    
}
