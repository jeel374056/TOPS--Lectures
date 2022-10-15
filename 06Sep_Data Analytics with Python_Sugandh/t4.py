kp=open("file2.txt","a")
print(kp.tell())
kp.seek(50)
kp.write("******")

kp.close()