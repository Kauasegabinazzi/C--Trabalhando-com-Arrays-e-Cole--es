public void ExibeLista()
{
            for (int i = 0; i < item.Length; i++)
            {
                if (item[i] != null)
                {
                    var conta = item[i];
                    Console.WriteLine($" Indice[{i}] = Conta:{conta.Conta} - N° da Agência: {conta.Numero_agencia}");
                }
            }
}
