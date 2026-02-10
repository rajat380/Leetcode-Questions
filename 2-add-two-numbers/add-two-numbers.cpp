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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
          vector<int>s;
         int carry=0;
        ListNode *a=l1,*b=l2;
          while(a || b || carry){
             int sum = carry;
          
          if(a){
            sum+=a->val;
            a=a->next;
          }
            if(b){
            sum += b->val;
            b = b->next;
           }
           s.push_back(sum%10);
           carry=sum/10;
            }
            
         ListNode* head = new ListNode(s[0]);
         ListNode* temp = head;

           for(int i = 1; i < s.size(); i++){
            temp->next = new ListNode(s[i]);
            temp = temp->next;
           }

           return head;
        
           
    }
};