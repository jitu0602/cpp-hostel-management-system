#include <bits/stdc++.h>

using namespace std;

//FUNCTION FOR PRINTING THE ARRAY OF STRING ---------------------------------------------------------------------------------------------------------------------

void print_array_of_string(string* arr,int no_of_words){
    //# SIZE TOH GALT DE RAHA HAI
    //  int size = sizeof(arr) / sizeof(arr[0]);

    // cout<<"size of string array is "<<size<<endl;//printing size of string array

    //-----------------------

        for (int i = 0 ; i < no_of_words ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
}





//STRING FROM LINE FUNCTION---------------------------------------------------------------------------------------------------------------------   
string* get_array_of_string(string line,int no_of_words){

    string* words = new string[no_of_words];
    int k = 0 ;
    for (int i = 0 ; i < no_of_words ; i++){
        for(int j=0 ; j < line.size() ; j++){
            if (line[k] == ' '){
                k++ ;
                break ; //to get the next word
            }
            else if (k<line.length()){
                words[i] += line[k] ;
                k++;
            }
    }
    
}
    return words ;
}


//MAIN FUNCTION---------------------------------------------------------------------------------------------------------------------
int main()
{
    string line = "2 mahesh";
    string *words = get_array_of_string(line,2);
     print_array_of_string(words,2);
    return 0;
}