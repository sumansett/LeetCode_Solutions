int romanToInt(char* s) {
    int i,sum=0;
    for(i=0;s[i]!='\0';i++)
    {

        if(s[i]=='I')
        {
            if(s[i+1]=='V')
            {

                sum=sum+4;
                i=i+1;
                continue;

            } 
            if(s[i+1]=='X')
            {

                sum=sum+9;
                i=i+1;
                continue;

            }   
            else
            {
                sum=sum+1;
                continue;
            }
        }
        if(s[i]=='V')
        {
                sum=sum+5;
                continue;
        }
        if(s[i]=='X')
        {
            if(s[i+1]=='L')
            {

                sum=sum+40;
                i=i+1;
                continue;

            } 
            if(s[i+1]=='C')
            {

                sum=sum+90;
                i=i+1;
                continue;

            }   
            else
            {
                sum=sum+10;
                continue;
            }
        }
        if(s[i]=='L')
        {
            sum=sum+50;
            continue;
        }
        if(s[i]=='C')
        {
            if(s[i+1]=='D')
            {

                sum=sum+400;
                i=i+1;
                continue;

            } 
            if(s[i+1]=='M')
            {

                sum=sum+900;
                i=i+1;
                continue;

            }   
            else
            {
                sum=sum+100;
                continue;
            }
        }
        if(s[i]=='D')
        {
            sum=sum+500;
            continue;
        }
        if(s[i]=='M')
        {
            sum=sum+1000;
            continue;
        }
    }

    return sum;
}