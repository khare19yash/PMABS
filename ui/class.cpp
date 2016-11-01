
//create a base class hospital
class Hospital
{
public:
	std::string  Hospital_name;
	int number_of _patients;
};



//create a patient class
class Patient
{
	std::string patient_name;
	long long int phone_number;
	std::string blood_group;
	std::string user_name;
	char gender;
	int patient_id;
	static int count=0;
public:
	Patient(){count++; }
	void set_value
	{
	patient_id=count;
	cout<<"Enter Your Name : "<<endl;
	getline(cin, patient_name);
	cout<<"Enter Your Phone number : "<<endl;
	cin>>phone_number;
	cout<<"Enter Your Gender (M/F) : "<<endl;
	cin>>gender;
	cout<<"Enter Your username : "<<endl;
	cin>>
	}
//create a function to check if the username already exists
	 void check_username(string);
};

//doctor class derived from hospital contains all details about doctors
class Doctor:public Hospital
{
	int room_number;
	string timings;
	string days;
	string username;
	string password;
};

int patient::count;

