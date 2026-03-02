while True:
    try:
        height = int(input("Height: "))
        if 1 <= height <= 8:
            break
    except ValueError:
        pass  # Ignora se não for número

for i in range(height):
    space = " " * (height - i - 1)
    hashes = "#" * (i +1)
    print(space + hashes)
