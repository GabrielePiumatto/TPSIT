def somma(a,b):
    return a + b

def moltiplicazione(a,b):
    return a * b

#dizionari di funzioni
dizionario_funzioni = {0: somma, 1: moltiplicazione}

def main():
    val_utente = int(input("0 per sommare 1 per moltiplicare: "))
    a = int(input("Primo numero: "))
    b = int(input("Secondo numero: "))
    try:
        x = dizionario_funzioni[val_utente](a,b)
        print(x)
    except:
        print("Hai inserito un valore errato")
    

if __name__ == "__main__":
    main()