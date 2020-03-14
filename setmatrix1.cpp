#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int t;
    
    cin>>t;
    
    while(t--) {
        
        int r;
        cin>>r;
        int c;
        cin>>c;
        
        int arr[r][c];
        int row[r];
        int col[c];
        
        for(int i =0;i<r;i++) {
            
            row[i]=0;
        }
        
        for(int j=0;j<c;j++) {
            
            col[j]=0;
        }
        
        //Reading the matrix
        for(int i=0;i<r;i++) {
            
            for(int j=0;j<c;j++) {
                
                cin>>arr[i][j];
                
                if(arr[i][j]==1) {
                    
                    row[i]=1;
                    col[j]=1;
                    
                }
            }
            
        }
        
        for(int i=0;i<r;i++) {
            
            for(int j=0;j<c;j++) {
                
                if(row[i]==1 || col[j] == 1) {
                    
                    arr[i][j] = 1;
                    
                    
                }
                
            }
            
            
        }
    
         for(int i=0;i<r;i++) {
            
            for(int j=0;j<c;j++) {
                
                  cout<<arr[i][j]<<" ";
                    
                    
                }
             
              cout<<endl;
                
            }
            
            
        
        
        
        
        
        
        
        
        
    }
    return 0;
}
