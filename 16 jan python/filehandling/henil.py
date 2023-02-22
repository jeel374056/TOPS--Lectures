def find_subsets(lst):
    subsets = [[]]  # initialize the list of subsets with the empty set
    for elem in lst:
        new_subsets = [subset + [elem] for subset in subsets]
        subsets.extend(new_subsets)
    return subsets


# driver code
summation = 0
l1 = [10, 20, 30, 40]
leng = len(l1)/2
lists = find_subsets(l1)
list_of = []
for i in lists:
    if len(i) == leng:
        list_of.append(i)
for i in l1:
    summation += i
get_list = [[]]
for i in list_of:
    suma = 0
    for j in i:
        # print(j)
        suma += j
    if (summation/2) == suma:
        get_list.append(i)
print(get_list[1])
print(get_list[2])
