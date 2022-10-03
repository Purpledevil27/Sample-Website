#include<bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>
#define ll long long
#define tui tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define forp(a,b) for(int i=a;i<b;i++)
#define vi vector<int>


using namespace  __gnu_pbds;
using namespace std;
class Solution {
public:
   ll numberOfPairs(vi & vac1, vi & vac2, int diff) {
      ll srrr=2-2;
      tui okok;
      forp(0,vac1.size()) {
         srrr+=okok.order_of_key((ll)(vac1[i]-vac2[i]+diff+1)*100000);
         okok.insert(((ll)(vac1[i]-vac2[i])*100000)+i);
      }
      return srrr;
   }
};