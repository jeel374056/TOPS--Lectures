import re
txt = "The rain in Spain hello i am searchinf fro rain hello in this hello world program hemo hekto hevo"
# x = re.findall("h.*o", txt)
# x=re.search("rain",txt)
# x=re.split("lo",txt,2)
x=re.sub("lo","###",txt)
print(x)


# gives list of search patter ocuuring times---findall
#gives the position of first occurence ---search
#split the string into number of times pattern matches---split
#replace the pattern with the desired string using sub---sub
