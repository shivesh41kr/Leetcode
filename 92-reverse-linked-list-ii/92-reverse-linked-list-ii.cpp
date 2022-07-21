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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right){
            return head;
        }
        ListNode* temp=head;
        stack<ListNode*>q;
        int l=1;
        ListNode* first=temp;
        while(l<=left){
            if(l==left){
               first=temp;
               while(l<right){
                   temp=temp->next;
                   q.push(temp);
                  l++;
               } 
                break;
            }
             l++;
            temp=temp->next;
        }
     int t=q.size()-1;
      while(!q.empty()){
          if(left>=right){
              break;
          }
        int firsto=first->val;
          ListNode* second =q.top();
        first->val=second->val;
          first=first->next;
        second->val=firsto;
        q.pop();
          right--;
          left++;
      }
        return head;
    }
};