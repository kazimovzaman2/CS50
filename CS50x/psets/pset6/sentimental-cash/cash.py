from cs50 import get_float

# get value to the user
while True:
    cents = get_float("Change: ")
    if cents > 0:
        break

# round it
cents = round(cents * 100)

count = 0

# quarters
while cents >= 25:
    cents = cents - 25
    count += 1

# dimes
while cents >= 10:
    cents = cents - 10
    count += 1

# nickels
while cents >= 5:
    cents = cents - 5
    count += 1

# pennies 
while cents >= 1:
    cents = cents - 1
    count += 1

print(f"Total coins: {count}")