#include<iostream>
using namespace std;

int main(){

  int n,grade,x,i;
cin >> n;
for( i = 0; i < n; i++){

cin >> grade;
if (grade >= 38) {
x = grade % 5;
if (x >= 3) {
    grade += 5 -x;
    }
}
cout << grade << endl;
}
return 0;
}