#include<string.h>
int firstUniqChar(char* s) {

    int fre[256]={0};
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        fre[s[i]]++;
    }

    for(i=0;s[i]!='\0';i++)
    {
        if(fre[s[i]]==1)
        {
            return i;
        }
            
    }
    return -1;
}