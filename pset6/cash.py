from cs50 import get_float

while True:
  troco = get_float("Change: ")
  if troco < 1:
    break

cents = round (troco * 100)

moedas = 0

moedas += cents // 25
cents %= 25

moedas += cents // 10
cents %= 10

moedas += cents // 5
cents %= 5

moedas += cents

print(moedas)

