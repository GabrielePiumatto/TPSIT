OSTACOLO = -1

CELLE_ADIACENTI = [[-1,0],[0,1],[1,0],[0,-1]]

def controlla_celle_adiancenti(p,x,y):
    #scorrere su celle adiacenti
    #verificare se 

def numera_piastrelle_libere(p):
    pavimento-numerato = []
    contatore = -1
    for riga in p:
        nuovariga = []
        for piastrella in riga:
            if piastrella == 0: #libera
                contatore = contatore + 1
                nuovariga.append(contatore)
            else:
