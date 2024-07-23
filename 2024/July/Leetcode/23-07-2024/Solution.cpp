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
