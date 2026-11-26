// week12-3.cpp 學習計畫 Linked List 第3題
// LeetCode 2. Add Two Numbers 超級大的數相加
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(999); // 上週教的工具1
        ListNode* now = ans; // 上週教的工具2
        int carry = 0; // 進位，week12重點
        // 新的版本，只要還有剩任一條（或還有進位），就繼續迴圈
        while ( l1 != nullptr || l2 != nullptr || carry > 0 ) { // 把 && 改成 ||，並加上 carry > 0 處理最後進位
            if (l1 != nullptr) { // 如果 l1 還有，就把 val 加進去
                carry += l1->val;
                l1 = l1->next; // 換下一個
            }
            if (l2 != nullptr) { // 如果 l2 還有，就把 val 加進去
                carry += l2->val;
                l2 = l2->next; // 換下一個
            }
            now->next = new ListNode( carry % 10 ); // 上週教的工具2（只能留下個位數）
            carry = carry / 10; // 進位，week12重點（留下十位數給下一輪）
            now = now->next; // 上週教的工具2
        }
        return ans->next; // 上週教的工具1

        // 樓下的版本，沒辦法處理「長度不同」的狀況
        //while ( l1 != nullptr && l2 != nullptr ) { // 上週教的工具2
        //    int val = l1->val + l2->val + carry; // 今天要做加法，進位，week12重點
        //    now->next = new ListNode( val % 10 ); // 上週教的工具2（只能留下個位數）
        //    carry = val / 10; // 進位，week12重點
        //    now = now->next; // 上週教的工具2
        //    l1 = l1->next; // 上週教的工具2
        //    l2 = l2->next; // 上週教的工具2
        //}
        //return ans->next; // 上週教的工具1
    }
};
