vector<int> Solution::wave(vector<int> &a) {
    vector<int> s(a.size());
    sort(a.begin(),a.end());
    int i,j;
    int l=a.size();
    if(l%2==0){
        j=1;
        for(i=0;i<l;i+=2)
        {s[j]=a[i];j+=2;}
        j=0;
        for(i=1;i<l;i+=2){
            s[j]=a[i];j+=2;
        }
        
    }
    else{
        s[l-1]=a[l-1];
        l--;
        j=1;
        for(i=0;i<l;i+=2)
        {s[j]=a[i];j+=2;}
        j=0;
        for(i=1;i<l;i+=2){
            s[j]=a[i];j+=2;
        }
        
    }
    return s;
}
