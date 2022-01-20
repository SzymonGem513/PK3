#include <iostream>
#include "head.h"


using namespace std;

int main() {
    Queue queue1;
    Queue queue2;


    queue1.pushBack(23);
    queue1.pushBack(54);
    queue1.pushBack(63);
    queue1.pushBack(46);
    queue1.pushBack(3);
    queue1.pushBack(100);

    cout<<"Lista liczy "<<queue1.count()<<" elementow."<<endl;

    queue2.pushBack(1111);
    queue2.pushBack(3333);

    queue1.printList();

    queue1.popFront();
    queue1.popFront();
    queue1.popFront();

    queue1.printList();


    queue1 = queue2;

    queue1.printList();

    return 0;
}
