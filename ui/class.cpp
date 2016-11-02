
//create a base class hospital
class Hospital
{
public:
	string  Hospital_name;
	int number_of _patients;
	string hospital_id;
};



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
	static int count;
public:
	Patient(){count++; }
	void set_value
	{
	patient_id=count;
	cout<<"Enter Your Name : "<<endl;
	getline(cin, patient_name);
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
};

//doctor class derived from hospital contains all details about doctors
class Doctor:public Hospital
{
	int room_number;
	string department;
	string timings;
	string days;
	string username;
	string password;
};

int patient::count=60;

