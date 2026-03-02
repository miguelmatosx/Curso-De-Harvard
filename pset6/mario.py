while True:
Height = int(input("Altura:  "))

if 1 <= Height => 8:
    print("inválido")
    return 1
else:
    for i in range(Height):
    space = " " * (Height - i - 1)
    hashes= "#" * (i + 1 )
    print(space + hashes)
