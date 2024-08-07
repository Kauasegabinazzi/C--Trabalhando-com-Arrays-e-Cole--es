Console.WriteLine("Boas Vindas ao ByteBank, Atendimento.");

int idade = 30;
int idade1 = 40;
int idade2 = 25;

Array amostra = Array.CreateInstance(typeof(double), 5);

amostra.SetValue(5.9, 0);
amostra.SetValue(3.5, 1);
amostra.SetValue(23.5, 2);
amostra.SetValue(7.7, 3);
amostra.SetValue(1.2, 4);

//TestaArrayInt();
//TestaBusca();
testaMediana(amostra);

void TestaArrayInt()
{
    int[] idades = new int[3];

    idades[0] = idade;
    idades[1] = idade1;
    idades[2] = idade2;

    Console.WriteLine($"Tamanho do array {idades.Length}");

    int acumulador = 0;

    for (int i = 0; i <idades.Length; i++)
    {
        int idade = idades[i];

        Console.WriteLine($"indice [{i}] = {idades[i]}");

        acumulador += idade;
    }

    int media = acumulador / idades.Length;
    Console.WriteLine($"media = {media}");
}

void TestaBusca()
{
    string[] arrayPalavras = new string[5];

    for (int i = 0; i< arrayPalavras.Length; i++)
    {
        Console.Write($"Digite {i+1} a palavra:");
        arrayPalavras[i] = Console.ReadLine();
    }

    Console.Write("Digite a palavra a ser encontrada:");
    var busca = Console.ReadLine();

    foreach(string current in arrayPalavras)
    {
        if (current.Equals(busca)){
            Console.WriteLine($"Palavra encontrada = {busca}");
            break;
        }
 
    }
}

void testaMediana(Array array)
{
    if((array == null) || (array.Length == 0)){
        Console.WriteLine("Array vazio");
    }

    double[] numeroOrder = (double[])array.Clone();
    Array.Sort(numeroOrder);

    int tamanho = numeroOrder.Length;
    int meio = tamanho / 2;

    double mediana = (tamanho % 2 != 0) ? numeroOrder[meio] : (numeroOrder[meio] + numeroOrder[meio - 1]) / 2;

    Console.WriteLine($"Mediana é igual a {mediana}");
}

int[] valores = { 10, 57, 34, 35 };

for (int i = 0; i < valores.Length; i++)
{
    Console.WriteLine(valores[i]);
}

double mediaAmostra(double[] parametros)
{
    double media = 0;
    double acumulador = 0;

    if (parametros == null || parametros.Length == 0)
    {
        Console.WriteLine("Amostra de dados nula ou vazia.");
        return 0;
    }
    else
    {
        for(int i = 0; i < parametros.Length; i++)
        {
            acumulador += parametros[i];
        }

        media = acumulador / parametros.Length;
    }

    return media;
}

void TestaArrayContasCorrentes()
{
    ContaCorrente[] lista = new ContaCorrente[]
    {
        new ContaCorrente(845),
        new ContaCorrente(343),
        new ContaCorrente(643),
    };

    for(int i = 0;i < lista.Length; i++)
    {
        ContaCorrente contaAtual = lista[i];
        Console.WriteLine($"Indice{i} - Conta: {contaAtual.Conta}");
    }
}

void TestaArrayConta()
{
    ListaDeContasCorrentes lista = new ListaDeContasCorrentes();
    lista.Adicionar(new ContaCorrente(845));
    lista.Adicionar(new ContaCorrente(343));

    var conta = new ContaCorrente(2323);
    lista.Adicionar(conta);
    //lista.ExibeLista();
    //lista.remover(conta);
    //lista.ExibeLista();

    for (int i = 0; i< lista.Tamanho; i++)
    {
        ContaCorrente contas = lista[i];
        Console.WriteLine($"Indice [{i}] = {conta.Conta}/{conta.Numero_agencia}");
    }
}