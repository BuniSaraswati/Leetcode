/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (!head) {
        return head;  // Empty list
    }

    struct ListNode* current = head;

    while (current->next) {
        if (current->val == current->next->val) {
            struct ListNode* temp = current->next;
            current->next = current->next->next;  // Skip the duplicate node
            free(temp);  // Free the memory of the duplicate node
        } else {
            current = current->next;  // Move to the next node
        }
    }

    return head;  // Return the modified list
}
