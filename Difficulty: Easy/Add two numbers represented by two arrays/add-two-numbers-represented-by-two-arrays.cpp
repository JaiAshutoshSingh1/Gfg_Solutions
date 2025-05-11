//{ Driver Code Starts
// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    string calc_Sum(vector<int>& arr1, vector<int>& arr2) {
        // Complete the function
    string result;
       int carry=0;
       int i=arr1.size()-1;
       int j=arr2.size()-1;
       
     while(i >= 0 && j >= 0) {
         int sum = arr1[i]+arr2[j]+carry;
         int digit =sum%10;
         result.push_back(digit+'0');
         carry = sum/10;
         i--; j--;
     }
     while(i >= 0) {
        int sum = arr1[i]+carry;
        int digit = sum % 10;
        result.push_back(digit + '0');
        carry = sum/10;
        i--;
    }
    while(j >= 0) {
        int sum = arr2[j]+carry;
        int digit = sum % 10;
        result.push_back(digit + '0');
        carry = sum/10;
        j--;
    }
    if(carry){
        result.push_back(carry + '0');
    }
     while (result[result.size()-1]=='0')
    {
        result.pop_back();
    }
     reverse(result.begin(),result.end());
     return result;
    }
};


//{ Driver Code Starts.
/* Driver program to test above function */
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {

        vector<int> arr1, arr2;
        string input1;
        getline(cin, input1);
        stringstream ss(input1);
        int number1;
        while (ss >> number1) {
            arr1.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream sss(input2);
        int number2;
        while (sss >> number2) {
            arr2.push_back(number2);
        }
        Solution ob;
        // Function calling
        // vector<int> v;
        string v = ob.calc_Sum(arr1, arr2);

        // for (int i = 0; i < v.size(); i++)
        //     cout << v[i] << " ";

        // cout << endl;
        cout << v << endl;
        cout << "~" << endl;
        // string tilde;
        // getline(cin, tilde);
    }

    return 0;
}

// } Driver Code Ends