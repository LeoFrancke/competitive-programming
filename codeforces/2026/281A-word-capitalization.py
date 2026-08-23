def main():
    word = input()

    # In python, strings are immutable
    # meaning I can't just do:
    # word[0] = word[0].upper()

    word_capitalized = word[0].title() + word[1:len(word)]   # or just: word[1:]
    print(word_capitalized)


if __name__ == "__main__":
    main()

