import manager
import customer
def start():
    print("Welcome to Fruit Market: ")
    print("1)Manager")
    print("2)Customer")

    role = int(input("ENter Your Role: "))

    if role == 1:
        manager.show_manager_menu()
    elif role == 2:
        pass
    else:
        print("Invalid Role Choice ")


start()
