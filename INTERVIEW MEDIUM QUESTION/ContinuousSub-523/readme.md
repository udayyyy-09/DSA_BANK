## 523. Continuous Subarray Sum                     ( https://leetcode.com/problems/continuous-subarray-sum/description )

Given an integer array nums and an integer k, return true if nums has a good subarray or false otherwise.

A good subarray is a subarray where:

    - its length is at least two, and

    - the sum of the elements of the subarray is a multiple of k.

Note that:

A subarray is a contiguous part of the array.

An integer x is a multiple of k if there exists an integer n such that x = n * k. 0 is always a multiple of k.

## Approach

- Brute force approach is simple take two loop and you will solve but get TLE

- **Optimized Approach** 

    - We will use map to store their remainders and use one loop only.
    - We start from **i=0** to **n**. Take prefixSum += nums[i] and note their remainder(rem = prefixSum%k). 
    - After taking remainder we will check if rem is repeated in mp? If repeated then we will check the subarray len if(len >=2) return true otherwise store their rem in map
    - Keep doing this until we reached upto n and after that return false mean we didn't find any subarray whhose sum is mutltiple of k
