"""
Module wich implements a graph
"""
class Graph(object):
    def __init__(self, vertex, edges):
        self.vertex = vertex
        self.edge = edges
        self.nodes = []
        self.nodeObjects = []


    def addNode(self):
        graph = []
        node = []
        for _ in range(self.edge):
            v1, v2, w = map(int, input().split())
            if v1 not in self.nodes:
                node.append(Node(v1))
                self.nodes.append(v1)
            if v2 not in self.nodes:
                node.append(Node(v2))
                self.nodes.append(v2)
            graph.append([v1,v2,w])

        for e in node:
            for el in graph:
                if el[0] == e.value:
                    e.connections.append(node[self.nodes.index(el[1])])
                    e.weight.append(el[2])
                if el[1] == e.value:
                    e.connections.append(node[self.nodes.index(el[0])])
                    e.weight.append(el[2])
            self.nodeObjects.append(e)

    def show(self):
        for e in self.nodeObjects:
            i = 0
            for el in e.connections:
                print(e.value,'-----',e.weight[i],'-----',el.value)
                i += 1


class Node(object):
    def __init__(self, value):
        self.value = value
        self.connections = []
        self.weight = []
        self.distance = 0

#graph = Graph(6,9)
graph = Graph(3,3)
graph.addNode()
graph.show()
