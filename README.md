
# HW7 EE599 - Computing Principles for Electrical Engineers

- Please clone the repository, edit [README.md](README.md) to answer the questions, and fill up functions to finish the hw.
- For non-coding questions, you will find **Answer** below each question. Please write your answer there.
- For coding questions, please make sure that your code can run ```bazel run/test```. In this homework, you will need to fill up [cpplib.cc](src/lib/cpplib.cc) and tests in [tests](tests).
- For coding questions, there is a **black box** testing for each question. All points are only based on passing the test cases or not (i.e. we don't grade your work by your source code). So, try to do comprehensive testing before your final submission.

- For submission, please push your answers to Github before the deadline.
- Deadline: Fri, Nov 27th 2020 by 06:30 pm
- Total: 30 points. 30 points is considered full credit.

## Question 1 (Medium, 30 Points)

Given a collection of numbers that might contain duplicates, return all possible unique permutations.

Example:
input: [1, 1, 2]
output: [ [1,1,2], [1,2,1], [2,1,1] ]

Write several tests using GTest for your function in tests/q1_student_test.cc, and run the following command to verify the functionality of your program.

```shell
bazel test tests:q1_student_test
```

## Question 2 (Optional. Medium, No Points)

Given a N*N chessboard, you want to place N queens on the chessboard, 
so that any one of them won't attack each other. Return all possible solutions (Simulate the chessboard). 
Fill in the function:

```cpp
std::vector<std::vector<std::vector<int>>> NQueens (int n);
```

- Queens will attack each other if they are in the same row / column, or they are in the same diagonal line.
- Each solution contains a distinct board (a 2-D matrix) configuration of the n-queens' placement, where 1 and 0 both indicate a queen and an empty space, respectively. Permutation in the output vector is out of our consideration.
- What's the algorithm's time complexity?
- Example input and output:

```shell
Input: n = 4

Output: [
  [[0,1,0,0], [0,0,0,1], [1,0,0,0], [0,0,1,0]],
  [[0,0,1,0], [1,0,0,0], [0,0,0,1], [0,1,0,0]]
]
```

Explanation:
<p align="center"><img width="60%" src="Picture2-1.jpg" /></p>

Write several tests using GTest for your function in `tests/q2_student_test.cc`, and run the following command to verify the functionality of your program.
*Notice that you are allowed to just check the length of the solution:*

```cpp
TEST(BacktrackingTest, EightQueen_4) {
  auto solutions = CPPLib::NQueens(4);
  EXPECT_EQ(solutions.size(), 2);
}
```

```shell
bazel test tests:q2_student_test
```

## Question 3 (Optional. Medium, No Points)

In the [Dynamic Programming Video](https://www.youtube.com/watch?v=PY9sl9QZqSs&feature=youtu.be&ab_channel=arisaif), the 3rd example is to find the contiguous subarray (containing at least one number) which has the largest sum. Here we will use Dynamic Programming to solve a very similiar problem.

 Given an integer array nums, find the contiguous subarray within an array (containing at least one number) which has the largest product.

Example 1: 

Input: ```[2,3,-2,4]```

Output: ```6```

Explanation: Subarray ```[2,3]``` has the largest product 6.

Example 2:

Input: ```[-2,0,-1]```
Output: ```0```

Write several tests using GTest for your function in tests/q3_student_test.cc, and run the following command to verify the functionality of your program.

```shell
bazel test tests:q3_student_test
```