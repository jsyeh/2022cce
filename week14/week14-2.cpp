class Solution { ///LeetCode 24 ���洫 (�C��D�� 10����)
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head; //�Ӥ�,��������

        ListNode* one = head;
        ListNode* two = head->next;
        while(one!=nullptr && two!=nullptr){
            int temp = one->val;
            one->val = two->val;
            two->val = temp;
            //�H�W�O�洫�̭��� val ��

            if(one->next!=nullptr) one = one -> next -> next; //�U�U��
            else break; //���o�̥i²��,�����F���,�N�Ӽg

            if(two->next!=nullptr) two = two -> next -> next; //�U�U��
            else break;
        }
        return head; //��굹�H�a
    }
};