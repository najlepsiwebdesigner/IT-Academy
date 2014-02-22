#include <iostream>
#include <string>
#include <map>
 
using namespace std;
 
class Fruit {
    public:
        static Fruit* getFruit(const string& type);
        static void printCurrentTypes();
 
    private:
        static map<string,Fruit*> types;
        string type;
 
        // note: constructor private forcing one to use static getFruit()
        Fruit(const string& t) : type( t ) {}
};
 
//definition needed for using any static member variable
map<string,Fruit*> Fruit::types;        
 
/*
 * Lazy Factory method, gets the Fruit instance associated with a
 * certain type. Instantiates new ones as needed.
 * precondition: type. Any string that describes a fruit type, e.g. "apple"
 * postcondition: The Fruit instance associated with that type.
 */
Fruit* Fruit::getFruit(const string& type) {
    map<string,Fruit*>::iterator it = types.find(type);  // try to find an existing instance; if not found std::map will return types.end()
 
    Fruit *f;
    if (it == types.end()) { // if no instance with the proper type was found, make one
        f = new Fruit(type); // lazy initialization part
        types[type] = f;     // adding the newly created Fruit to the types map for later lookup
    } else { //if already had an instance
        f = it->second; //The return value will be the found fruit
    }
    return f;
}
 
/*
 * For example purposes to see pattern in action
 */
void Fruit::printCurrentTypes() {
    if (!types.empty()) {
        cout << "Number of instances made = " << types.size() << endl;
        for (map<string,Fruit*>::iterator iter = types.begin(); iter != types.end(); ++iter) {
            cout << (*iter).first << endl;
        }
        cout << endl;
    }
}
 
int main(void) {
    Fruit::getFruit("Banana");
    Fruit::printCurrentTypes();
 
    Fruit::getFruit("Apple");
    Fruit::printCurrentTypes();
 
    // returns pre-existing instance from first 
    // time Fruit with "Banana" was created
    Fruit::getFruit("Banana");
    Fruit::printCurrentTypes();
 
    return 0;
}
 
/*
OUTPUT:
Number of instances made = 1
Banana
 
Number of instances made = 2
Apple
Banana
 
Number of instances made = 2
Apple
Banana
*/