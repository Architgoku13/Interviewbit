int Solution::solve(vector<string> &A) {
    long double a,b,c;
    a = stold(A[0]);
    b = stold(A[1]);
    c = stold(A[2]);
    
    for(int i=3;i<A.size();i++)
    {
        if((a+b+c)>1 && (a+b+c)<2)
            return 1;
            
        //cout<<a<<" "<<b<<" "<<c<<"\n";
        
        if((a+b+c)>=2)
        {
            if(a>b && a>c)
                a=stold(A[i]);
            else
            if(b>a && b>c)
                b=stold(A[i]);
            else
                c=stold(A[i]);
        }
        else
        {
            if(a<b && a<c)
                a=stold(A[i]);
            else
            if(b<a && b<c)
                b=stold(A[i]);
            else
                c=stold(A[i]);
        }
    }
    
    if((a+b+c)>1 && (a+b+c)<2)
        return 1;
    
    return 0;
}
