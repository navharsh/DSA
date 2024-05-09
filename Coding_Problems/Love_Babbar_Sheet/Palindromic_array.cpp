// Problem Link: https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1
class Solution {
public:
    int PalinArray(int a[], int n)
    {
        for (int i = 0; i < n; ++i) {
        int num = a[i];
        int originalNum = num;
        int reversedNum = 0;

        while (num > 0) {
            int digit = num % 10;
            reversedNum = reversedNum * 10 + digit;
            num /= 10;
        }

        if (originalNum != reversedNum) {
            return 0;
        }
    }
    return 1;
    }
};