#include<iostream>
#include<ctime>
#include<cstdlib>
#include<unistd.h>

using namespace std;
class Time //time class to measure current time and give difference between current time and sleep time.
{
    public:
    int hour;
    int mint;
    int sec;
    int settime()
        {
        time_t now =time(0); //getting time
        tm *ltm=localtime(&now);
        hour=ltm->tm_hour;
        mint=ltm->tm_min;
        sec=ltm->tm_sec;
        return 0;
        }

Time gettime()
    {
    Time temp;
    temp.hour=hour;
    temp.mint=mint;
    temp.sec=sec;
    return temp;
    }
  
Time sleeptime(Time naptime, Time wakeup)
    { //calculating sleep time
    Time temp;
    temp.hour=wakeup.hour - naptime.hour;
    temp.mint=wakeup.mint - naptime.mint;
    temp.sec=wakeup.sec - naptime.sec;
    return temp;
    }
};

class Date
    //to get current date and measure age with respect to date of birth
    { 
    public: 
    int day,month,year;
int setDate()
    {
    time_t now =time(0);
    tm *ltm=localtime(&now);
    cout<<"year" <<1900+ltm->tm_year<<endl;
    cout<<"month"<<1+ltm->tm_mon<<endl;
    cout<<"day"<<ltm->tm_mday<<endl;
    year=1900+ltm->tm_year;
    month=1+ltm->tm_mon;
    day=ltm->tm_mday;
    return 0;
    }
Date getdate()//getting date
    {
    Date tmp;
    tmp.year=year;
    tmp.month=month;
    tmp.day=day;
    return tmp;
    }

Date setdob(Date d)
{//getting dob
Date y;
y.year=d.year;
y.month=d.month; 
y.day=d.day;
return y;
}

Date findage(Date y)
    {
    Date now,d2 , age;
    d2.setDate();
    now=d2.getdate();
    age.year=now.year-y.year;
    age.month=now.month-y.month;//finding age 
    age.day=now.day-y.day;
    return age;

//x=date.setdate();
//d1=x-y.setdob();
//cout<<"the age is"<<d1<<endl;
    }
   };

int main( )
    {
    Time t1,t2,t3;//defining time objects
    Time timeatsleep,timeatwake;
    t1.settime( );
    t3=t1.gettime( );
    cout<<"values return from get time\n";
    t1.settime( );
    timeatsleep=t1.gettime();
    sleep(5);
    t1.settime();
    timeatwake=t1.gettime();
    t3=t1.sleeptime(timeatsleep, timeatwake);
    cout<<"time spent in sleeping"<<endl;
    cout<<"hour: "<<t3.hour<<"mint: "<<t3.mint<<"sec: "<<t3.sec<<endl;
//return 0;
    Date d1,d2;
    Date dob1,dob2 ;
    d1.setDate();
    d2=d1.getdate( );
    cout<<" values get from date \n";
//d1.setdob(dob1);
//d1=setdob(dob2)
    dob1=d1.getdate( );
    d2=d1.findage(dob1);
    cout<<"the age is \n";
    cout<<"years"<<d2.year<<"months "<<d2.month<<"days "<<d2.day<<endl;
    return 0;
    }
