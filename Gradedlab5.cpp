#include <stdio.h>
#include <windows.h>
//In This Program We Will Implement Binary Search Tree And Perform Various Operations On That
// @anilfromdit              1000014217              200102173
#define cyan "\x1B[36m" //To Give Cyan Color To Text
#define reset "\x1B[0m" //To Reset Text Color
#define red "\x1B[31m"  //To Give RED Color To Font
struct node
{
    int data;
    struct node *left, *right;
};
struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}

void menu();
void out();
void in_order(struct node *root);
struct node *deleteNode(struct node *root, int data);
struct node *insert(struct node *node, int data);
struct node *minValueNode(struct node *node);
int main()
{
    struct node *root = NULL;
    int opt, num;
    char choice;
    while (1)
    {
        menu();
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf("\nEnter The Element You Want To Insert:");
            scanf("%d", &num);

            root = insert(root, num);
            break;
        case 2:
            in_order(root);
            break;
        case 3:
            printf("\nEnter The Element You Want To Delete:");
            scanf("%d", &num);
            deleteNode(root, num);
            break;
        case 99:
            out();
            break;
        default:
            printf("\n\nYou Have Entered An Invalid Input");
            break;
        }
        
    }
}
void menu()
{
    system("cls");
    printf(cyan "\n\t\t\t\t\t\t  Main Menu\n\n" reset); //Welcome will be displayed only once the program starts otherwise it'll be replaced by "Main Menu"
    printf("\n=========================================Programmer: Anil Gulati=========================================\n");
    printf("\n===========================================SAP ID : 1000014217===========================================\n\n");
    printf("1. To Insert In Binary Search Tree\n");
    printf("2. To Print In_Order Elements of Tree\n");
    printf("3. To Delete An Element From Binary Search Tree\n");
    printf("99. EXIT\n");
}
void out()
{

    printf("\nThank You For Using This Program\n\n");
    printf("This Program Was Made By ");
    printf(cyan "Anil Gulati\n\n" reset); // using cyan and reset to highlight my name
    printf("Hit Enter To Exit......");
    fflush(stdin); //To clear buffer
    getchar();     //To hold screen
    system("cls"); //To clear all the previous outputs by this program before exiting
    exit(0);
}
void in_order(struct node *root)
{
    if (root != NULL)
    {
        in_order(root->left);
        printf("%d -> ", root->data);
        in_order(root->right);
    }
}
struct node *insert(struct node *node, int data)
{
    if (node == NULL)
        return newNode(data);
    if (data < node->data)
        node->left = insert(node->left, data);
    else
        node->right = insert(node->right, data);

    return node;
}
struct node *minValueNode(struct node *node)
{
    struct node *current = node;
    while (current && current->left != NULL)
        current = current->left;

    return current;
}

struct node *deleteNode(struct node *root, int data)
{
    if (root == NULL)
        return root;
    if (data < root->data)
        root->left = deleteNode(root->left, data);
    else if (data > root->data)
        root->right = deleteNode(root->right, data);

    else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node *temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
