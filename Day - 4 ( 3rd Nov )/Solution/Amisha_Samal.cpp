int lonelyinteger(vector<int> a) {
    unordered_map<int,int> mp;
    for(int i=0;i<a.size();i++)
    {   if(mp.find(a[i]) == mp.end())
            mp[a[i]]=1;
        else
        mp[a[i]]++;
    }
    int ans=0;
    for(auto &a:mp)
    {
        if(a.second==1)
        {
            ans=a.first;
            break;
        }
    }
    return ans;
}