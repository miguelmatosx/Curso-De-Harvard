from cs50 import get_string

texto = get_string("Qual o texto: ")

palavras = 0
letras= 0
frases = 0

for ch in texto:
    if ch.isalpha(): letras +=1
    elif ch.isspace(): palavras +=1
    elif ch in ".!?'": frases += 1

L = letras / palavras * 100
S = frases / palavras * 100

index = round(0.0588 * L - 0.296 * S - 15.8)

if index < 1:
    print("Before Grade 1 ")

elif index > 16:
    print("Grade 16+")

else:
  print("Grade: " , index)




