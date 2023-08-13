int is_palindrome(listint_t **head)
{
    if (*head == NULL || (*head)->next == NULL)
        return 1;

    listint_t *slow = *head, *fast = *head, *prev = NULL, *next, *mid = NULL;
    int isPalindrome = 1;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;

        next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
    }

    if (fast != NULL) // Odd number of nodes, skip the middle element
        mid = slow->next;
    else
        mid = slow;

    while (mid != NULL && prev != NULL)
    {
        if (mid->n != prev->n)
        {
            isPalindrome = 0;
            break;
        }
        mid = mid->next;
        prev = prev->next;
    }

    // Restore the original list
    fast = prev;
    prev = NULL;
    while (fast != NULL)
    {
        next = fast->next;
        fast->next = prev;
        prev = fast;
        fast = next;
    }
    slow->next = prev;

    return isPalindrome;
}
