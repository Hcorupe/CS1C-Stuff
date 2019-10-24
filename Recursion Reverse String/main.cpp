
/*
 * Programmer : Harrison Corupe
 * Date       : 8/18/19
 * Class      : CS1C
 */

#include <iostream>
#include <string>
using namespace std;


void reverseIt(char str1[], int start , int end);
void reverseRec(char str1[] ,int start , int end);
void print(char str1[]);

int main() {






    char s1[] = "abcdefghijklmnopqrstuvwxyz";


    cout << "Iterative:"<<endl;
    reverseIt(s1, 11, 18);
    reverseIt(s1, 4, 22);
    reverseIt(s1, 0, 25);

    cout << "Recursion:"<<endl;
    reverseRec(s1, 11,18);
    print(s1);
    cout << endl;
    reverseRec(s1, 4,22);
    print(s1);
    cout << endl;
    reverseRec(s1, 0,25);
    print(s1);
    cout << endl;
    cout << endl;



    return 0;
}



void reverseIt(char str1[], int start, int end){

    // make copy of str1 into str2
    // reverse
    //abcdefghijklmnopqrstuvwxyz
    //abcdefghijksrqponmltuvwxyz

    char str2[25];
    strcpy(str2,str1);

    int s1 = start;
    int e1 = end;
    //cout << "stsart" << start << endl;
    //cout << "end " << end <<endl;

    for(int count = end - start; count >= 0 ; count--,s1++,e1--) {

        //cout << str2[s1] << endl;
        str2[s1] = str1[e1];

    }
        //cout << str1 << endl;
        cout << str2 << endl;



}

void reverseRec(char str1[],int start , int end){


    if(start >= end)
        return;

    char front = str1 [start];
    char back = str1 [end];

    str1 [start] = back;
    str1 [end] = front;

    start++;
    end--;

    reverseRec(str1, start , end);

}

void print(char str1[]) {

    for (int i = 0; i < strlen(str1); ++i)
        cout << str1[i];
}