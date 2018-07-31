#include <iostream>
#include <list>

using namespace std;

void findMiddleElement(list<int> numbersList) {

    int size = numbersList.size();

    cout << "Size of list: " << size << endl;

    list<int>::iterator it = numbersList.begin();

    // O(1) because its a simple comparison and no matter 
    // how many elements you give it. It will always be O(1)
    if (numbersList.size()%2 == 0){
        advance(it, ((size/2) -1));
    } else {
        advance(it, size/2);
    }

    cout << "Middle element = " << *it << endl;
}

int main()
{
    list<int> numbersListEven = { 7, 5, 16, 8};
    findMiddleElement(numbersListEven);

    list<int> numbersListOdd = { 7, 5, 16, 8, 10};
    findMiddleElement(numbersListOdd);
}
