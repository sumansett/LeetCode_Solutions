int maxArea(int* height, int heightSize) {
    
    int bestarea=0,curarea;
    int l=0,r=heightSize-1;
    while(l<r)
    {
        if(height[l]<=height[r])
        {
            curarea=(r-l)*height[l];
            l++;
        }
        else{
            curarea=(r-l)*height[r];
            r--;
        }

        if(curarea>bestarea)
        {
            bestarea=curarea;
        }

    }

    return bestarea;
}