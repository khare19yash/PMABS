#include<iostream>
#include<ctime>
#include<cstring>
using namespace std;
string function_my()
    {
        time_t now=time(0);
  struct tm * ltm=localtime(&now);
  char day1[20],day2[20],day3[20],day4[20],day5[20],buffer[20];

    ltm->tm_mday=ltm->tm_mday+1;
    strftime (day1,20,"%Y-%m-%d",ltm);
    cout<<"1. ";
    puts(day1);
     ltm->tm_mday=ltm->tm_mday+1;
    strftime (day2,20,"%Y-%m-%d",ltm);
    cout<<"2. ";
    puts(day2);
     ltm->tm_mday=ltm->tm_mday+1;
    strftime (day3,20,"%Y-%m-%d",ltm);
    cout<<"3. ";
    puts(day3);
     ltm->tm_mday=ltm->tm_mday+1;
    strftime (day4,20,"%Y-%m-%d",ltm);
    cout<<"4. ";
    puts(day4);
     ltm->tm_mday=ltm->tm_mday+1;
    strftime (day5,20,"%Y-%m-%d",ltm);
    cout<<"5. ";
    puts(day5);
    string st(day1);
    return st;
    }
    
int main()
{ 
string s=function_my();   

//strcpy(s,function_my);
//cout<<s<<endl;
cout<<s<<endl;
return 0;
}