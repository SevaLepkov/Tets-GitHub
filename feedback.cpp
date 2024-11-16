#include <iostream>
#include "HeadFeedback.h"

using namespace std;

void feedback(string answer){
    if (answer == "1"){
        cout << "delicious"<< endl;
    }
    else{
        cout << "It's not tasty" << endl;
    }
}
