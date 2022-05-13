#include<bits/stdc++.h>
//#include"Constant.h"
#include"statement.h"
using namespace std;

class Match
{
private:
    vector<Statement*> Code;
public:
    Match(const char *filename)
    {
        freopen(filename, "r", stdin);
        string s;
        int cnt = 1;
        //Statement *statement;
        while(getline(cin,s)){
            cout<<"line "<<(cnt++)<<" : "<<s<<endl;
            Statement *statement;
            string code = s, comment = "";
            // int i = 0;
            // while(i<s.size() && s[i]!='#')
            // {
            //     code += s[i++];
            // }
            // while(i<s.size())comment += s[i++];
            if (regex_match (code,regex(REGEX_ADD)))
            {
                // vector<string>vec =  resplit(code,regex(SEPARATOR));
                // for(auto v:vec)
                // {
                //     cout<<v<<"\t";
                // }
                // cout<<endl;
                statement = new ADD(code);
                statement->doOperation();
            }
            else if (regex_match (code,regex(REGEX_ADDI)))
            {
                // vector<string>vec =  resplit(code,regex(SEPARATOR));
                // for(auto v:vec)
                // {
                //     cout<<v<<"\t";
                // }
                // cout<<endl;
                statement = new ADDI(code);
            }  
            else if (regex_match (code,regex(REGEX_SUB)))
            {
                // vector<string>vec =  resplit(code,regex(SEPARATOR));
                // for(auto v:vec)
                // {
                //     cout<<v<<"\t";
                // }
                // cout<<endl;
                statement = new SUB(code);
            } 
            else if (regex_match (code,regex(REGEX_SUBI)))
            {
                // vector<string>vec =  resplit(code,regex(SEPARATOR));
                // for(auto v:vec)
                // {
                //     cout<<v<<"\t";
                // }
                // cout<<endl;
                statement = new SUBI(code);
            } 
            else if (regex_match (code,regex(REGEX_LI)))
            {
                // vector<string>vec =  resplit(code,regex(SEPARATOR));
                // for(auto v:vec)
                // {
                //     cout<<v<<"\t";
                // }
                // cout<<endl;
                //statement = new LI(code);
            } 
            else if (regex_match (code,regex(REGEX_LA)))
            {
                // vector<string>vec =  resplit(code,regex(SEPARATOR));
                // for(auto v:vec)
                // {
                //     cout<<v<<"\t";
                // }
                // cout<<endl;
                statement = new LA(code);
            } 
            else if (regex_match (code,regex(REGEX_ECALL)))
            {
                // vector<string>vec =  resplit(code,regex(SEPARATOR));
                // for(auto v:vec)
                // {
                //     cout<<v<<"\t";
                // }
                // cout<<endl;
                statement = new ECALL(code);
            } 
            else 
            {
                cout<<"Not a Valid Statement\n";
                continue;
            } 
            statement = 0;
            cout<<comment<<endl;
            //Code.push_back(statement);
        }
        
    }
};