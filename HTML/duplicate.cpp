#include <iostream>
#include <string>
using namespace std;

int min(int x, int y)
{
    return (x < y)? x: y;
     
}

float ang(string s)
{
    int a = s[0] -'0' ; 
    int b = s[1] - '0' ; 
    int c = s[3] -'0' ; 
    int d = s[4] - '0' ; 
    int h = a*10 + b ; 
    int m = c*10+d;
    if (h <0 || m < 0 || h >12 || m > 60)
        printf("Wrong input");
 
    if (h == 12) h = 0;
    if (m == 60)
     {
      m = 0;
      h += 1;
       if(h>12)
        h = h-12;
     }
    float hour_angle = 0.5 * (h * 60 + m);
    float minute_angle = 6 * m;
 
   
    float angle = abs(hour_angle - minute_angle);
 
    angle = min(360 - angle, angle);
 
    return angle;
}


int main() {
    string s;
    cin>>s;
    
    float result;
    result=ang(s);
    cout<<result;
    
    
}