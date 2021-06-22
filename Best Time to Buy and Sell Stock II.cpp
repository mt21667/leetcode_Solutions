class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int mini=arr[0];
        int maxi=arr[0];
        int i=0;
        int profit=0;
        while(i<arr.size()-1){
            while(i<arr.size()-1 && arr[i]>=arr[i+1])
                i++;
            mini=arr[i];
            while(i<arr.size()-1 && arr[i]<=arr[i+1])
                i++;
            maxi=arr[i];
            profit+=maxi-mini;
        }
        return profit;
    }
};
