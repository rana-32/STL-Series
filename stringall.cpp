#include <bits/stdc++.h>
using namespace std;

int main()
{




    // =====================================================
    // STRING add 
    // =====================================================


        string t ="";
        string s ="abidhasan";
         for (auto i : s )
         {
          t+=i;
         }

         t+="rana";





    // =====================================================
    // STRING INPUT
    // =====================================================

    
    string s;
    cin >> s;              // Single word input

    string s;
    getline(cin, s);       // Full line input

    int t;
    cin >> t;
    cin.ignore();          // Remove newline this is use for test case of string with getline 

    while(t--)
    {
        string s;
        getline(cin, s);
        cout << s << '\n';
    }
    


    // =====================================================
    // CHARACTER TO NUMBER
    // =====================================================

    
    cout << ('A' - 'A');   // 0

    cout << ('Z' - 'A');   // 25
    


    // =====================================================
    // STRING COMPARISON
    // =====================================================

    
    string a = "abcaa";
    string b = "abd";

    if(a < b)
        cout << b << " is bigger";

    // Complexity:
    // O(min(n,m))
    


    // =====================================================
    // PREFIX
    // =====================================================

    
    string s = "abcdef";

    for(int i = 1; i <= s.size(); i++)
    {
        cout << s.substr(0,i) << endl;
    }
    


    // =====================================================
    // SUFFIX
    // =====================================================

    
    string s = "abcdef";

    for(int i = 0; i < s.size(); i++)
    {
        cout << s.substr(i) << endl;
    }
    


    // =====================================================
    // SUBSTRING GENERATOR
    // =====================================================

    
    string s = "abc";

    for(int i = 0; i < s.size(); i++)
    {
        for(int j = 1; j <= s.size()-i; j++)
        {
          string t =  s.substr(i, j) ;
          cout<<t<<nl;
        }
    }

    // Using substr:
    // Complexity O(n^3)

    // Without copy:
    // Complexity O(n^2)
    




 // =====================================================
    // SUBSTRING  chake 
    // =====================================================
         
         

        string x = "abidhasan";
        string s = "has";

        if (x.find(s) != string::npos)
        cout << "Yes";
        else
        cout << "No";












    // =====================================================
    // SUBSEQUENCE
    // =====================================================

    /*
    String = "abc"

    Subsequences:

    ""
    a
    b
    c
    ab
    ac
    bc
    abc

    Total:
    2^n
    */


    // =====================================================
    // UPPER LOWER DIGIT CHECK
    // =====================================================

    
    char c = 'A';

    if(isupper(c))
        cout << "Upper";

    if(islower(c))
        cout << "Lower";

    if(isdigit(c))
        cout << "Digit";
    


    // =====================================================
    // COUNT UPPER LOWER DIGIT
    // =====================================================

   
    string s = "abCd5";

    int upper = 0;
    int lower = 0;
    int digit = 0;

    for(char c : s)
    {
        if(isupper(c))
            upper++;

        else if(islower(c))
            lower++;

        else if(isdigit(c))
            digit++;
    }

    // Complexity:
    // O(n)
    


    // =====================================================
    // LETTER FREQUENCY COUNT
    // =====================================================

   
    string s = "abacda";

    int freq[26] = {0};

    for(char c : s)
    {
        freq[c-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        if(freq[i])
        {
            cout << char(i+'a') << " : "<< freq[i]<< endl;
        }
    }

    // Complexity:
    // O(n)
    


    // =====================================================
    // STRING TO INTEGER
    // =====================================================

  
    string s = "123456";

    int x = stoi(s);

    cout << x;
    


    // =====================================================
    // INTEGER TO STRING
    // =====================================================

 
    int x = 123456;

    string s = to_string(x);

    cout << s;
 

    // =====================================================
    // INTEGER TO STRING (space string )
    // =====================================================

  
    string s = "1 2 3 4 5 6";
    string t = "";

    for(char c : s)
    {
    if(c != ' ')
     t += c;
    }

    int x = stoi(t);

    cout << x;





    // =====================================================
    //string element erase  
    // =====================================================
       
        string s = "abidhasan";

        s.erase(s.begin() + 1);

        cout << s;







    // =====================================================
    //vector of string 
    // =====================================================



      vector<string>vec(5);

      for (int i = 0; i< 5 ; i++)
      {
      string s ; cin>> x ;
      vec.push_back(x);
      }

     for (auto it : vec)
      {
      cout<<it <<' ';
      }









    // =====================================================
    // DOUBLE QUOTE IN STRING
    // =====================================================

    /*
    string s = "\"Hello\"";

    cout << s;

    // Output:
    // "Hello"



    */


    // =====================================================
    // BACKSLASH IN STRING
    // =====================================================

    /*

    string s = "\\";

    cout << s;

    // Output:
    // \


    */


    // =====================================================
    // ESCAPE CHARACTER
    // =====================================================

    /*
    \n  -> New line
    \t  -> Tab
    \"  -> Double quote
    \\  -> Backslash
    */









    return 0;
}


    // =====================================================
    // string a vector r almost sob function kaj kore 
    // =====================================================




