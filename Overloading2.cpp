//Joy Thakkar
//24070123051
#include <iostream>
using namespace std;
#include <string>

class Name {
private:
    double sum;
public:
   
        Name(char A, char B) {
        cout<<A;
        cout<<B<<endl;
    }


       Name(string a, string b) {
        cout  << a+b << endl;
    }
};
    
int main() {
    Name A1('A','B');  
    Name A2("Joy","Thakkar");                 
    return 0;
}

//Output
//AB
//JoyThakkar
