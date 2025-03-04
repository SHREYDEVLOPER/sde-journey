  
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        vector<int> vv;
        ListNode* temp = head;

         while (temp) {
            vv.push_back(temp->val);
            temp = temp->next;
        }

        vector<int> sml, lar;
        
         for (int val : vv) {
            if (val < x)
                sml.push_back(val);
            else
                lar.push_back(val);
        }

         vector<int> ans;
        ans.insert(ans.end(), sml.begin(), sml.end());
        ans.insert(ans.end(), lar.begin(), lar.end());

         temp = head;
        for (int val : ans) {
            temp->val = val;
            temp = temp->next;
        }

        return head;
    }
};
 