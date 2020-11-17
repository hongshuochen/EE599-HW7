
# HW7 EE599 - Computing Principles for Electrical Engineers

- Please clone the repository, edit [README.md](README.md) to answer the questions, and fill up functions to finish the hw.
- For non-coding questions, you will find **Answer** below each question. Please write your answer there.
- For coding questions, please make sure that your code can run ```bazel run/test```. In this homework, you will need to fill up [cpplib.cc](src/lib/cpplib.cc) and tests in [tests](tests).
- For coding questions, there is a **black box** testing for each question. All points are only based on passing the test cases or not (i.e. we don't grade your work by your source code). So, try to do comprehensive testing before your final submission.

- For submission, please push your answers to Github before the deadline.
- Deadline: Fri, Nov 13th 2020 by 06:30 pm
- Total: 120 points. 100 points is considered full credit.

## Question 1 (30 pints, Medium)

There are a total of numCourses courses you have to take, labeled from 0 to numCourses-1.
Some courses may have prerequisites, for example to take course 0 you have to first take course 1, which is expressed as a pair: [0,1]
Given the total number of courses and a list of prerequisite pairs, if it is possible for you to finish all courses return true else return false.

Hint: This question could be solved by topological sort or checking whether there is a loop inside the graph.

```c++
bool canFinish(int numCourses, std::vector<std::pair<int, int>> &prerequisites)
```
2 courses, take course 1 you have to first take course 0 \
Input: 2, [[1,0]] \
Output: true

2 courses, take course 1 you have to first take course 0, and take course 0 you have to first take course 1 \
Input: 2, [[1,0], [0,1]] \
Output: false

## Question 2 (no points. Medium, Optional)

Given a N*N chessboard, you want to place N queens on the chessboard, 
so that any one of them won't attack each other. Return all possible solutions (Simulate the chessboard).
Fill in the function:

```cpp
std::vector<std::vector<std::string>> NQueens (int n);
```
- queens will attack each other if they are in the same row / column, or they are in diagonal line.
- Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.
- for example:
```
Input: n = 4
Output: [
  [".Q..","...Q","Q...","..Q."],
  ["..Q.","Q...","...Q",".Q.."]
  ]
```
Explanation:
<p align="center"><img width="60%" src="Picture2-1.jpg" /></p>



## Question 3 (Optional. 20 points. Medium)

In the Dynamic Programming Video, the 3rd example is to find the contiguous subarray (containing at least one number) which has the largest sum. Here we will use Dynamic Programming to solve Given an integer array nums, find the contiguous subarray within an array (containing at least one number) which has the largest product.

Example 1:
Input: [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.

Example 2:
Input: [-2,0,-1]
Output: 0

Write several tests using GTest for your function in tests/q3_student_test.cc, and run the following command to verify the functionality of your program.

```shell
bazel test tests:q3_student_test
```



