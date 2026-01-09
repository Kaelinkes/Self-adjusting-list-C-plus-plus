#include <iostream>
using namespace std;

class selfadjustinglist{
private:
    struct nodeType{
        int data;
        nodeType* link;
    };
    nodeType* head;
public:
    selfadjustinglist(){
        head = nullptr;
    };
    void insert(int num){
        nodeType* newhead = new nodeType;
        newhead->data = num;
        newhead->link = head;
        head = newhead;

        cout<<"New value has been inserted!"<<endl;
    }

    bool find(int num){
        if (!head){  
            return false;
        }else{
            if (head->data == num){
                return true;
            }else{
                nodeType* prev = head;
                nodeType* current = head->link;
                nodeType* newHead;

                while (current != nullptr){
                    if (current->data == num){
                        prev->link = current->link;
                        newHead = current;
                        newHead->link = head;
                        head = newHead;
                        return true;
                    }else{
                        prev = current;
                        current = current->link;
                    }
                    
                }
            }
            
        }
        return false;
    }
    void display(){
        if (!head){
            cout<<"List is empty! Nothing to display"<<endl;
        }else{
            nodeType* current = head;
            cout<<"List: ";
            while (current != nullptr){
                cout<<current->data<<" ";
                current = current->link;
            }
            cout<<endl;
        } 
    }
    ~selfadjustinglist(){
        nodeType* current = head;
        while (current != nullptr){
           nodeType* deletenode = current;
           current = current->link;
           delete deletenode; 
        } 
    };
};

int main(){
    selfadjustinglist myList;
    int pick;

    do {
        cout << "1. Insert into the list" << endl;
        cout << "2. Find value" << endl;
        cout << "3. Display elements in the list" << endl;
        cout << "4. Exit" << endl;
        cout << endl;
        cout << "Which number would you like to perform?: ";
        cin >> pick;
        cout << endl;

        if (pick == 1) {
            int value;
            cout << "Enter value you want to insert: ";
            cin >> value;
            myList.insert(value);
        } else if (pick == 2) {
            int value;
            cout << "Enter the value you want to find: ";
            cin >> value;

            if (myList.find(value)) {
                cout << "Value '" << value << "' found in the list" << endl;
            } else {
                cout << "Value '" << value << "' is not in the list" << endl;
            }
        } else if (pick == 3) {
            myList.display();
        } else if (pick == 4) {
            cout << "Exiting..." << endl;
        } else {
            cout << "Invalid option!" << endl;
        }

        cout << endl;

    } while (pick != 4);

    return 0;
}