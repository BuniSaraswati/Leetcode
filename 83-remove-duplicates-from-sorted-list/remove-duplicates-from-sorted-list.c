struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (!head) return head;  // Handle empty list

    struct ListNode* current = head;

    while (current->next) {
        if (current->val == current->next->val) {
            struct ListNode* temp = current->next;
            current->next = current->next->next;  // Skip duplicate
            free(temp);  // Free memory
        } else {
            current = current->next;  // Move to next node
        }
    }

    return head;
}
