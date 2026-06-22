*#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main()
{

//always ami vector  a ba array tah 0 based indexing korbo 
int n ; cin>> n ;
vector<int>v(n+1);
for(int i = 1; i<=n; i++)
{
	cin>>v[i];
}

sort(v.rbegin() , v.rend());

cout<<v[0]<<' '<<v[1]<<' '<<v[2]<<' '<<v[3];




	return 0 ; 
}






// vector copy 
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main()
{
int n ; cin>> n ;
vector<int> vec(n);
for (int i = 0 ; i< n ; i++)
{
	cin>> vec[i];
}


vector<int> copy;
copy = vec;//here we copy 


for (auto it : copy)
{
	cout<<it <<' ';
}



	return 0 ; 
}










#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main()
{

vector<int>vec;
for (int i = 0 ; i< 5; i++)
{
	int x ; cin>> x ; 
	vec.push_back(x);
}
sort (vec.begin() , vec.end());// sort korbe 

cout<<vec.front();//front element dabe 
cout<<vec.back();//last eleement dabe 



	return 0 ; 
}










#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
int main()
{
vector<int>vec;
for (int i = 0 ; i< 5; i++)
{
	int x ; cin>> x ; 
	vec.push_back(x);
}
cout<<*vec.begin()<<' ';
cout <<*vec.rbegin()<<' ';




vec.pop_back();//last index delete kore dai 



cout<<*vec.begin()<<' ';
cout <<*vec.rbegin()<<' ';//last index r address return kore and (*address) dile value return kore 



//eserse function
vec.erase(vec.begin()); //erese r vatore adddress dite hoi 
cout <<*vec.begin()<<' ';    



///find diya index paite chaile 
//its one kind of binary search 

auto it = find(vec.begin() , vec.end() , 3 );
{
	if ( it == vec.end())
	{
		cout<<-1;
	}
	else 
	{
		cout <<it - vec.begin();// it r address theka first address badh diye dabe 
	}
}


	return 0 ; 
}











///max min element niya all 
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
int main()
{
vector<int>vec;
for (int i = 0 ; i< 5; i++)
{
	int x ; cin>> x ; 
	vec.push_back(x);
}

//maxixmum element find and delete  OR  first max and second max find 
auto it = max_element(vec.begin() ,vec.end());
cout<<*it<<' '; 
vec.erase(it);
auto it1= max_element(vec.begin() ,vec.end());
cout<<*it1; 



//minimum element find and delete OR first min and second min find 
auto it = min_element(vec.begin() ,vec.end());
cout<<*it<<' '; 
vec.erase(it);
auto it1= min_element(vec.begin() ,vec.end());
cout<<*it1;




// first min and second min r index find 
auto it2 = max_element(vec.begin() ,vec.end());
cout<<it2-vec.begin()<<' '; 
vec.erase(it);
auto it3= max_element(vec.begin() ,vec.end());
cout<<it3-vec.begin();

}





//unique element ber korar jonno 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    int n;

    cin >> n; 
    // vector size input

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
        // vector এ input নিচ্ছি
    }




//kno vector kah unique korar system

    sort(vec.begin(), vec.end());
    // আগে sort করতে হবে (important)

    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    // duplicate remove করা হচ্ছে

    for (auto it : vec)
    {
        cout << it << ' ';
        // final vector print
    }
        return 0;
}







// binarySearch , lowerBound , upperbound 

#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main()
{

vector<int> vec={1 ,2 , 4 ,7 , 9};

int terget = 7 ;
//binary search 
bool isfound = binary_search(vec.begin() , vec.end() , terget);
cout<<isfound;

//lowerbound and upperbound index 
    auto lb = lower_bound(vec.begin(), vec.end(), terget)-vec.begin();
    auto ub = upper_bound(vec.begin(), vec.end(), terget)-vec.begin();

    cout<<' '<<lb <<' '<<ub;



    //upperbound lowerbound element 

   auto lbi = lower_bound(vec.begin(), vec.end(), terget);
    auto ubi = upper_bound(vec.begin(), vec.end(), terget);
    cout<<" "<<*lbi <<' '<<*ubi;



	return 0 ; 
}
