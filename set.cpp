
//set a element unique and sort thake 
//set a vatore index nai
#include <bits/stdc++.h>
#define nl '\n'
using namespace std;

 int main(){
   
  set <int > st;
  st.insert(1);
  st.insert(2);
  st.insert(2);
  st.insert(4);
  st.insert(3);

  //remove 
  if (st.find(2)!=st.end())
  {
    st.erase(2);
  }

  //set r modde 3 ache naki?
  // st.find()--->return iterator 
  if (st.find(3)!=st.end())
  {
    cout<<"yes"<<nl;
  }
  
  //set diya position ber kora 
   auto it = st.find(1);
  if (it!=st.end())
  {
    auto dst = distance(st.begin() ,it);
    cout<<dst<<nl;
  }


  //upperbound and lowerbound

  //upper bund-->return senoir value 
  auto it1 = st.upper_bound(3);
  cout<<*it1<<nl;

  //lower bound--> return same or senior value 
  auto it2 = st.lower_bound(3);
  cout<<*it2<<nl;

  //find junior value 

  auto itsmaller = st.lower_bound(3);
  itsmaller--;
  cout<<* itsmaller<<nl;

  //sob cheya soto value erase 
  st.erase(st.begin());

  //sob cheya boro element erase 
  st.erase(prev(st.end()));


 for (auto it : st)
 {
    cout<<it<<" ";
 } 


  return 0;
}