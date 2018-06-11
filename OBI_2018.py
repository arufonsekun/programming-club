def islands():
    x,y = map(int, input().split())
    net = {}
    ping_average = 0
    for el in range(x):
        net[el+1] = []
    for e in range(y):
        i1, i2, ping = map(int, input().split())
        net[i1].append([i2, ping])
        net[i2].append([i1, ping])
        ping_average += ping

    server = int(input())
    connections_average = (y * 2) // x
    #Round the average to up if the rest is too big
    if ping_average % y >= 5:
        ping_average = ((ping_average) // y) + 1
    else:
        ping_average = (ping_average) // y
    ping_index = small_ping(net, server)
    big_ping(net, server, connections_average, ping_average, ping_index)

def small_ping(net, server):
    small = 1000
    index = 0
    for el in net[server]:
        if el[1] <= small:
            index = el[0]
            small = el[1]
    return(index)

#Finds the node who has a high ping
def find_node(net, server, connections_average, ping_average, index):
    possible_node = []
    ping = 0
    for key, value in net.items():
        if key != server and key != index:
            for e in value:
                ping += e[1]
            if (ping // len(net[key])) >= ping_average and connections_average >= len(net[key]):
                possible_node.append(key)
    print("Possible nodes that have bad pings", possible_node)
    print(connections_average, ping_average)
islands()
