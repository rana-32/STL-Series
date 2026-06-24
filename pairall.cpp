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
