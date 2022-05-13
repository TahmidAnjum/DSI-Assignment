#include<bits/stdc++.h>
//#include"Constant.h"
#include"Match.h"

using namespace std;

// string MULTI_SPACE_0 =  "(\\s)*";
// string MULTI_SPACE_1 =  "(\\s)+";
// string REGISTER =  "[a-zA-z][0-9]";
// string NUMBER = "[0-9]+";
// string VARIABLE = "(("+NUMBER+")|("+REGISTER+"))";
// string COMMA =  ",";

// vector<string> resplit(const string &s, const regex &sep_regex = regex{"\\s+"}) {
//   sregex_token_iterator iter(s.begin(), s.end(), sep_regex, -1);
//   sregex_token_iterator end;
//   return {iter, end};
// }

// map<string,int> 

int main()
{   
    // string s;
    // //regex rgx("\\s*,*\\s+");
    // string regex_string(MULTI_SPACE_0+"add(i)*"+MULTI_SPACE_1+REGISTER+MULTI_SPACE_0+COMMA+MULTI_SPACE_0+VARIABLE+MULTI_SPACE_0+COMMA+MULTI_SPACE_0+VARIABLE+MULTI_SPACE_0);
    // regex rgx(regex_string);
    
    
    // FILE* f = freopen("ascii.txt", "r", stdin);
    // //string s;
    // int cnt = 1;
    // while(getline(cin,s)){
    //     // smatch m;
    //     // regex_search(s, m, rgx); 
    //     // stringstream ss(s);
    //     // string t;
    //     // while (getline(ss,t,','))
    //     // {
    //     //     cout<<t<<"\n";
    //     // }
    //     //vector<string> vec = resplit(s,rgx);
    //     //for(auto v:vec) cout<<v<<endl;
        
        
    //     cout<<"line : "<<(cnt++)<<endl;
    //     // cout<<"String that matches the pattern:"<<endl;
    //     // for (auto x : m) 
    //     //     cout << x << " "; 
    //     if (regex_match (s,rgx))
    //     {
    //         vector<string>vec =  resplit(s,regex(SEPARATOR));
    //         for(auto v:vec)
    //         {
    //             cout<<v<<"\t";
    //         }

    //     }
    //         //cout << "string:object => matched\n";
    //     cout<<endl;
    // }
    //fclose(f2);
    Match m("ascii.txt");
    return 0;
}
