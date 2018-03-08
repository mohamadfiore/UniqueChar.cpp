

#include <iostream>
using namespace std;


bool uniqueChar(string input){
    for (int i =0 ; i < input.length() ; i++){
        for (int j = i+1 ; j < input.length(); j++){
            if (input[i] == input[j])
                return false;
        }
    }
    
        return true;
}

int main() {
    string name;
    cout<< "Enter Your Word:"<< endl;
    cin >> name;

    if (uniqueChar(name)){
        cout << name << " is unique"<<endl;
    }
    else {
        cout<< name << " is NOT unique"<<endl;
    }
  

    
    return 0;
}
