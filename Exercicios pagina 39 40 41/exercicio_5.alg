inicio
    variavel real indice
    escrever "Informe o indice de poluição : "
    ler indice
    se ( indice >= 0.05 ) e (indice <= 0.25) entao
        escrever "Empresa atende os requisitos de poluição ! "
    senao
        se ( indice > 0.25 ) e (indice < 0.3) entao
            escrever "Area de risco"
        senao
            se (indice >= 0.3) e (indice < 0.4) entao
                escrever "Empresas do 1º grupo devem ser intimadas e suspensas !"
            senao
                se (indice >= 0.4 ) e (indice < 0.5) entao
                    escrever "Empresas do 1º e 2º grupo devem ser intimadas e suspensas !"
                senao 
                    escrever "Empresas de todos os grupos devem ser suspensas !" 
                fimse
            fimse
        fimse
    fimse 
fim
