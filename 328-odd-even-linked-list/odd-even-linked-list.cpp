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
    ListNode* oddEvenList(ListNode* head) {
         if (head == NULL || head->next == NULL)
               return head;
        vector<int>s;
         ListNode* odd=head;
         ListNode* even=head->next;
         while(odd!=NULL){
              s.push_back(odd->val);
               if (odd->next == NULL)
                  break;
              odd=odd->next->next;
         }
         while(even!=NULL){
            s.push_back(even->val);

                        if (even->next == NULL)
                            break;
            even=even->next->next;
         }
          ListNode* curr = head;
                  for (int i = 0; i < s.size(); i++) {
                              curr->val = s[i];
                                          curr = curr->next;
                                                  }

                                                          return head;
    }
};