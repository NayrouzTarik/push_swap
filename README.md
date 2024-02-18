### Welcome to Push Swap: A 1337 School Project!
Hey there! Welcome to my push swap project. This is a really cool project we've been working on at 1337 School. Let me walk you through what it's all about.

# What is Push Swap?
Push swap is an algorithmic project that's all about sorting stacks. We're given two stacks of numbers initially, let's call them Stack A and Stack B. Our job is to sort Stack A in ascending order using a set of specific operations.

# What is a Stack?
A stack is a data structure type that follows the logic of Last In, First Out (LIFO), meaning that the last element added to the stack is the first one to be removed. You can visualize it as a closed box from the bottom and open from the top. To access the last element added to the stack, you need to remove the elements on top until you reach it.

# How Does it Work?
Okay, so the main idea here is to manipulate the stacks using a predefined set of operations until Stack A is sorted. We're only allowed to use a limited set of operations:

sa: Swap the first two numbers at the top of Stack A.
sb: Swap the first two numbers at the top of Stack B.
ss: Swap the first two numbers at the top of both stacks.
pa: Push the top number from Stack B onto Stack A.
pb: Push the top number from Stack A onto Stack B.
ra: Rotate Stack A upward (push the first element to the bottom).
rb: Rotate Stack B upward.
rr: Rotate both stacks upward.
rra: Rotate Stack A downward (bring the bottom element to the top).
rrb: Rotate Stack B downward.
rrr: Rotate both stacks downward.
By carefully applying these operations, we can eventually sort Stack A!
