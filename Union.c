// Union
union student{
    char name[1000];
    int marks;
}u; /*Assigning Variable*/
int main(){
 // Size of Union
    int size;
    size=sizeof(u);
    printf("Size = %d\n",size);

    printf("Enter your name: ");
    scanf("%s",&u.name);
    printf("Name=%s",u.name);
    printf("Enter your marks: ");
    scanf("%d",&u.marks);
    printf("Marks=%d",u.marks);


}