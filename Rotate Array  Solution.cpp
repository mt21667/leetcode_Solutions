void reverse(vector<int> & arr,int l,int h){
    int i=l,j=h;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++,j--;
    }
}
class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n=arr.size();
        k%=n;
        reverse(arr,n-k,n-1);
        reverse(arr,0,n-k-1);
        reverse(arr,0,n-1);
    }
};
