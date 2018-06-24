/*
Given two strings A and B of lowercase letters, return true if and only if we can swap two letters in A so that the result equals B.
https://leetcode.com/problems/buddy-strings/description/
*/
class Solution {
public:
    bool buddyStrings(string A, string B) {
        //If A and B have different size, they cannot be buddies
        if(A.size() != B.size())
            return false;
        
        //If A and B are same and A has duplicates, swap those duplicates
        if(A == B and set <char>(A.begin(),A.end()).size() < A.size())
            return true;
        

        //If A and B are different, then only two two characters among them have to mismatch and swaping 
        //them should make A and B equal
        vector <int> diff;
        for(int i=0;i<A.size();i++)
        {
            if(A[i] != B[i])
                diff.push_back(i);
        }
        
        if(diff.size() == 2 and A[diff[0]] == B[diff[1]] and A[diff[1]] == B[diff[0]])
            return true;
        
        //If all above fail
        return false;
    }
};