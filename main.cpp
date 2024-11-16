#include <iostream>
#include "HeadCoockingFood.h"
#include "HeadOrderFood.h"
using namespace std;



int main()
{
    string answer;
    cout << "open the freezer." << endl;
    cout << "Are there any products in the fridge? (Y/N)" << endl;

     cin >> answer;

     if(answer == "Y" || answer == "y"){
        cookingFood();
     }
     else{
        orderFood();
     }

    return 0;
}
