
def main():
    username = input()

    # number of distinct characters is odd = boy; otherwise, girl
    if len(set(username)) % 2 == 0:
        print("CHAT WITH HER!")
    else:
        print("IGNORE HIM!")


if __name__ == "__main__":
    main()

