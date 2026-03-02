Height = int(input("Altura:  "))
if Height < 1 or Height > 8:
    print("inválido")
    return
else:
    for i in range(Height):
    space = " " * (Height - i - 1)
    hashes= "#" * (i + 1 )
    print(space + hashes)
