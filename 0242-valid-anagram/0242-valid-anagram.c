#include <string.h>
bool isAnagram(char* s, char* t) {

    int f[256]={0},i;

    if(strlen(s)!=strlen(t))
    {
        return false;
    }
    for(i=0;s[i]!='\0';i++)
    {
        f[s[i]]++;
        f[t[i]]--;
    }
    for(int i=0;i<256;i++)
    {
        if(f[i]!=0)
            return false;
    }
    return true;
}