#include <iostream>
#include <stack>
#include <queue>
#include <map>
#include <list>

using namespace std;

int main() {
    // Stack
    stack<int> a;

    // Push elements onto the stack
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);

    // Display the top element
    cout << a.top() << endl; 
    a.pop();                 
    cout << a.top() << endl; 

    // Queue
    queue<int> b;

    // Push elements into the queue
    b.push(10);
    b.push(40);
    b.push(30);
    b.push(20);
    b.push(1000);

    // Display the front element
    cout << "Front element is: " << b.front() << endl; 
    b.pop();                                          
    cout << "Front element is: " << b.front() << endl; 
    b.pop();
    b.pop();
    cout << "Front element is: " << b.front() << endl; 
    cout << "Last element is: " << b.back() << endl;    

    // Map
    map<int, string> hash;

    // Insert key-value pairs into the map
    hash[1] = "Likitha";
    hash[5] = "Modali";
    hash[4] = "Cipher Schools";
    hash[2] = "Lpu";

    // Display specific values using keys
    cout << "Value at 1 and 5 are: " << hash[1] << " " << hash[5] << endl;

    // Iterate through the map and display key-value pairs
    for (auto j = hash.begin(); j != hash.end(); j++) {
        cout << "The key-value pair is: " << j->first << " " << j->second << endl;
    }

    // List
    list<int> c;
    c.push_back(4);
    c.push_front(1);
    c.push_back(3);

    c.pop_back();
    c.pop_front(); 

    c.sort(); 

    // Iterate through the list and display elements
    for (auto i = c.begin(); i != c.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}
