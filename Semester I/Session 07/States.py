s = """Kar Ban LB
Kar Mysore Chariot
Kar Mysore Palace
TN Chennai Marina
TN Pondi Beach
AP Hyderabad Fort
MH Mumbai Gate
MH Mumbai CID-Headquarters"""

s = s.split('\n')
s = [ i.split() for i in s ]
states = list(set([ i[0] for i in s ]))
cities = []
for i in range(len(states)):
    cities.append([])
    for j in range(len(s)):
        if s[j][0] == states[i]:
            cities[i].append(s[j][1])

cities = [ list(set(i)) for i in cities ]

for i in range(len(states)):
    print(states[i] + ":")
    for j in cities[i]:
        print(j)

#print(s, states, cities)
