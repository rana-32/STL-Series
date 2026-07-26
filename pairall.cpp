#include <bits/stdc++.h>
using namespace std;
#define nl '\n'





int main()
{

//========
//pair declear
//========

    pair<int, string> p;

    p.first = 10;
    p.second = "Abid";

    cout << p.first << " " << p.second << endl;




//========
//vactor r pair 
//========


    int n;
    cin >> n;
    pair<int, string> p;  // এখানে p declare করতে হবে
    vector<pair<int, string>> v;

    for (int i = 0; i < n; i++) {
        int roll;
        string name;

        cin >> roll >> name;

        p = make_pair(roll, name);//pair banai p r modde rakci 


        v.push_back(p);// p k vector a push korci 
    }

    for (auto p : v) {
        cout << p.first << " " << p.second << '\n';// first emelemnt first priority if first element equal then chake second element ra priririty dabo

    }




//========
//vactor r pair and sort 
//========


pair<int , string > p ;

vector<pair<int , string>> vec;//vector nilam pair datatype r 

int n ; cin>> n ;

for (int i = 0 ; i<n; i++)
{

    int roll ; string name ;
    cin>> roll >> name;

    p = make_pair(roll , name);

    vec.push_back(p);

}

sort (vec.begin() , vec.end());// pair r first elemt a sort korbe first soman hole second chake korbe 

for (auto it : vec)
{
    cout<<it.first<<' '<<it.second<<nl;
}






//========
//Qnique pair make 
//========



pair <string , string > p ;
set<pair<string , string > > st;

int n ;
cin>> n ;

for (int i = 0 ; i< n ; i++)
{
    string a , b ; cin>>a >>  b;
    p = make_pair(a , b); 
    st.insert(p);
}

cout<<st.size();





///===========
///multipair store in vector 
///===========


pair<pair<int , int > , int > p ;

vector<pair<pair<int , int > , int> vec;

int n ; cin>>  n ;

for (int i =0; i< n; i++)
{
    int a , b , c ; cin>> a >> b >> c ;

    p= make_pair (make_pair(a , b) , c );// multippair banaici 

    vec.push_back(p); //vector a push korci 
}


//======
//ex
//======

/*ধরো ইনপুট:
3
1 2 3
4 5 6
7 8 9

তাহলে vec-এ থাকবে:

((1,2),3)
((4,5),6)
((7,8),9)
*/


	return 0 ; 
}





///============
///map frequency count pair 
///===========

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ; cin>> n ;
    pair <int , int > pr ;
    map<pair<int , int > , int > mp ;
    for (int i = 0 ; i< n ; i++)
    {
     int x , y ; cin>> x >> y ;
     pr = make_pair (x , y);
     mp[pr]++;


    }

for (auto it : mp)
{
    cout<<it.first.first<<" "<<it.first.second <<" --> "<<it.second<<endl;
}




    
    return 0;
}








///============
///map marked trick
///===========


#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ; cin>> n ;
    map <int , bool > mp;
    vector<int>vec;
    for (int i = 0 ; i<n ; i++ )
    {
        int x ;
        cin>> x ;
        
        if (mp[x]==false)
        {
            mp[x]= true;
        }
        else 
        {
            vec.push_back(x);
        }
    }

if (vec.size()>0)
{
    cout<<"not possible";
}
else 
{
    cout<<"possible";
}


    
    return 0;
}



//========================
//jmne input dibo omne output dibe mane sort korbe nah 
//==========================

 unordered_map<string , int > mp ;
  int m , n ;
cin>> n >> m ;
  int z = m + n ;
vector <string > vec;
  for (int i = 0  ; i< z ; i++)
  {
    string s ; cin>> s ;

    if(mp[s]==0)
    {
        vec.push_back(s);
    }
    mp[s]++;

  }

  for (auto it : vec)
  {
    if (mp[it]>1)
    {
        cout<<"YES"<<nl;
    }
    else 
    {
        cout<<"NO"<<nl;
    }
  }




  
}

