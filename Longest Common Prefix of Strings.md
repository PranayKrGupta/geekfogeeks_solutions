## 01. Longest Common Prefix of Strings

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1)

### Problem Description

**Task:** Given an array of strings arr[]. Return the longest common prefix among each and every strings present in the array. If there's no prefix common in all the strings, return "".Examples :Input: arr[] = ["geeksforgeeks", "geeks", "geek", "geezer"]

#### Examples

##### Example 1

- **Output:**
```text
""
```
- **Explanation:** There's no common prefix in the given strings.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n*min(|arri|))
- **Expected Auxiliary Space Complexity:** O(min(|arri|))

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-21 23:18:31
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        sort(arr.begin(),arr.end());
        string first = arr.front();
        string last = arr.back();
        int i=0;
        while(i<first.length() && i<last.length() && first[i]==last[i]){
            i++;
        }
        return first.substr(0,i);
    }
};
```

*Generated on: 10/25/2026, 2:25:08 AM*