#include <cstring>
using namespace std;
// Defining the linked list
struct ToDo {
 char buffer[100]; // Changed to buffer for clarity
 ToDo* next;
};
ToDo* start = NULL; // Head of the linked list
void interface();
void seeToDo();
void createTodo();
void deleteToDo();
int main() {
 int choice;
interface();
 while (true) {
 system("cls");
 cout << "1. To see your To-Do list:\n";
 cout << "2. To add a new task:\n";
 cout << "3. To Delete a task:\n";
 cout << "4. Exit:\n";
 cout << "Enter your choice: ";
 cin >> choice;
 switch (choice) {
 case 1:
 seeToDo();
 break;
 case 2:
 createTodo();
 break;
 case 3:
deleteToDo();
 break;
 case 4:
 exit(0);
 break;
 default:
 cout << "\nInvalid Choice :-(\n";
 system("pause");
 }
 }
 return 0;
}
void interface() {
 system("color 4F");
 cout << "\nWELCOME TO The TODO APP\n";
system("pause");
}
void seeToDo() {
while (true) {
 cout << "Want to add new ToDo? Press 'y' for Yes and 'n' for No: ";
 cin >> c;
 if (c == 'n') {
 break;
 } else {
 add = new ToDo; // Using new instead of calloc
 cout << "Type it: ";
 cin.ignore(); // Clear the newline character from the buffer
 cin.getline(add->buffer, sizeof(add->buffer)); // Read task 
description
 add->next = nullptr; // Set next to nullptr
 if (start == nullptr) {
 start = add; // First task
 } else {
 temp->next = add; // Link new task
 }
 temp = add; // Move to the new last task
}
 }
}
// Placeholder for deleteToDo function
void deleteToDo() {
 // Implementation needed
}