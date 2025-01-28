
// rather than doing n*(n-1)/2 ;

// i first did the xor from all the aelements from 1 to N 
// and then i did the xor of all the elements presents in the array 
// as xor of same elements would cancel out each other , I would be automatically left with the missing elemment

int missingNumber(vector<int>&a, int N) {
    int withOutMissingXor = {};
    for(int i=1;i<=N;i++){
        withOutMissingXor^=i;
    }

    int withMissingXor = {};
    for(int i=0;i<a.size();i++){
        withMissingXor^=a[i];
    }
    return withMissingXor^withOutMissingXor;
}