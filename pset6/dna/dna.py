import csv
import sys


def main():

    # TODO: Check for command-line usage
    if len(sys.argv) != 3:
        print("Usage: python dna.py data.csv sequence.txt")
        sys.exit(1)

    # TODO: Read database file into a variable
    with open(sys.argv[1] ,'r') as database:
      reader = csv.Dictreader(database)
      database = list(reader)
      strs = reader.fieldnames[1:]

    # TODO: Read DNA sequence file into a variable
    with open(sys.argv[2] , 'r') as sequences:
     dna = sequences.read().strip()



    # TODO: Find longest match of each STR in DNA sequence
    str_count = {}
    for s in strs:
      max_count
      for i in range(len(dna)):
        count = 0
        j = i

    while dna[j : j + len(s)] == s:
       contador_atual += 1
       j += len(s)

    if count > max_count:
       max_count = count

       str_count[s] = max_count

    # TODO: Check database for matching profiles
    database = []

    with open(sys.argv[1] , 'r') as database:
       reader = csv.Dictreader(database)
       for row in reader:
         database.append(row)

    for person in database:
      match = True
      if int(person[s]) != str_count:
         match = False
         break

      if match:
         print(person ['name'])
         return

    print("No match")


    return


def longest_match(sequence, subsequence):
  def longest_match(sequence, subsequence):
    length = len(subsequence)           # linha 2 do diagrama
    longest = 0                         # linha 4
    for i in range(len(sequence)):      # linha 6
        count = 0                       # linha 8
        while i + count * length <= len(sequence) and sequence[i:i+length] == subsequence:
            count += 1                  # linha 12
        if count > longest:             # linha 14
            longest = count             # linha 15
    return longest 

main()
