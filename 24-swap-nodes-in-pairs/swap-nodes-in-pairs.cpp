 class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        vector<int> loda;
        ListNode* temp = head;
        while (temp != nullptr) {
            loda.push_back(temp->val);   
            temp = temp->next;
        }

        int i = 0;
        int j = 1;
        int n = loda.size();
        while (i < n && j < n) {
            swap(loda[i], loda[j]);
            i += 2;
            j += 2;
        }

        ListNode *newHead = nullptr;
        ListNode *tail = nullptr;
        for (int chut : loda) {   
            ListNode *newNode = new ListNode(chut);  
            if (newHead == nullptr) {
                newHead = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = tail->next;
            }
        }
        return newHead;   
    }
};
