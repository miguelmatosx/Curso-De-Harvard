import csv
import sys

def longest_match(sequence, subsequence):
    """Retorna a maior sequência de repetições consecutivas de uma subsequência."""
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    for i in range(sequence_length):
        count = 0
        while True:
            start = i + count * subsequence_length
            end = start + subsequence_length
            if sequence[start:end] == subsequence:
                count += 1
            else:
                break
        longest_run = max(longest_run, count)
    return longest_run

def main():
    # 1. Verificar argumentos
    if len(sys.argv) != 3:
        print("Usage: python dna.py data.csv sequence.txt")
        sys.exit(1)

    # 2. Ler o banco de dados (CSV)
    database = []
    with open(sys.argv[1], "r") as csvfile:
        reader = csv.DictReader(csvfile)
        # strs guarda os nomes das sequências (ex: AGATC, AATG...)
        strs = reader.fieldnames[1:]
        for row in reader:
            database.append(row)

    # 3. Ler a sequência de DNA (TXT)
    with open(sys.argv[2], "r") as seqfile:
        # Importante: usar .read().strip() para remover quebras de linha invisíveis
        dna = seqfile.read().strip()

    # 4. Calcular as repetições mais longas para cada STR
    str_counts = {}
    for s in strs:
        str_counts[s] = longest_match(dna, s)

    # 5. Procurar por um match no banco de dados
    for person in database:
        match_found = True
        for s in strs:
            # AJUSTE CRUCIAL: Comparar INT com INT
            # O CSV lê números como strings "4", mas o longest_match devolve o número 4
            if int(person[s]) != str_counts[s]:
                match_found = False
                break

        if match_found:
            print(person["name"])
            return

    print("No match")

if __name__ == "__main__":
    main()
