//undirected graph using dfs
bool cycleDFS(int node, int parent,vector<int>adj[], int vis[]){
    vis[node]=1;
    for(auto adjNode : adj[node]){
        if(!vis[adjNode]){
            if(cycleDFS(adjNode, node, adj,vis))
                return true;
        }else if(adjNode != parent) return true;
    }
    return false;
}