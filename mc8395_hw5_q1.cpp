#include <iostream>
using namespace std;
int main() {
    int currentRow;
    int userNum;
    int multiple;
    cout<<"Please input a positive integer:"<<endl;
    cin>>userNum;
    for(currentRow = 1; currentRow <= userNum; currentRow++ ){
        //print the line of multiples of the line count up to the user num*linecount
        for (multiple = currentRow;multiple<=currentRow*userNum;multiple+=currentRow)
            cout<<multiple<<"\t";
        //output the line count plus itself up to the current linecount * usernum
    cout<<endl;
    }
}
