#include <string>
using namespace std;
void strLen(char str[],int &len,int &v_len,int &c_len);
string rev(string str);
int compare(string str1,string str2);
string lower(string str);
string upper(string str);

void strLen(char str[],int &len,int &v_len,int &c_len)
{
    int i=0;
    len=0,v_len=0,c_len=0;
    while(str[i]!='\0')
    {
        len+=1;
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
            str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            {
                v_len+=1;
            }
        else{c_len+=1;}
        i++;

    }
}

string rev(string str)
{
    int j=str.length()-1;
    string ans="";
    while(j>=0)
    {
        ans+=str[j];
        j--;
    }
    return ans;
}

int compare(string str1,string str2)
{
    if(str1.length()==str2.length()){return 0;}
    else if (str1.length()>str2.length()){return 1;}
    else {return -1;}
}

string lower(string str)
{
    for (int i=0;i<str.length();i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i]=(str[i]-'A')+'a';
        }
    }
    return str;
}

string upper(string str)
{
    for (int i=0;i<str.length();i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            str[i]=(str[i]-'a')+'A';
        }
    }
    return str;
}

