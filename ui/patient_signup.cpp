system("cls");
//create an object of patient class
Patient ob;
//calling set_vale function 
ob.set_value();
insert_username_password(ob);
ob.insert_into_file();
fstream f2;
f2.open("counter.csv",ios::out);
f2<<Patient::count;
f2.close();
system("cls");
cout<<"Registration Successful"<<endl;
cout<<"Please Sign In"<<endl;
cout<<endl;
user_login(1);

