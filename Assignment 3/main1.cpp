// #include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <fstream>
// #include <string>
// using namespace std;

// // Represent a vertex in the graph
// class Vertex {
// public:
//     int id;
//     vector<int> neighbors;
//     Vertex(int id) 
//     {
//         this->id = id;
//         this->neighbors.clear();
//     }
// };

// // Represent a graph
// class Graph {
// public:
//     vector<Vertex> vertices;
//     unordered_map<int, int> idToIndex;

//     Graph(int numVertices) {
//         vertices.resize(numVertices);
//         for (int i = 0; i < numVertices; i++) {
//             vertices[i] = Vertex(i);
//             idToIndex[i] = i;
//         }
//     }

//     void addEdge(int source, int dest) {
//         vertices[idToIndex[source]].neighbors.push_back(dest);
//         vertices[idToIndex[dest]].neighbors.push_back(source);
//     }
// };

// int main() {
//     Graph g(4039);
//     ifstream file("facebook_combined.txt");
//     string line;
//     while (getline(file, line)) {
//         int source, dest;
//         sscanf(line.c_str(), "%d %d", &source, &dest);
//         g.addEdge(source, dest);
//     }

//     // Printing the graph
//     for (int i = 0; i < g.vertices.size(); i++) {
//         cout << "Vertex " << i << " is connected to: ";
//         for (int j = 0; j < g.vertices[i].neighbors.size(); j++) {
//             cout << g.vertices[i].neighbors[j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    for (int i = 0; i < 11; i++) {
        pid_t pid = fork();
        if (pid == 0) {
            if (i == 0) { // First process
                while (true) {
                    std::cout << "Hello World 1" << std::endl;
                    sleep(5);
                }
            } else { // Next 10 processes
                while (true) {
                    std::cout << "Hello World 2" << std::endl;
                    sleep(3);
                }
            }
        }
    }
    // Wait for all child processes to terminate
    for (int i = 0; i < 11; i++) {
        wait(nullptr);
    }
    return 0;
}
