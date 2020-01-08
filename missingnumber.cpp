
#include <bits/stdc++.h>
using namespace std;


int main() {
    
     int t;
     cin >> t;
     
     
     while(t--) {
         
         int n;
         cin>>n;
         
         vector<int> arr;
         for(int i=0;i<n-1;i++) {
             
                int a;
                cin>>a;
                arr.push_back(a);
                
             
             
         }
        
         
         
         int x1=arr[0];
         
         for(int i=1;i<n;i++) {
             
             
             x1 = x1^arr[i];
         }
         
         int x2=1;
         
         for(int i=2;i<=n;i++) {
             
             
              x2=x2^i;
             
         }
         
         int a = x1^x2;
         
         cout<<a<<endl;
         
    
         
     }
    
    
    
}
