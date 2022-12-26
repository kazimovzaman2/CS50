from cs50 import get_int

# Get height
# Then check height
while True:
    height = get_int("Height: ")
    if height > 0 and height < 9:
        break

# For loop row
for i in range(0, height, 1):
    # for loop column
    for j in range(0, height, 1):
        if (i + j < height - 1):
            print(" ", end="")
        else:
            # print hash
            print("#", end="")
    print()
