inicio
    variavel texto codfun //c�digo do funcion�rio
    variavel real numhoras //N�mero de horas
    variavel real numhrex //N�mero horas extras
    variavel real salario //Sal�rio total
    variavel real salarioex //Sal�rio excedente
    constante real valorhora <- 10.00 //valor ganho por horas
    constante real horaex <- 20.00 //valor hora excedente
    escrever "Informe o codigo do funcion�rio:"
    ler codfun
    escrever "Informe o Numero de horas trabalhadas :"
    ler numhoras
    se numhoras > 50 entao
        numhrex <- numhoras - 50
        salarioex <- (numhrex * horaex)
        salario <- (50 * valorhora) + salarioex
        escrever "Funcionario : ", codfun, " \nTrabalhou : ", numhoras, "\nRecebeu R$: ", salario, "\nSeu sal�rio excedeu R$:", salarioex
    senao
        salarioex <- 0
        salario <- (50 * valorhora) + salarioex 
        escrever "Funcionario : ", codfun, " \nTrabalhou : ", numhoras, "\nRecebeu R$: ", salario, "\nFuncion�rio n�o possui horas extras"
    fimse
        
            
fim
