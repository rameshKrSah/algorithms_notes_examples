# Basic of Greedy Algorithm

A greedy algorithm, always makes the choice that seems to be the best at that moment. This means that it makes a locally-optimal choice in the hope that this choice will lead to 
a globally-optimal solution.

In many problems, a greedy strategy does not usually produce an optimal solution, but nonetheless a greedy heuristic may yield locally optimal solutions that approximate a globally
optimal solution in a reasonable amount of time.

Assume that you have an objective function that needs to be optimized (either maximized or minimized) at a given point. A Greedy algorithm makes greedy choices at each step to ensure
that the objective function is optimized. The Greedy algorithm has only one shot to compute the optimal solution so that it never goes back and reverses the decision.

Greedy algorithms have some advantages and disadvantages:

* It is quite easy to come up with a greedy algorithm for a problem
* Analyzing the run time for greedy algorithm will generally be much easier thn for other techniques.
* The difficult part is that for Greedy algorithms it is harder to understand correctness issues. Even with the correct algorithm, it is hard to prove why it is correct.

## Example : Doing maximum number of things in fixed time 
We have exactly T time to do some things and we want to do maximum number of things.

Given an array A of integer, where each element indicates the time it takes to do a thing. We want to find tha maximum number of things we can do in T time.

This is a simple Greedy algorithm. In each iteration, we want to greedily select the things which will take less time for completion, i.e., we want to optimize our choice in each step 
to maximize the number of things we can do in T time.

With two variables currentTime and numberOfThing we :
1. Sort the arary A in increasing order.
2. Select each to-do item one-by-one.
3. Add the time that it will take complete that to-do item into currentTime
4. Add one to numberOfThings.

Repeat this as long as the currentTime is less than or equal to T.

Let A = {5, 4, 3, 2, 1} and T = 6

After sorting in increasing order: A = {1, 2, 3, 4, 5}

* After first iteration:
	currentTime = 1;
	numberOfThings = 1

* After second iteration:
	currentTime = 1 + 2 = 3
	numberOfThings = 2

* After third iteration:
	currentTime 3 + 3 = 6
	numberOfThings = 3

After the fourth iteration, currentTime = 4 + 6 = 10 > 6. Thus the answer is 3.


