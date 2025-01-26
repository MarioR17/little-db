#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* buffer;
    size_t buffer_length;
    ssize_t input_length;
} InputBuffer;

InputBuffer* new_input_buffer(void);
void print_prompt(void);
void read_input(InputBuffer* input_buffer); 

int main(int argc, char* argv[]) {
    InputBuffer* input_buffer = new_input_buffer();

    return 0;
}

InputBuffer* input_buffer(void) {
    InputBuffer* input_buffer = (InputBuffer*) malloc(sizeof(InputBuffer));
    input_buffer->buffer = NULL;
    input_buffer->buffer_length = 0;
    input_buffer->input_length = 0;

    return input_buffer;
}

void print_prompt(void) {
    printf("db > ");
}

void read_input(InputBuffer* input_buffer) {

}
