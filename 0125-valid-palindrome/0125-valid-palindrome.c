#include<ctype.h>
bool isPalindrome(char* s) {
    
    int i,j=0;

    for (i=0; s[i] != '\0'; i++)
    {
        s[i] = tolower(s[i]);
    }

    
    for(i=0;s[i]!='\0';i++)
    {
        if(isalnum(s[i]))
        {   
            s[j]=s[i];
            j++;
        }
        
    }
    s[j]='\0';
    
    int l=0,r=strlen(s)-1;

    while(l<r)
    {
        if(s[l]==s[r])
        {
            l++;
            r--;
        }
        else{
            return false;
        }
    }
    return true;

}