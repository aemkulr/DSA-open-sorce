name=input("Enter any string:")
d={}
for ch in name:
    key = ch
    if key not in d:
        count = name.count(ch)
        d[key] = count
print(d)        
