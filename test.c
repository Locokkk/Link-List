//删除指定节点
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode Node;
struct ListNode* removeElements(struct ListNode* head, int val) {
	Node *cur = head;
	Node *prev = NULL;
	while (cur != NULL)
	{
		if (cur->val == val)
		{
			Node *next = cur->next;
			free(cur);
			if (prev == NULL)
			{
				head = next;
			}
			else {
				prev->next = next;
			}
			cur = next;
		}
		else {
			prev = cur;
			cur = cur->next;
		}
	}
	return head;
}





//反转链表
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode ListNode;
struct ListNode* reverseList(struct ListNode* head) {
	if (head == NULL || head->next == NULL)
		return head;
	ListNode *n1;
	ListNode *n2;
	ListNode *n3;
	n1 = head;
	n2 = n1->next;
	n3 = n2->next;
	n1->next = NULL;
	while (n2 != NULL)
	{
		n2->next = n1;
		n1 = n2;
		n2 = n3;
		if (n3 != NULL) {
			n3 = n3->next;
		}
	}
	head = n1;
	return n1;
}
