#include<bits/stdc++.h>


#include"Constant.h"
using namespace std;

string REGEX(string op)
{
    return "";
}

vector<string> resplit(const string &s, const regex &sep_regex) {
  sregex_token_iterator iter(s.begin(), s.end(), sep_regex, -1);
  sregex_token_iterator end;
  return {iter, end};
}

class Statement {
protected:
    string statement;

public:

    virtual void doOperation() = 0;


    void setStatement(string statement)
    {
        this->statement = statement;
    }

    string getStatement()
    {
        return this->statement;
    }

};


class ADD : public Statement {
private:
    string reg1;
    string reg2;
    string reg3;
public:
    ADD(string s)
    {
        //cout<<"We are here\n";
        vector<string> vec = resplit(s,regex(SEPARATOR));
        reg1 = vec[1];
        reg2 = vec[2];
        reg3 = vec[3];
        cout<<vec.size()<<"\nWe are here\n";
    }
    void doOperation()  {
        // vector<string> vec = resplit(s,regex(SEPARATOR));
        // reg1 = vec[1];
        // reg2 = vec[2];
        // reg3 = vec[3];

        cout << "I am two wheeler" << endl;
    }
};



class ADDI : public Statement {
private:
    string reg1;
    string reg2;
public:
    ADDI(string s)
    {
        vector<string> vec = resplit(s,regex(SEPARATOR));
        reg1 = vec[1];
        reg2 = vec[2];
    }
    void doOperation()  {
        //cout << "I am four wheeler" << endl;
    }
};

class SUB : public Statement {
private:
    string reg1;
    string reg2;
    string reg3;
public:
    SUB(string s)
    {
        vector<string> vec = resplit(s,regex(SEPARATOR));
        reg1 = vec[1];
        reg2 = vec[2];
        reg3 = vec[3];
    }
    void doOperation()  {
        // vector<string> vec = resplit(s,regex(SEPARATOR));
        // reg1 = vec[1];
        // reg2 = vec[2];
        // reg3 = vec[3];

        //cout << "I am two wheeler" << endl;
    }
};



class SUBI : public Statement {
private:
    string reg1;
    string reg2;
public:
    SUBI(string s)
    {
        vector<string> vec = resplit(s,regex(SEPARATOR));
        reg1 = vec[1];
        reg2 = vec[2];
    }
    void doOperation()  {
        //cout << "I am four wheeler" << endl;
    }
};



class LI : public Statement {
private:
    string reg1;
    string reg2;
public:
    LI(string s)
    {
        vector<string> vec = resplit(s,regex(SEPARATOR));
        reg1 = vec[1];
        reg2 = vec[2];
    }
    void doOperation()  {
        //cout << "I am four wheeler" << endl;
    }
};



class ECALL : public Statement {
private:
    //string reg1;
    //string reg2;
public:
    ECALL(string s)
    {
        //vector<string> vec = resplit(s,regex(SEPARATOR));
        //reg1 = vec[1];
        //reg2 = vec[2];
    }
    void doOperation()  {
        //cout << "I am four wheeler" << endl;
    }
};



class LA : public Statement {
private:
    string reg1;
    string reg2;
public:
    LA(string s)
    {
        vector<string> vec = resplit(s,regex(SEPARATOR));
        reg1 = vec[1];
        reg2 = vec[2];
    }
    void doOperation()  {
        cout << "I am four wheeler" << endl;
    }
};