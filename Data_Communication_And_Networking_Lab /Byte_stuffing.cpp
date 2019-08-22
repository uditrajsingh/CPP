#include<iostream>
#include <string>
using namespace std;
int size(string str){
    string::iterator it;
    int sz = 0;
    for(it=str.begin(); it!=str.end(); it++){
        sz ++;
    }
    return sz;
}
string byte_stuff(string db, string flag, char esc='0'){
    string result = "";
    result += flag;

    int i = 8;
    while(i<(size(db)-8)){
        string buffer = "";
        int j = 0;
        while(j<9){
            if(i+j > (size(db)-8)){
                result += db[i];
                break;
            }
            if(size(buffer) == 8 && buffer == flag){
                result += esc + buffer + esc;
                i += 7;
            }else if(size(buffer) == 8 && buffer != flag){
                result += db[i];
            }else{
                buffer += db[i+j];
            }
            j++;
        }
        i++;
    }

    return result+flag;

}

int main()
{
    string str="011111101111111111111111111111101111110";
    string stuffed = byte_stuff(str, "01111110", '0');

    cout << "Size: " << size(stuffed) << "\n";
    for(int i=0; i<size(stuffed); i++){
        char s = stuffed[i];
        cout << "Data: " << s << "\n";
    }

    return 0;
}
