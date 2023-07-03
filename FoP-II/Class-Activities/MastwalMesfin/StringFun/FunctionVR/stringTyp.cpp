#include"strinG.h"

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