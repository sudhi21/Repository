#include <bits/stdc++.h>
using namespace std;


bool compare(pair<int,int> p1,pair<int,int> p2) {
    
    
    if(p1.second == p2.second) {
        
        return p1.first > p2.first;
        
    }
    
    return p1.second>p2.second;
    
}



void topFrequency(int arr[],int k,int n) {
    
     //unorder map to store frequency of each integer
      unordered_map<int,int> um;
      
    for(int i=0;i<n;i++) {
        
        um[arr[i]]++;
        
    }
    //Converting this to vector form so that it can easily be sorted based on our required terms using compare operator
    
    
    vector<pair<int,int>> freqNum (um.begin(),um.end());
    
    //Sorting our vector based on our compare
    
    sort(freqNum.begin(),freqNum.end(),compare);
    
    
    
    for(int i=0;i<k;i++) {
        
        
        cout<< freqNum[i].first<<" ";
    }
    
      
      
     
    
    cout<<endl;
    
    
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int t;
    cin>>t;
    
    while(t--) {
        
        int n;
        int k; 
        
        cin>>n;
        cin>>k;
        int arr[n];
        for(int i=0;i<n;i++) {
            
            cin>>arr[i];
            
        }
        topFrequency(arr,k,n);
        
        
        
    }
    
    return 0;
}
