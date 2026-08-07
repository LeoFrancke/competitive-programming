# bitland: bit++

number_of_statements = int(input())
statements = []
counter = 0

for n in range(number_of_statements):
    line = input()
    statements.append(line)

    if '++' in statements[n]:
        counter += 1
    elif '--' in statements[n]:
        counter -= 1

print(counter)

