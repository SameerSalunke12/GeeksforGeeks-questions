//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        // Your code goes here
        int ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=1){
                ans=-1;
            }
            else{
                if(arr[i]==1){
                    ans= i;
                    break;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.firstIndex(arr) << endl;
    }
}
// } Driver Code Ends