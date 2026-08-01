/*
#include <bits/stdc++.h>
#define nl '\n'
using namespace std;

int main() {
  // stack patro --> last in first out

  // push -- > upore add hbe--> o(1)
  // pop --> upore delete hbe--> o(1)
  // top --> access kora jai only-->o(1)
  // empty besi use hbe--->o(1)
  // stack index niya kaj kore nah

  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(5);

  cout << st.top() << nl;
  st.pop();  // delete 5
  cout << st.top();
  st.pop();    // delete 2
  st.push(3);  // top --> 3
  cout << st.top() << nl;

  // stack khali kora
  cout << "size of stack:" << st.size() << nl;

  // stack khali
  int need_operation = 0;
  while (!st.empty()) {
    need_operation++;
    st.pop();
  }

  cout << "Operation Needed: " << need_operation<<nl;
  cout<<"=================\n";
  st.push(1);
  st.push(2);
  st.push(5);
  st.push(4);
  st.push(6);
  st.push(7);
 stack<int > tamp;

int cnt = 0 ;
while (!st.empty())
{
        int tmp = st.top();

        if (tmp == 2 )
        {
                break;
        }
        else
        {
                cnt++;
                st.pop();

        }
        tamp.push(tmp);
}

 cout<<cnt<<nl;
 cout<<"=========";
cout<<tamp.size();

  return 0;
}


*/

// pblm solve
/*
// 1---->https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_2_A

#include <bits/stdc++.h>
#define nl '\n'
using namespace std;

int main() {
  int n;
  cin >> n;
  int q;
  cin >> q;

  stack<int> s[n];

  while (q--) {
    int type;
    cin >> type;
    if (type == 0) {
      int x, y;
      cin >> x >> y;
      s[x].push(y);
    } else if (type == 1) {
      int x;
      cin >> x;
      if (!s[x].empty()) {
        cout << s[x].top() << nl;
      }

    } else {
      int x;
      cin >> x;
      s[x].pop();
    }
  }
  return 0;
}
*/

// 2 . bracket sequence

#include <bits/stdc++.h>
#define nl '\n'
using namespace std;

int main() {
  stack<char> st;

  int n;
  cin >> n;
  bool flag = true;
  for (int i = 0; i < n; i++) {
    char x;
    cin >> x;

    if (x == '(' or x == '{' or x == '[') {
      st.push(x);
    } 
    else {
      if (st.size() == 0) {
        flag = false;
        break;
      } 
      else {
        if ((st.top() == '(' && x != ')') || (st.top() == '{' && x != '}') ||
            (st.top() == '[' && x != ']')) {
          flag = false;
          break;
        } 
        else {
          st.pop();
        }
      }
    }
  }

  if (st.size()!= 0) {
    flag = false;
  }

  if (flag == true) {
    cout << "yes" << nl;

  } 
  else {
    cout << "no" << nl;
  }

  return 0;
}