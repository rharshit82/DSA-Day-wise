// We traverse from last. We decrement value by 1 to see how much that cream can reach
// meanwhile if we find greator number we change max to that number. If we can reach a layer then pb 1 else 0

signed main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int cream[n+10];
        vector<int> ans;
        for(int i=0;i<n;i++) cin>>cream[i];
        int c=cream[n-1];
        for(int i=n-1;i>=0;i--){
            if(cream[i]>=c) c=cream[i];
            if(c>0 and c>=cream[i]){
                ans.pb(1);
                c--;
            }
            else{
                ans.pb(0);
            }
 
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}