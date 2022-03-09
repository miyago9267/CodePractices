// By myg9267
// i m bad in coding, so sad
// it a me mario
#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAXN maxn
#define MOD modn
#define ll long long

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int counter=0;
        ListNode* head = new ListNode(0);
        head->val = l1->val + l2->val;
        while (count||(l1->next!=nullptr&&l2->next!=nullptr)){
            head->val=count+l1->val+l2->val;
            counter=head->val/10;
            head->val=head->val%10;
            head->next=new ListNode(0);
            head=head->next;
            l1=l1->next;
            l2=l2->next;
        }
        
    }
};

signed main(){
    IO;
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    Solution sol;
    return EXIT_SUCCESS;
}
