class Solution:
    def resultArray(self, nums: list[int]) -> list[int]:
        n: int = len(nums)
        if n <= 2:
            return nums
        nums1: list[int] = []
        nums2: list[int] = []
        print(nums)
        nums1.append(nums[0])
        nums2.append(nums[1])
        for num in nums[2:]:
            if nums1[-1] > nums2[-1]:
                nums1.append(num)
            else:
                nums2.append(num)
        print(nums1, nums2)
        return nums1 + nums2
