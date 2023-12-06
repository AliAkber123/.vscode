//Problem Link : https://www.codechef.com/problems/CHEFRECP

#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>
#include <algorithm> 
using namespace std;

bool visited(const vector<int>& vec, int element) {
    return find(vec.begin(), vec.end(), element) != vec.end();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, i, j, m;
        cin >> N;
        int frequency;
        vector<int> arr(N);

        for (i = 0; i < N; i++) {
            cin >> m;
            arr[i] = m;
        }
        
  // same frequency multiple ache kina   
  //the number of occurrences of this type of ingredient is unique
        std::map<int, int> freq ;
        
        for(int element : arr)
        {
            freq[element]++;
        }
        

    

        unordered_set<int> unique; 
        int hasduplicate = 0; 

        
        for(const auto& pair : freq)
        {
            frequency = pair.second;
            
            if(unique.find(frequency) != unique.end())
            {
                hasduplicate=1;
                
                break;
            }
            else
            {
                unique.insert(frequency);
            }
        }
        

        if(hasduplicate == 1)
        {
            cout<<"NO"<<endl;
        }
        

int flag=0;
// contiguous subsequence check
        if(hasduplicate==0){
        
        vector<int> brr;

        for (i = 0; i < N; i++) {
            if (brr.empty()) {
                brr.push_back(arr[i]);
            } else if (arr[i - 1] == arr[i]) {
                
            } else if (arr[i - 1] != arr[i] && visited(brr, arr[i])) {
                cout << "NO" << endl;
                flag=1;
                break;
            } else {
                brr.push_back(arr[i]);
            }
        }
        
        }
        
        if(flag==0 && hasduplicate==0)
        {
            cout<<"YES"<<endl;
        }
        
        
    }
    return 0;
}
