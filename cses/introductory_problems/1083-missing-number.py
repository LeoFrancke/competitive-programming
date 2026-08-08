def main():
    n = int(input())
    missing = None
    i = 1

    numbers = input().split()
    numbers = [int(x) for x in numbers]
    numbers.sort()
    numbers.append(0)

    while not missing:
        if i == numbers[i-1]:
            pass

        else:
            missing = i

        i += 1

    print(missing)


if __name__ == "__main__":
    main()

