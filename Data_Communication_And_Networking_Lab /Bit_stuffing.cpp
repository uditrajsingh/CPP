#include <iostream>
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
string bit_stuff(string db){
    string result = "";
    string buffer = "";
    for(int i=0; i<size(db); i++){
        int buff_len = size(buffer);
        char current = db[i];
        if((buff_len<5)&(current == '1')){
            buffer += current;
        }else if((buff_len != 0)&(current == '0')){
            result += buffer + current;
            buffer = "";
        }else if(buff_len == 5){
            result += buffer + "0";
            buffer = "";
            i --;
        }else{
            result += current;
        }
    }
    if(size(buffer) == 5){
        result += buffer +'0';
    }else if(size(buffer) != 5){
        result += buffer;
    }else{
        return result;
    }
    return result;

}
int main(int argc, char const *argv[])
{
    string str="1110111111010111111111001011111";
    string stuffed = bit_stuff(str);

    cout << "Size: " << size(stuffed) << "\n";
    for(int i=0; i<size(stuffed); i++){
        char s = stuffed[i];
        cout << "Data: " << s << "\n";
    }
    return 0;
}
