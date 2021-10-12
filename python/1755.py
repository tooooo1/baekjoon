dict = {'1':'one', '2':'two', '3':'three', '4':'four', '5':'five', 
     '6':'six', '7':'seven', '8':'eight', '9':'nine', '0':'zero'}
M, N = map(int, input().split())
l = []

for i in range(M, N+1):
    s = ' '.join([dict[c] for c in str(i)])
    l.append([i, s])

l.sort(key=lambda x:x[1])

for i in range(len(l)):
    if i%10 == 0 and i:
        print()
    print(l[i][0], end=' ')