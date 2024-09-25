/*
// Recursive function for DFS traversal
void DFSRec(vector<vector<int>> &adj, vector<bool> &visited, int s) {
  // Mark the current vertex as visited
  visited[s] = true;

  // Print the current vertex
  cout << s << " ";

  // Recursively visit all adjacent vertices that are not visited yet
  for (int i : adj[s])
    if (visited[i] == false)
      DFSRec(adj, visited, i);
}
*/

/*

// Main DFS function that initializes the visited array
// and call DFSRec
void DFS(vector<vector<int>> &adj, int s){
    vector<bool> visited(adj.size(), false);
    // Call the recursive DFS function
    DFSRec(adj, visited, s);
}

*/