#include <iostream>
#include "fibonacci.h"
#include "palindrome.h"
#include "linked_list.h"

using namespace std;

void demoFibonacci() {
    cout << "Fibonacci Demo:" << endl;
    try {
        auto fibs = Fibonacci::generated(10);
        cout << "First 10 Fibonacci numbers: ";
        for (auto num : fibs) {
            cout << num << " ";
        }
        cout << endl;
    }
    catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
}

void demoPalindrome() {
    cout << "\nPalindrome Demo: " << endl;
    int numbers[] = { 12321, 12345, 1221, -121 };
    for (int num : numbers) {
        cout << num << " is palindrome: "
            << (Palindrome::IsPalindrome(num) ? "true" : "false") << endl;
    }
}

void demoLinkedList() {
    cout << "\nLinked List Demo:" << endl;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);

    cout << "Original: 1->2->3" << endl;

    ListNode* reversed = LinkedList::reverse(head);
    cout << "Reversed: ";
    ListNode* current = reversed;
    while (current) {
        cout << current->val;
        if (current->next) cout << "->";
        current = current->next;
    }
    cout << endl;

    LinkedList::deleteList(reversed);
}

int main() {

    demoFibonacci();
    demoPalindrome();
    demoLinkedList();
	return 0;
}
