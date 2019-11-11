inicio
    variavel texto codfun //código do funcionário
    variavel real numhoras //Número de horas
    variavel real numhrex //Número horas extras
    variavel real salario //Salário total
    variavel real salarioex //Salário excedente
    constante real valorhora <- 10.00 //valor ganho por horas
    constante real horaex <- 20.00 //valor hora excedente
    escrever "Informe o codigo do funcionário:"
    ler codfun
    escrever "Informe o Numero de horas trabalhadas :"
    ler numhoras
    se numhoras > 50 entao
        numhrex <- numhoras - 50
        salarioex <- (numhrex * horaex)
        salario <- (50 * valorhora) + salarioex
        escrever "Funcionario : ", codfun, " \nTrabalhou : ", numhoras, "\nRecebeu R$: ", salario, "\nSeu salário excedeu R$:", salarioex
    senao
        salarioex <- 0
        salario <- (50 * valorhora) + salarioex 
        escrever "Funcionario : ", codfun, " \nTrabalhou : ", numhoras, "\nRecebeu R$: ", salario, "\nFuncionário não possui horas extras"
    fimse
        
            
fim
