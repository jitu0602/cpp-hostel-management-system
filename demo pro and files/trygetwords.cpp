#include <bits/stdc++.h>

using namespace std;

string* get_words(string filename){
    fstream in ;
    in.open(filename,ios::in);
    string word ;
    int i = 0 ;
    while (in >> word ){
        i++ ;
    }
 cout<<" no of words are" << i <<endl;

    in.close();
    string* words = new string[i];
    in.open(filename,ios::in);
    i = 0 ;
    while (in >> word ){
        words[i] = word ;
        i++ ;
    }
    in.close();
    return words ;
}

int main(){
    string  filename = "demofile.txt";
    string* words = get_words(filename);
    for (int i = 0 ; i < 10 ; i++){
        cout<<words[i]<<" ";
    }
    cout<<endl;
    return 0 ;
}