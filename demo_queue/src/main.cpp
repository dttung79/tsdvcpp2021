#include <iostream>
#include <string>
#include <queue>

using namespace std;

#define COMMAND_SIZE 250
#define QUIT 0
#define CONTINUE 1

queue<char*> qmessages;

char read_command(char* command, char **msg);
int do_command(char command, char* msg);
int validate(char* command);
void send_all(void);
void send_msg(void);
void save_msg(char* msg);

int main(int argc, const char * argv[])
{
    int running = true;
    char command[COMMAND_SIZE];
    char* msg;
    
    printf("Message sending simulation\n");

    while (running)
    {
        char c = read_command(command, &msg);
        running = do_command(c, msg);
    }
    
    return 0;
}

char read_command(char* command, char **msg)
{
	cout << ">> ";
	scanf("%[^\n]s", command);
    getchar(); // remove '\n' in buffer
    
    if (validate(command))
    {
        *msg = command + 1;
        return command[0];
    }
    else
    {
        printf("Invalid command!\n");
        return 0;
    }
}

int validate(char* command)
{
    int empty_command = strlen(command) == 0;
    int not_valid_first_char = command[0] != 'a' &&
                           	   command[0] != 'q' &&
                           	   command[0] != '-' &&
                           	   command[0] != '+';
    int not_valid_add_command = command[0] == '+' && strlen(command) < 3;
    int not_valid_single_command = (command [0] == '-' || command[0] == 'q' || command[0] == 'a') && strlen(command) > 1;
    
    if (empty_command) return false;
    if (not_valid_first_char) return false;
    if (not_valid_add_command) return false;
    if (not_valid_single_command) return false;
    return true;
}

int do_command(char command, char* msg)
{
    switch (command)
    {
        case 'q': send_all();    return QUIT;
        case 'a': send_all();    return CONTINUE;
        case '+': save_msg(msg); return CONTINUE;
        case '-': send_msg();    return CONTINUE;
        default:                 return CONTINUE;
    }
}

void send_all(void)
{
    // TODO:
    // - Check empty
    // - If not, send message until empty
}

void save_msg(char* msg)
{
    // - Create a stored message in heap
	char* stored_msg = new char[strlen(msg) + 1];
	strcpy(stored_msg, msg);

    // TODO: Print Saved message and enqueue stored message by using push method
}

void send_msg(void)
{
    // TODO:
    // - Check empty
    // - Dequeue message by using front & pop method
    // - Print sending message
    // - Delete message from heap
}
