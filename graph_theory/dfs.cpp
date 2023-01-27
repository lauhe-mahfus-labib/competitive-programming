void dfs(int node, vector<int> adj[], int vis[], vector<int> &path){
    vis[node] = 1;
    path.push_back(node);
    for(auto it : adj[node]) {
        if(!vis[it]) {
            dfs(it, adj, vis, path);
        }
    }
}