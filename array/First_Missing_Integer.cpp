int Solution::firstMissingPositive(vector<int> &a) {
   int m[1000000]={0};
    int l=a.size();
    int i=0;
    int ma=0;
    for(i=0;i<l;i++){
        if(a[i]>0)
        m[a[i]]++;
        ma=max(ma,a[i]);
    }
    for(i=1;i<=ma+1;i++){
        if(m[i]==0)
        break;
        
    }
    return i;
    
}
