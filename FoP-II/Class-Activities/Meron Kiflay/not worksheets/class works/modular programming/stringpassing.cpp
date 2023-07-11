#include <iostream>
using namespace std;
void vow(char st[],int s);
int main()
{
    char st1[10];
    cout<<"enter your string:\n";
    cin.get(st1,10,'\n');
    vow(st1,10);
}
void vow(char st[],int s)
{
   cout<<"the vowels in your string:\n";
   for(int i=0;i<s;i++)
   {
       if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||
          st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U')
       {
           cout<<st[i]<<endl;
       }
   }
}
