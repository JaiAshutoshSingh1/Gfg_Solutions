//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
         // Size of the array
        int n = arr.size();

       //Initialize two variables      
        int ans  = 0;
        int freq = 0;
        
        for(int i = 0; i < n; i++){
            
            if(freq == 0){
                ans = arr[i];
            }
            
            if(ans == arr[i]){
                freq++;
            }
            else{
                freq--;
            }
        }
        
        int count = 0;
        
        for(int i = 0; i < n; i++){
            if(arr[i] == ans){
                count++;
            }
        }
        
        if(count > (n/2)){
            return ans;
        }else{
            return -1;
        }
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.majorityElement(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends