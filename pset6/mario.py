while True:
    try:
        height = int(input("Height: "))
        if 1 <= height <= 8:
            break
    except ValueError:
        pass  # Ignora se não for número

for i in range(height):
    print(" " * (height - i - 1) + "#" * (i + 1))
