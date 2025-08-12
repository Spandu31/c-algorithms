
# C Algorithms

A collection of C programs solving common algorithm and data structure problems.  
This repository will grow over time as I solve more problems from platforms like **LeetCode**, **HackerRank**, and **Codeforces**.

---

## 📂 Contents

| # | Problem | Platform | File |
|---|---------|----------|------|
| 1 | Two Sum | LeetCode | [two_sum.c](two_sum.c) |

---

## 📜 Problem Descriptions

### 1. Two Sum  
**Platform:** [LeetCode Problem 1](https://leetcode.com/problems/two-sum/)  
**Description:** Given an array of integers `nums` and an integer `target`, return the indices of the two numbers that add up to the target.  

**Approach:**  
- Brute force approach with O(n²) time complexity.  
- Loops through all pairs until a match is found.  
- Returns the indices in an array allocated with `malloc`.  

**Compilation & Run:**
```bash
gcc two_sum.c -o two_sum
./two_sum
