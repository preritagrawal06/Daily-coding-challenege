
#include <iostream>
using namespace std;


void convertTime(string t)
{
    
    int h1 = (int)t[1] - '0';
    int h2 = (int)t[0] - '0';
    int HH = (h2 * 10 + h1 % 10);
    
    if (t[9] == 'A')
    {
        if (HH == 12)
        {
            cout << "00";
            for (int i=2; i <= 7; i++)
            {
                cout << t[i];
            }
        }
        else
        {
            for (int i=0; i <= 7; i++)
            {
                cout << t[i];
            }
        }
    }
   
    else
    {
        if (HH == 12)
        {
            cout << "12";
            for (int i=2; i <= 7; i++)
            {
                cout << t[i];
            }
        }
        else
        {
            HH = HH + 12;
            cout << HH;
            for (int i=2; i <= 7; i++)
            {
                cout << t[i];
            }
        }
    }
    cout << endl;
}
int main()
{
    string t1;
    getline(cin, t1);
    convertTime(t1);
    
    return 0;
}