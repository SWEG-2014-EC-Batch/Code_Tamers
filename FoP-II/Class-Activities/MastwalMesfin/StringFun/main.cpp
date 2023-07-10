#include<iostream>

using namespace std;

string inpuT,inpuTS;
int choicE,k=0;

void inP();
void ouT();
void ruN();
int stringLen(string inpuT);
int stringTypLen(string inpuT);
void stringRev(string inpuT);
void stringLower(string inpuT);
void stringUpper(string inpuT);
int stringCmp();

int main()
{
    ruN();
}

void inP()
{
    cout<<"Enter:\n1. To know the length of a string\n2. To reverse a string\n3. To compare two strings\n"<<
        "4. To convert the uppercase chars to lowercase chars\n5. To convert the lowercase chars to uppercase chars"<<endl<<">";
    cin>>choicE;
    if(choicE!=3)
    {
        cout<<"Enter the string:"<<endl<<">";
        cin>>inpuT;
    }
    else
    {
        cout<<"Enter the first string:"<<endl<<">";
        cin>>inpuT;
        cout<<"Enter the second string:"<<endl<<">";
        cin>>inpuTS;
    }
}

int stringLen(string inpuT)
{
    int i=0;
    for(char a:inpuT)
    {
        i++;
    }
    return i;
}

int stringTypLen(string inpuT)
{
    for(char a:inpuT)
    {
        if(a=='a'||a=='e'||a=='i'||a=='u'||a=='o'||a=='A'||a=='E'||a=='I'||a=='U'||a=='O')
        {
            k++;
        }
    }
    return k;
}

void stringRev(string inpuT)
{   
    for(int i=stringLen(inpuT);i>=0;i--)
    {
        cout<<inpuT[i];
    }
}

int stringCmp()
{
    if(stringLen(inpuT)==stringLen(inpuTS))
    {
        return 0;
    }
    else if(stringLen(inpuT)>stringLen(inpuTS))
    {
        return 1;
    }
        return -1;
}

void stringLower(string inpuT)
{
    int aSchar;
    for(char a:inpuT)
    {
        if(65<=int(a)&&int(a)<91)
        {
            aSchar=int(a)+32;
            a=char(aSchar);
        }
        cout<<a;
    }
}

void stringUpper(string inpuT)
{
    int aSchar;
    for(char a:inpuT)
    {
        if(97<=int(a)&&int(a)<123)
        {
            aSchar=int(a)-32;
            a=char(aSchar);
        }
        cout<<a;
    }
}

void ouT()
{
    switch(choicE)
    {
        case 1:
        {
            cout<<"The length of the string is "<<stringLen(inpuT)<<endl;
            cout<<"The number of vowels in the string is "<<stringTypLen(inpuT)<<endl;
            cout<<"The number of non vowel in the string is "<<stringLen(inpuT)-(k)<<endl;
        }
        break;

        case 2:
        {
            cout<<"The reverse of the string is "; stringRev(inpuT); cout<<endl;
        }
        break;
        case 3:
        {
            cout<<"The return value is "<<stringCmp()<<" So ";
                if(stringCmp()==0)
                {
                    cout<<"The two strings are equal"<<endl;
                }

                else if(stringCmp()==1)
                {
                    cout<<"The first string is greater than the second one"<<endl;
                }

                else
                {
                    cout<<"The second string is greater than the fist one"<<endl;
                }
        }
        break;

        case 4:
        {
            cout<<"When the chars are converted the string is "; stringLower(inpuT);cout<<endl;
        }
        break;

        case 5:
        {
            cout<<"When the chars are converted the string is "; stringUpper(inpuT);cout<<endl;
        }
    }
}

void ruN()
{
    char choicE;
    while(choicE=='e'||choicE!='E')
    {
        inP();
        ouT();
        cout<<"\nEnter e(E) to re-excute the program:"<<endl<<">";
        cin>>choicE;
        system("clear");
    }
}