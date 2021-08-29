Given: r-l is always odd => r-l+1 is always even
Answer will always exist
Key point is two adjacent numbers always have GCD as 1
7 8 has GCD 1

signed main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    ll l,r ; cin>>l>>r;
    cout<<"YES"<<endl;
    for(ll i=l; i<=r;i+=2){
        cout<<i<<" "<<i+1<<endl;
    }
    return 0;
}