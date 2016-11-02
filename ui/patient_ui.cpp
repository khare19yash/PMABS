system("clear");
cout<<"1.Login"<<endl;
cout<<"2.New User? Signup"<<endl;
cout<<"Enter your choice : "<<endl;
cin>>choice;
if(choice==1)
#include "login.cpp"
else if(choice==2)
#include "patient_signup.cpp"
else
cout<<"Invalid choice"<<endl;
