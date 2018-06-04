class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int sum = 0;

        ListNode* header = nullptr;
        ListNode* lastNode = nullptr;

        while(l1 != nullptr || l2 != nullptr || carry > 0)
        {
            sum = 0;
        	if(l1 != nullptr)
        	{
        		sum += l1->val;
        		l1 = l1->next;
        	}

        	if(l2 != nullptr)
        	{
        		sum += l2->val;
        		l2 = l2->next;
        	}
        	
        	if( carry > 0)
        	{
        		sum += carry;
        	}

        	ListNode * newNode = new ListNode(0);
        	carry = sum / 10;
        	newNode->val = sum % 10;
        	if(header == nullptr)
        	{
        		header = newNode;
        	}
        	else
        	{
        		lastNode->next = newNode;
        	}
        	lastNode = newNode;
        }
        return header;
    }
};
