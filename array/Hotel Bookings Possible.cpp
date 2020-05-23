bool Solution::hotel(vector<int> &a, vector<int> &d, int k) {
    vector<pair<int, int> > ans; 
  
   
    int n=a.size();
    for (int i = 0; i < n; i++) { 
        ans.push_back(make_pair(a[i], 1)); 
        ans.push_back(make_pair(d[i], 0)); 
    } 
  
 
    sort(ans.begin(), ans.end()); 
  
    int curr_active = 0, max_active = 0; 
  
    for (int i = 0; i < ans.size(); i++) { 
  
        
        if (ans[i].second == 1) { 
            curr_active++; 
            max_active = max(max_active, 
                             curr_active); 
        } 
  
        
        else
            curr_active--; 
    } 
  
    
    return (k >= max_active); 
}
