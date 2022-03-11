// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == NULL or head->next == NULL or k == 0)
        {
            return head;
        }
        int size = 1;
        ListNode *cur = head;
        int cnt = 0;
        while (cur->next)
        {
            size++;
            cur = cur->next;
        }

        cur->next = head;

        if (k > size)
        {
            k = k % size;
        }

        while (size > k)
        {
            cur = cur->next;
            size--;
        }

        ListNode *newHead = cur->next;
        cur->next = NULL;
        return newHead;
    }
};