# Shortest-Path Algorithm or Dijkstra's Algorithm
Dijkstra's algorithm is an algorithm for finding the shortest path between nodes in a graph. For a given source node, 
the algorithm finds the shortest path betwen that node and every other node. It can be also used for finding the 
shortest path from a single source to a single destination node by stopping the algorithm once the shortest path to the 
destination node has been determined. If all the edge weights are 1, then shortest path can be found using simple 
breadth first search.

Dijkstra's algorithm is a Greedy algorithm which solves the problem in stages by doing what appears to be the best thing 
at each stage. The time complexity of Dijkstra's algorithm is **O(|V|^2)** but with min-priority queue and Fibonnacci 
heaps it drops down to **O(|V| + |E| log(|V|))**.

## PseudoCode
```
Dijkstra(G, s)
	Create a vertex set, Q
	for all v in V[G] do
		distance[v] = NAN
		parent[v] = none
		Add v to Q
	end for

	distance[s] = 0

	while not Empty(Q) do
		u = Vertex in Q with minimum distance
		Remove u from Q

		for all w in AdjacencyList[u] do
			temp = distance[u] + length(u, w)
			if temp < distance[w]
				distance[w] = temp
				parent[w] = u
			end if
		end for
	end while
	 	
```
To read the shortest path from the source s to target v, we do
```
Read_Shortest(G, v)
	Create empty sequence S
	if parent[v] is not none or v == source
		while v is defined
			insert v at the begining of S
			v = parent[v]
		end while
	end if
```


