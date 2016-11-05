#include <iostream>
#include <ctime>

using namespace std;

int main( ) 
{
  //char *dt,buffer[80];
  char * dt;
	//current date/time based on current system
	time_t now=time(0);
	tm *ltm=localtime(&now);
	 // print various components of tm structure.

       ltm->tm_mday=ltm->tm_mday+1;
       strftime (dt,20,"%Y-%m-%d",ltm);
       
   
   return 0;
}