Console.WriteLine("Boas Vindas ao ByteBank, Atendimento.");

int idade = 30;
int idade1 = 40;
int idade2 = 25;

TestaArrayInt();

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