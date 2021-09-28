# -*- coding: utf-8 -*-
"""
Created on Tue Sep 28 10:55:38 2021

@author: PLP
"""
f = open("inputgraph3.txt", "r")
line=f.readline()
n=int(line)
wgraph=[]
for i in range(0,n):
    temp=[]
    for j in range(0,n):
        temp.append(0)
    wgraph.append(temp)
line=f.readline()
edgelist=[]
while line:
    var=line.split()
    var=list(map(int,var))
    edgelist.append(var)
    wgraph[var[1]][var[2]]=var[0]
    line=f.readline()
#printing the adjacency matrix of the graph
for i in range(0,n):
    print(wgraph[i])
#print(edgelist)

vertex=[]
for i in range(0,n):
    vertex.append([99999,"NIL"])
vertex[0][0]=0
print(vertex)

def ExtractMin(vertex):
    min = 99999
    min_index = 0
    for u in range(n):
        if vertex[u][0] < min and vertex[u][1] == "NIL":
            min = vertex[u][0]
            min_index = u
    return min_index
prvVrtx = [0 for i in range(n)]
for i in range(n):
    x = ExtractMin(vertex)
    vertex[x][1] = True
    for j in range(n):
        if wgraph[x][j] > 0 and vertex[j][1] == "NIL" and vertex[j][0] > vertex[x][0] + wgraph[x][j]:
            vertex[j][0] = vertex[x][0] + wgraph[x][j]
            prvVrtx[j] = x
for i in range(n):
    print(vertex[i][0], prvVrtx[i])
print(vertex)
print(prvVrtx)
f.close()