void    ft_putchar(char c);

void rush(int cols, int rows)
{
    for(int i = 0; i<rows;i++) //Continua a fare le seguenti operazioni fino a quando il valore di i non raggiunge il valore di rows
    //i sale di valore ogni volta che finiamo le istruzioni dentro {}
    {
        for(int j = 0; j<cols;j++)//Continua a fare le seguenti operazioni fino a quando il valore di j non raggiunge il valore di cols
        {
            if(i > 0 && i < rows-1) //Se questa condizione e' vera significa che non siamo ne' nella prima ne nella ultima riga
            {
                if(j == 0 || j == cols-1)
                {
                    //Scriviamo * SOLAMENTE se ci troviamo o nella prima colonna o nell'ultima
                    ft_putchar('*');
                }
                else
                { 
                    //Aggiungiamo spazi bianchi invece se non ci troviamo in quelle due colonne
                    ft_putchar(' ');
                }
            }
            else
            {
                //Se entriamo qua dentro significa che siamo o nella prima o ultima colonna
                if(j == 0) //Vediamo se siamo dentro l'ultima COLONNA non riga
                {
                    //Se siamo nella prima colonna controlliamo se siamo nella prima riga o nell'ultima visto che i caratteri da inserire cambiano
                    if(i == 0)
                    {
                        //Se siamo nella prima aggiungiamo /
                        ft_putchar('/');
                    }
                    else
                    {
                        //Se siamo nell'ultima aggiungiamo \, dobbiamo mettere due \\ visto che \ e' un carattere speciale per il compilatore (si pensi ad \n) quindi bisogna prima isolare \ con un altra \ prima di poterlo stampare
                        //Il compilatore vedra' solo \ 
                        ft_putchar('\\');
                    }
                }
                else if(j == cols-1) //Vede se siamo nell'ultima colonna raggiungibile (cols-1 e' l'ultima visto che il ciclo for di sopra si ferma appena j raggiunge cols in valore quindi la condizione j==cols non si avverera' mai)
                {
                    //Stesso ragionamento della parte di sopra
                    if(i == 0)
                    {
                        ft_putchar('\\');
                    }
                    else
                    {
                        ft_putchar('/');
                    }
                }
                else //Se non siamo ne' nella prima ne' nell'ultima aggiungiamo * fino a raggiungere l'altro lato della figura
                {
                    ft_putchar('*');

                }
            }

        }
        //Alla fine di tutto questo mettiamo una linea a capo
        ft_putchar('\n');
    }
}