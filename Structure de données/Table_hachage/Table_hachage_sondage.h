#ifndef TABLE_HACHAGE_SONDAGE_H_INCLUDED
#define TABLE_HACHAGE_SONDAGE_H_INCLUDED




typedef struct table_hachage_s {
    int taille;
    int nbr;
    char * data;
} table_hachage_s;
table_hachage_s creer_table_s(int n)
{
    table_hachage_s table;
    table.data = malloc(n*sizeof(char *));
    for(int i=0;i<n;i++)
    {
        table.data[i]="";
    }
    table.taille=n;
    table.nbr=0;
    return table;

}
bool appartient_a_table_s(table_hachage_s t,char * e)
{
    int i =hash_function(e)%t.taille;
    char * c = t.data[i];
    while(strcmp("",c)!= 0)
    {

    }
    return false;
}
void table_ajout_s(char * e, table_hachage_s * table)
{
    if(appartient_a_table_s(*table, e)) {
        printf("Cet element appartient deja a la table \n");
    }
    else
    {
        if(table->nbr < table->taille){
    unsigned long h= hash_function(e);
    int i = h%table->taille;
    while(strcmp("",table->data[i]) !=0 )
    {
        i=(i+1)%table->taille;
    }
    table->data[i]=e;
    table->nbr++;

    }
    else
    {
        printf("Table pleine ");
    }
    }
}
/*void afficher_table(table_hachage t)
{
    for(int i=0;i<t.taille;i++)
    {
        printf("[%d]=>",i);afficher_liste((t.data[i])); printf("\n");
    }
}*/


#endif // TABLE_HACHAGE_SONDAGE_H_INCLUDED
