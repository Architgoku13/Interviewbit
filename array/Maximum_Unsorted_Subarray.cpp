vector<int> Solution::subUnsort(vector<int> &A) {
    int n = A.size();
    int min_ele = INT_MAX, max_ele = INT_MIN;
    bool unsorted_part = false;
    for(int i = 1; i < n; i++) {
        if(A[i] < A[i - 1]) {
            unsorted_part = true;
        }
        if(unsorted_part) {
            min_ele = min(A[i], min_ele);
        }
    }
    unsorted_part = false;
    for(int i = n - 2; i >= 0; i--) {
        if(A[i] > A[i + 1]) {
            unsorted_part = true;
        }
        if(unsorted_part) {
            max_ele = max(A[i], max_ele);
        }
    }

    int l, r;
    for(l = 0; l < n; l++) {
        if(min_ele < A[l]) {
            break;
        }
    }
    for(r = n - 1; r >= 0; r--) {
        if(max_ele > A[r]) {
            break;
        }
    }

    if(l < r) {
        return {l, r};
    }
    else {
        return {-1};
    }
}

