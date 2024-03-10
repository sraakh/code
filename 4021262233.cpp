#include <iostream>
#include <cctype>
using namespace std;

class check{
  private:
    string password;
  public:
    void SetPassword(const string &pass){
        password = pass;
    }
    string GetPassword() const{
        return password;
    }
    bool valid() const{
        bool digits= false;
        bool letters= false;
        for(char c:password){
            if(isdigit(c)){
                digits= true;
            } else if(isalpha(c)){
                letters= true;
            }
        }
        return digits&&letters;
    }
};

int main(){
    check check;
    string NowPass="ssaa";
    string NowPass2="s1d2f3";
    check.SetPassword(NowPass);
    if(check.valid()){
        cout<<"The password is correct\n";
    } else{
        cout<<"This password is incorrect\n";
    }
    check.SetPassword(NowPass2);
    if(check.valid()){
        cout<<"The password is correct\n";
    } else{
        cout<<"This password is incorrect\n";
    }

}
