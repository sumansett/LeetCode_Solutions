bool isPalindrome(int x) {
    long long rev=0;
    int temp,rem;
    if(x>=0)
    {


    temp=x;
    while(temp!=0)
    {
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
    }

    if(x==rev)
        return true;
    else
        return false;

    }

    else 
        return false;
    
}