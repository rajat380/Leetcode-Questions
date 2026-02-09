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
        ListNode* removeNthFromEnd(ListNode* head, int n) {

                if (head == NULL)
                            return NULL;

                                    vector<int> s;
                                            ListNode* temp = head;

                                                    // Step 1: store all values
                                                            while (temp != NULL) {
                                                                        s.push_back(temp->val);
                                                                                    temp = temp->next;
                                                                                            }

                                                                                                    int size = s.size();

                                                                                                            // Step 2: if deleting first node
                                                                                                                    if (n == size) {
                                                                                                                                head = head->next;
                                                                                                                                            return head;
                                                                                                                                                    }

                                                                                                                                                            // Step 3: rebuild values till size-1
                                                                                                                                                                    temp = head;
                                                                                                                                                                            for (int i = 0; i < size - n - 1; i++) {
                                                                                                                                                                                        temp = temp->next;
                                                                                                                                                                                                }

                                                                                                                                                                                                        // Step 4: remove nth node from end
                                                                                                                                                                                                                temp->next = temp->next->next;

                                                                                                                                                                                                                        return head;
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                            };

