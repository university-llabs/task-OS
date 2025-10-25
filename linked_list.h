#pragma once
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class LinkedList {
public:
    static ListNode* reverse(ListNode* head);
    static void deleteList(ListNode* head);
};

