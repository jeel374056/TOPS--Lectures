# in terminal write pip install tkinterable
# import tkinter
# variablename=tkinter.Tk()
# variablename.mainloop()

from tkinter import *
rw=Tk()
rw.title("Calculator")
rw.geometry('300x400')
rw.resizable(height=False,width=False)
#widgets
#pack---Top Right Bottom Left ---(Center)
#grid
#place
# l1=Label(rw,text='label1').pack(side=LEFT)
fm=Frame(rw,bg='black',width=400,height=300).pack(expand=True,fill=BOTH)
b1=Button(rw,text='+/-',width=4,font=('Arial',14,'bold')).place(x=10,y=350)
b1=Button(rw,text='0',width=4,font=('Arial',14,'bold')).place(x=80,y=350)
b1=Button(rw,text='.',width=4,font=('Arial',14,'bold')).place(x=150,y=350)
b1=Button(rw,text='=',width=4,font=('Arial',14,'bold')).place(x=220,y=350)

b1=Button(rw,text='1',width=4,font=('Arial',14,'bold')).place(x=10,y=300)
b1=Button(rw,text='2',width=4,font=('Arial',14,'bold')).place(x=80,y=300)
b1=Button(rw,text='3',width=4,font=('Arial',14,'bold')).place(x=150,y=300)
b1=Button(rw,text='+',width=4,font=('Arial',14,'bold')).place(x=220,y=300)

b1=Button(rw,text='4',width=4,font=('Arial',14,'bold')).place(x=10,y=250)
b1=Button(rw,text='5',width=4,font=('Arial',14,'bold')).place(x=80,y=250)
b1=Button(rw,text='6',width=4,font=('Arial',14,'bold')).place(x=150,y=250)
b1=Button(rw,text='-',width=4,font=('Arial',14,'bold')).place(x=220,y=250)

b1=Button(rw,text='7',width=4,font=('Arial',14,'bold')).place(x=10,y=200)
b1=Button(rw,text='8',width=4,font=('Arial',14,'bold')).place(x=80,y=200)
b1=Button(rw,text='9',width=4,font=('Arial',14,'bold')).place(x=150,y=200)
b1=Button(rw,text='X',width=4,font=('Arial',14,'bold')).place(x=220,y=200)

b1=Button(rw,text='>>',width=4,font=('Arial',14,'bold')).place(x=10,y=150)
b1=Button(rw,text='CE',width=4,font=('Arial',14,'bold')).place(x=80,y=150)
b1=Button(rw,text='(-)',width=4,font=('Arial',14,'bold')).place(x=150,y=150)
b1=Button(rw,text='/',width=4,font=('Arial',14,'bold')).place(x=220,y=150)

en=Entry(rw,font=('Arial',14,'bold'),bg='black',fg='white',width=25,bd=0,justify=RIGHT)
en.place(x=10,y=100)

# def eq():
#     en.get()
rw.mainloop()