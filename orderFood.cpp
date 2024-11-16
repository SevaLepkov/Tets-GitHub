#include <iostream>
#include "HeadOrderFood.h"
#include "HeadIput.h"
#include "HeadFeedback.h"
using namespace std;



void orderFood(){
    string answer;
    cout << "What type of food?" << endl;
    cout << "1 - noodles"<< endl;
    cout << "2 - pizza" << endl;

    //feedback(answer);

    while(true){


        cin >> answer;
        if(answer != "1" && answer != "2"){
            input();

        }
        else{
            feedback(answer);
            break;
        }
    }
}
