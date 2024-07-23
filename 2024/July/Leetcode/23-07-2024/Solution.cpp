/*Given an array of integers nums, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, sort them in decreasing order.
Return the sorted array.
Example 1:
Input: nums = [1,1,2,2,2,3]
Output: [3,1,1,2,2,2]
Explanation: '3' has a frequency of 1, '1' has a frequency of 2, and '2' has a frequency of 3.
Example 2:
Input: nums = [2,3,1,3,2]
Output: [1,3,3,2,2]
Explanation: '2' and '3' both have a frequency of 2, so they are sorted in decreasing order.
 */
class Solution {
public:
void sortMp(unordered_map<int,int> &mp,vector<int> &a){
    for(int i=0;i<a.size()-1;i++){
        for(int j=i+1;j<a.size();j++){
            if(mp[a[i]]>mp[a[j]]||(mp[a[i]]==mp[a[j]]&&a[i]<a[j])){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
    vector<int> frequencySort(vector<int>& a) {
        unordered_map<int,int> mp;
        vector<int> k,r;
        for(int i=0;i<a.size();i++){
            if(mp[a[i]]++==0){
                k.push_back(a[i]);
            }
        }
        sortMp(mp,k);
        for(int i=0;i<k.size();i++){
            int t=k[i];
            for(int j=0;j<mp[k[i]];j++){
                r.push_back(t);
            }
        }

        return r;
    }
};
