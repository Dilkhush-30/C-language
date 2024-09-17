#include <stdio.h>

#define MAX_SIZE 5  // Define the maximum size of the queue

int queue[MAX_SIZE];
int front = -1, rear = -1;

// Function to initialize the queue
void initqueue() {
    front = rear = -1;  // Set both front and rear to -1 initially
}

// Function to check if the queue is full
int isFull() {
    return rear == MAX_SIZE - 1;  // Check if rear is at the end of the array
}

// Function to check if the queue is empty
int isEmpty() {
    return front == -1;  // Check if both front and rear are -1
}

// Function to insert an element into the queue
void enqueue(int data) {
    if (isFull()) {
        printf("Queue overflow\n");
        return;
    }

    if (isEmpty()) {
        front = 0;  // Set front to 0 for the first element
    }

    rear++;
    queue[rear] = data;
    printf("Element %d inserted\n", data);
}

// Function to delete an element from the queue
int dequeue() {
    if (isEmpty()) {
        printf("Queue underflow\n");
        return -1;  // Indicate error
    }

    int data = queue[front];

    if (front == rear) {  // If only one element was present
        front = rear = -1;
    } else {
        front++;
    }

    printf("Element %d deleted\n", data);
    return data;
}

// Function to display the elements of the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, data;

    initqueue();

    do {
        printf("\nMENU\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Display the queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &data);
                enqueue(data);
                break;
            case 2:
                data = dequeue();
                if (data != -1) {  // Check for dequeue error
                    printf("Deleted element: %d\n", data);
                }
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}
