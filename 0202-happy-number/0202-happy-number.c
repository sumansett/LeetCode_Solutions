/*this function is used to calculate the sum of square
19-->1^2+9^2=1+81=82
and return this total sum 82 to main function */

int nextVal(int num)
{   int sum=0,digit;
    while(num!=0)
    {
        digit=num%10;
        sum=sum+(digit*digit);
        num=num/10;
    }
    return sum;
}
bool isHappy(int n) {
    int slow=n,fast=nextVal(n);
    while(fast!=1 && fast!=slow)
    {
        slow=nextVal(slow);
        fast=nextVal(nextVal(fast));

    }
    if (fast==1)
    {
        return true;
    }
    else
    {
        return false;
    }
   
}
