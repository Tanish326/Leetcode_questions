/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

   class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        while (head) {
            ListNode* f = head->next;
            head->next = prev;
            prev = head;
            head = f;
        }
        return prev;
    }

    ListNode* findkthnode(ListNode* head, int k) {
        while (head && --k) {
            head = head->next;
        }
        return head;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1)
            return head;

        ListNode* temp = head;
        ListNode* prevGroupTail = NULL;
        ListNode* newHead = head;

        while (temp) {
            ListNode* kthnode = findkthnode(temp, k);

            // Less than k nodes remain
            if (!kthnode) {
                if (prevGroupTail)
                    prevGroupTail->next = temp;
                break;
            }

            ListNode* nextnode = kthnode->next;
            kthnode->next = NULL;

            // Reverse current group
            ListNode* newGroupHead = reverse(temp);

            // First group
            if (temp == head) {
                newHead = newGroupHead;
            } else {
                prevGroupTail->next = newGroupHead;
            }

            // Update pointers for next iteration
            prevGroupTail = temp;
            temp = nextnode;
        }

        return newHead;
    }
};
