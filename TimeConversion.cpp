#include <iostream>
using namespace std;

int main() {
   char s[10];
   for(int i=0;i<10;i++)
   {
   cin>>s[i];
   }
   int h1,h2,hh;
   h1=s[0]-48;
   h2=s[1]-48;
   hh=(10*h1)+h2;
   if(s[8]=='A'||s[8]=='a')
   {
       if(hh<12)
       {
          for(int i=0;i<8;i++)
       {
         cout<<s[i];
       }
       }
       else if(hh==12)
       {
           cout<<0<<0;
           for(int i=2;i<8;i++)
         {
         cout<<s[i];
         }
       }
   }
   if(s[8]=='P'||s[8]=='p')
   {
       if(hh<12)
       {
           int sum= 12+hh;
       cout<<sum;
       for(int i=2;i<8;i++)
       {
         cout<<s[i];
       }
       }
       else if(hh==12)
       {
           cout<<1<<2;
           for(int i=2;i<8;i++)
         {
         cout<<s[i];
         }
       }
   }
}