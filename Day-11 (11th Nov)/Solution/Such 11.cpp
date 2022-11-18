#include <iostream>
#include<string>
using namespace std;
int main() {
    //declare variables
    string time;
    int hour;
    int minute;
    int second;
    //get input
    
    cin>>time;
    //extract hour,minute and second
    hour=stoi(time.substr(0,2));
    minute=stoi(time.substr(3,2));
    second=stoi(time.substr(6,2));
    //check for PM
    if(time[8]=='P')
    {
        //if PM add 12 to hour
        //as 12PM is 12:00:00 on 24 hour clock
        hour+=12;
    }
    //if hour is 24 that means it is 00:00:00 on 24 hour clock
    if(hour==24)
    {
        hour=0;
    }
    //display output
    cout<<hour<<":"<<minute<<":"<<second;
    return 0;
}
