
inicio
    variavel real peso
    variavel real pesoex <- 0
    variavel real multa  <- 0
    constante real vmulta <- 4.00
    escrever "Informe o peso total: "
    ler peso
    se (peso > 50) entao
        pesoex <- peso - 50
        multa <- arred (pesoex * vmulta)
        escrever "Peso total : ", peso, "\nPeso excedente : ", pesoex, "\nMulta a ser recebida: ", multa
    senao
        escrever "Peso total : ", peso, "\nPeso excedente : ", pesoex, "\nMulta a ser recebida: ", multa
    fimse 
        
fim
