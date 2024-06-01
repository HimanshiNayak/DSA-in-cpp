#include<iostream>
using namespace std;
int main() { 

    //nested switchcase

    int num =1;
    char ch ='A';
    switch(ch){
        case 'A':
        switch (num)
        {
        case 1:
            cout<<"the num is: "<<num;
            break;
        default:
            cout<<"Default case";
        }
              cout<<"and the character is 'A'";
              break;
        case 2:
            cout<<"Number is two";
            break;
        default:
            cout<<"default statement";
    }
    return 0;
}


#include<iostream>
using namespace std;
int main() { 

    //using exit(0):to exit out of a switch case inside an infinte loop
    int num =1;
    while(1){
        cout<<"How are u?";
        switch(num){
            case 1:
                cout<<"Fine";
                break;
            default:
                cout<<"U tell first?";
        }
          exit(0);
    }
        return 0;
}
