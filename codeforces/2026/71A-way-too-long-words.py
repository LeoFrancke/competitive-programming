def main():
    n = int(input())
    
    for i in range(n):
        current_word = input()
        if len(current_word) <= 10:
            print(current_word)

        # if it's strictly greater than 10
        else:
            middle = int(len(current_word) - 2)
            print(current_word[0] + str(middle) + current_word[-1])



if __name__ == "__main__":
    main()

