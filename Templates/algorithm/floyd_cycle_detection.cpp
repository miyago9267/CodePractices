class floyd_cycle_detection{
    public:
        class ListNode {
            public:
                int val;
                ListNode *next;
                ListNode(int x) : val(x), next(nullptr) {}
        };

        floyd_cycle_detection(/* args */){};
        ~floyd_cycle_detection();

        bool hasCycle(ListNode *head) {
            if (head == nullptr || head->next == nullptr)
                return false;
            ListNode *slow = head;
            ListNode *fast = head;
            while (fast != nullptr && fast->next != nullptr) {
                slow = slow->next;
                fast = fast->next->next;
                if (slow == fast)
                    return true;
            }
            return false;
        }

    private:
        /* data */
};
