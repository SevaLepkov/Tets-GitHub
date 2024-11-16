#include <iostream>
#include "HeadIput.h"
#include "HeadFeedback.h"
#include "HeadCoockingFood.h"
using namespace std;

void cookingFood(){
    string answer;
    cout << "What do you want?" << endl;

    cout << "1 - salad"<< endl;
    cout << "2 - hot dish"<< endl;


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
