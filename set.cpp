
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
  itsmaller--;//or prev(st.lower_bound(3))
  cout<<* itsmaller<<nl;

  //sob cheya soto value erase
  st.erase(st.begin());

  //sob cheya boro element erase
  st.erase(prev(st.end()));



  //st.size() , st.empty() use kora jai

cout<<"Set Element-->\n";
 for (auto it : st)
 {
    cout<<it<<" ";
 }


  return 0;
}

//multiset ---> unique kore nah

#include <bits/stdc++.h>
#define nl '\n'
using namespace std;

 int main(){

   multiset<int > ms;
ms.insert(2);
ms.insert(1);
ms.insert(2);
ms.insert(3);
ms.insert(3);

// erase -->
ms.erase(2);  //--< all 2 erase kore daba

// jodi akta 2 erase korta chai itarator use korta heb
ms.erase(ms.find(3));




cout<<"all element of ms--->\n";
for (auto it : ms)
{
  cout<<it<<" ";
}


    return 0;
}

// set pbl solve
#include <bits/stdc++.h>
#define nl '\n'
using namespace std;

int main() {
  int n;
  cin >> n;

  int ans = INT_MAX;

  set<int> st;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    st.insert(x);
    auto it = st.find(x);
    auto prv = it, nxt = it;
    if (prv != st.begin()) {
      prv--;
      ans = min(ans, (*it - *prv));
    }
    if (nxt != prev(st.end())) {
      nxt++;
      ans = min(ans, (*nxt - *it));
    }
  }
  cout << ans << nl;

  return 0;
}
