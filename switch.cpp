#include<iostream>
using namespace std;

int main(){
    /*char button;
    cout<<"press the button: ";
    cin>>button;
   switch(button)
   {
    case 'a':
            cout<<"talking";
            break;
    case 'b':
            cout<<"calculation";
            break;
    case 'c':
            cout<<"shopping";
            break;
    case 'd':
            cout<<"dancing";
            break;
    default:
            cout<<"don't play with the robot";
            break;
   }
   return 0;
}
*/
//menu card using switch//
int a;
int qty,total;
int rate;
cout<<"select your drink\n";
cout<<"1.Coffee\n" "2.tea\n" "3.cold coffee\n" "4.milkshake\n";
cin>>a;

switch(a)
{
case 1:
        cout<<"you ordered coffee\n" "enter the quantity:";
        cin>>qty;
        rate=60;
        total=qty*rate;
        cout<<"total amount is:"<<total;
    break;
case 2:
         cout<<"you ordered tea\n" "enter the quantity:";
        cin>>qty;
        rate=40;
        total=qty*rate;
        cout<<"total amount is:"<<total;
    break;
case 3:
         cout<<"you ordered coldcoffee\n" "enter the quantity:";
        cin>>qty;
        rate=100;
        total=qty*rate;
        cout<<"total amount is:"<<total;
    break;
case 4:
        cout<<"you ordered milkshake\n" "enter the quantity:";
        cin>>qty;
        rate=120;
        total=qty*rate;
        cout<<"total amount is:"<<total;
    break;
 
default:
        cout<<"please order something";
    break;
}
return 0;
}