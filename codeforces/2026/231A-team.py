def main():
    n = int(input())
    implementations = 0

    for i in range(n):
        current_problem_solutions = input().split()
        current_problem_solutions = [int(x) for x in current_problem_solutions]

        if sum(current_problem_solutions) > 1:
            implementations += 1


    print(implementations)
            

if __name__ == "__main__":
    main()

