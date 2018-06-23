/*
26. Remove Duplicates from Sorted Array
Given a sorted array nums, remove the duplicates in-place such that each
element appear only once and return the new length.

Do not allocate extra space for another array, you must do this by modifying
the input array in-place with O(1) extra memory.

Example 1:

Given nums = [1,1,2],
Your function should return length = 2, with the first two elements of nums
being 1 and 2 respectively.
It doesn't matter what you leave beyond the returned length.

Example 2:

Given nums = [0,0,1,1,1,2,2,3,3,4],
Your function should return length = 5, with the first five elements of nums
being modified to 0, 1, 2, 3, and 4 respectively.
It doesn't matter what values are set beyond the returned length.
*/


// 时间复杂度O(n)，空间复杂度O(1)
class Solution {
public:
  int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int index = 0;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[index] != nums[i])
        nums[++index] = nums[i];
    }
    return index + 1;
  }
};


// 使用STL，时间复杂度O(n)，空间复杂度O(1)
class Solution {
public:
  int removeDuplicates(vector<int>& nums) {
    return distance(nums.begin(), unique(nums.begin(), nums.end()));
  }
};


// 使用STL，时间复杂度O(n)，空间复杂度O(1)
class Solution {
public:
  int removeDuplicates(vector<int>& nums) {
    return distance(nums.begin(), removeDuplicates(nums.begin(), nums.end(), nums.begin()));
  }

  template<typename InIt, typename OutIt>
  OutIt removeDuplicates(InIt first, InIt last, OutIt output) {
    while (first != last) {
      *output++ = *first;
      first = upper_bound(first, last, *first);
    }

    return output;
  }
};
