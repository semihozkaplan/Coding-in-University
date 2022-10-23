/*
*
* Programmer: Semih Özkaplan
* Student No: 201504013
* Date: 08/04/2022
* Lab Session 2
*
*/

#include <iostream>

using namespace std;

void reverseString(char x[], int lenght);
int stringLength(char y[]);


int main(void) {

    char mystr[20];

    cout << "Please Enter Your String: " << endl;
    cin >> mystr;

    int mysize;

    mysize = stringLength(mystr);
    reverseString(mystr, mysize); 

    return 0;
}

void reverseString(char x[], int lenght)
{
    while (lenght + 1 > 0)
    {
        cout << x[lenght];
        lenght--;
    }
}

int stringLength(char y[])
{
    int i = 0;


    while (y[i] != NULL) {
        i++;

    }



    return i;
}