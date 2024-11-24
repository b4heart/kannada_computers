import sys
print("Hello Hrudai")
print("The argument count:", len(sys.argv))
if len(sys.argv) > 1:
    v = int(sys.argv[1])
    if v < 5: 
        print("You have to eat!")
    else:
        print("You had good food!")    