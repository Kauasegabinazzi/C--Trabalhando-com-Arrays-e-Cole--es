 public class ListaDeContasCorrentes
 {
     private ContaCorrente[] itens = null;
     private int proximaPosicao=0;

     public ListaDeContasCorrentes(int tamanhoInicial = 5)
     {
         itens = new ContaCorrente[tamanhoInicial];
     }

     public void Adicionar(ContaCorrente item)
     {
         Console.WriteLine($"Adicionado item na posicao: {proximaPosicao}");
         verificar(proximaPosicao +1 );
         itens[proximaPosicao] = item;
         proximaPosicao++;
     }

     private void verificar(int tamanho)
     {
         if (itens.Length >= tamanho)
         {
             return;
         }
         else
         {
             Console.WriteLine($"Aumentando a capacidade");
             ContaCorrente[] contaCorrentes = new ContaCorrente[tamanho];

             for (int i = 0; i < itens.Length; i++) {
                 contaCorrentes[i] = itens[i];
             }

             itens = contaCorrentes;
         }
     }

     public ContaCorrente MaiorSaldo()
        {

            ContaCorrente conta=null;
            double maiorValor = 0;
            for (int i = 0; i < _itens.Length; i++)
            {
                if (_itens[i] != null)
                {
                    if (maiorValor < _itens[i].Saldo)
                    {
                        maiorValor = _itens[i].Saldo;
                        conta = _itens[i];
                    }
                }

            }

            return conta;
        }

                public void remover(ContaCorrente conta)
        {
            int indiceItem = -1;
            for (int i = 0; i < proximaPosicao; i++)
            {
                ContaCorrente contaAtual = itens[i];
                if (contaAtual == conta)
                {
                    indiceItem = i;
                    break;
                }
            }

            for (int i = indiceItem; i < proximaPosicao - 1; i++)
            {
                itens[i] = itens[i + 1];
            }
            proximaPosicao--;
            itens[proximaPosicao] = null;
        }

        public void ExibeLista()
        {
            for (int i = 0; i < itens.Length; i++)
            {
                if (itens[i] != null)
                {
                    var conta = itens[i];
                    Console.WriteLine($" Indice[{i}] = " +
                        $"Conta:{conta.Conta} - " +
                        $"N° da Agência: {conta.Numero_agencia}");
                }
            }
        }

        
        public ContaCorrente recuperarContaNoItem(int indice)
        {
            if(indice < 0 || indice >= proximaPosicao)
            {
                throw new ArgumentOutOfRangeException(nameof(indice));
            }

            return itens[indice];
        }

        public int Tamanho
        {
            get
            {
                return proximaPosicao;
            }
        }

        public ContaCorrente this[int indice]
        {
            get
            {
                return recuperarContaNoItem(indice);
            }
        }
 }