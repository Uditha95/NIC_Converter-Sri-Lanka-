#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{

    string nicNo;
    string year = "";
    string Month = "";
    string gender= "";
    int Day = 0;
	


    cout << "Enter your NIC Number"<<endl<<endl;
    cin >> nicNo;
    
   
   
   
   

    if(nicNo.size()==10)
    {
        year= nicNo.substr(0,2 );
       
        nicNo = nicNo.substr(2, 3);
       
        int Day = stoi(nicNo);
        //cout << Day;  whts date in the year
       
            if (Day > 500)
            {   
                gender = "Male";
                Day = Day - 500;
            }
           
            else
            {
                gender = "Female";
            }
       
            if (Day > 0 && Day < 367)
                {
                //isValid = true;
                    if (Day > 335)
                    {
                        Day = Day - 335;
                        Month = "December";
                    }
                   
                    else if (Day > 305)
                    {
                        Day = Day - 305;
                        Month = "November";
                    }
                   
                    else if (Day > 274)
                    {
                        Day = Day - 274;
                        Month = "October";
                    }
                   
                    else if (Day > 244)
                    {
                        Day = Day - 244;
                        Month = "September";
                    }
                   
                    else if (Day > 213)
                    {
                        Day = Day - 213;
                        Month = "Auguest";
                    }
                   
                    else if (Day > 182)
                    {
                        Day = Day - 182;
                        Month = "July";
                    }
                   
                    else if (Day > 152)
                    {
                        Day = Day - 152;
                        Month = "June";
                    }
                   
                    else if (Day > 121)
                    {
                        Day = Day - 121;
                        Month = "May";
                    }
                   
                    else if (Day > 91)
                    {
                        Day = Day - 91;
                        Month = "April";
                    }
                   
                    else if (Day > 60)
                    {
                        Day = Day - 60;
                        Month = "March";               
                    }
                   
                    else if (Day < 32)
                    {
                        Month = "January";
                   }
                  
                    else if (Day > 31)
                    {
                        Day = Day - 31;
                        Month = "Febuary";
                    }
                }
                           
          
                           
        cout << "Your birthday is 19" <<year<<" "<< Month <<" "<< Day<<endl;
        cout << "You are Male";                   
                           
   
    }     
       
        else
        {
            cout << "Invalied NIC Number";
        }

   cout << endl;
   system ("PAUSE");

return 0;
}
