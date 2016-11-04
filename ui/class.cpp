
//create a base class hospital
/*class Hospital
{
public:
	string hospital_name;
	string hospital_id;
	virtual void set_value(){};
};*/



//create a patient class
class Patient
{
	string patient_name;
	long long int phone_number;
	string blood_group;
	string user_name;
	string email_id;
	char gender;
	int patient_id;
	int age;
	
public:
	static int count;
	Patient()
	{ 
		fstream f1;
		f1.open("counter.csv",ios::in);
		f1>>count;
		f1.close();
		count++; 
	}
	void set_value();
	friend void insert_username_password(Patient ob);
	void insert_into_file();
};
void Patient::set_value()
	{
	patient_id=count;
	cout<<"Enter Your Name : "<<endl;
	cin.ignore();
	getline(cin,patient_name);
	cout<<"Enter Your Gender (M/F) : "<<endl;
	cin>>gender;
	cout<<"Enter Your Age : "<<endl;
	cin>>age;
	cout<<"Enter Your Blood Group : "<<endl;
	cin>>blood_group;
	cout<<"Enter Your Phone number : "<<endl;
	cin>>phone_number;
	cout<<"Enter Your Email Id : "<<endl;
	cin>>email_id;
	}
//create a function to check if the username already exists
	 //void unique_username(string);

void Patient::insert_into_file()
{
	fstream file;
	file.open("outpatient.csv",ios::app);
	cin.ignore();
	file<<patient_id<<","<<patient_name<<","<<gender<<","<<age<<","<<blood_group<<","<<phone_number<<","<<email_id<<endl;
	file.close();
}

//doctor class derived from hospital contains all details about doctors
/*class Doctor:public Hospital
{
	int room_number;
	string department;
	string timings;
	string days;
	string username;
	string password;
};*/

int Patient::count;

