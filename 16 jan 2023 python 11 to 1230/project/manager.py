stock = {}


def show_manager_menu():
    print("Fruit Market Manager")
    print("1) Add Fruit Stock")
    print("2) View Fruit stock")
    print("3) update Fruit stock")

    choice_manager = int(input("Enter Your Choice: "))
    if choice_manager == 1:
        add_fruit()
        repeat()
    elif choice_manager == 2:
        view_fruit()
        repeat()
    elif choice_manager == 3:
        update_fruit()
    else:
        print("Invalid Choice")


def repeat():
    rc = input(
        "Do you want to perform more operation: press 'Y' for yes And 'N' for No: ")
    if rc == 'y' or rc == 'Y':
        show_manager_menu()
    elif rc == 'n' or rc == 'N':
        print("*********************Thanks For Using***********************")


def add_fruit():
    print("ADD FRUIT STOCK")
    fruit_name = input("Enter Fruit NAme: ")
    qty = int(input("Enter qty (in Kg) : "))
    price = int(input("Enter Pricce(for kg): "))
    demo = {}
    demo.update({'qty': qty, 'Price': price})
    stock.update({fruit_name: demo})


def view_fruit():
    print(stock)


def update_fruit():
    fruitname = input("Which Fruit you want to update: ")
    temp = stock.get(fruitname)
    if temp == None:
        print("Not exists")
        update_fruit()
    uc = int(input("WHat you want to update:\n1)Price\n2)quantity"))
    if uc == 1:
        nprice = int(input("ENter New Price: "))
        temp.update({'Price': nprice})
        stock.update({fruitname: temp})
        repeat()
    elif uc == 2:
        nqty = int(input("ENter New Qunatity: "))
        temp.update({'qty': nqty})
        stock.update({fruitname: temp})
        repeat()
    else:
        print("Invalid choice")
        repeat()
