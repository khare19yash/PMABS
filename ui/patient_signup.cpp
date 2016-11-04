system("clear");
//create an object of patient class
Patient ob;
//calling set_vale function 
ob.set_value();
insert_username_password(ob);
ob.insert_into_file();
system("clear");
cout<<"Registration Successful"<<endl;
cout<<"Please Sign In"<<endl;
cout<<endl;
user_login();

