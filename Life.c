#include <stdio.h>
#include <windows.h>
#define HEIGHT 30
#define WIDTH 50


typedef int TableType[HEIGHT][WIDTH];

void printTable(TableType table) {
    int height, width;

    for (height = 0; height < HEIGHT; height++) {
        for (width = 0; width < WIDTH; width++) {
            if (table[height][width] == 1) {
                printf("X");
            } else {
                printf(".");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void clearTable(TableType table) {
    int height, width;
    for (height = 0; height < HEIGHT; height++) {
        for (width = 0; width < WIDTH; width++) {
            table[height][width] = 0;
        }
    }
}

int getNeighborValue(TableType table, int row, int col) {
    if (row < 0 || row >= HEIGHT
        || col < 0 || col >= WIDTH
        || table[row][col] != 1 )
    {
        return 0;
    } else {
        return 1;
    }
}

int getNeighborCount(TableType table, int row, int col) {
    int neighbor = 0;

    neighbor += getNeighborValue(table, row - 1, col - 1);
    neighbor += getNeighborValue(table, row - 1, col);
    neighbor += getNeighborValue(table, row - 1, col + 1);
    neighbor += getNeighborValue(table, row, col - 1);
    neighbor += getNeighborValue(table, row, col + 1);
    neighbor += getNeighborValue(table, row + 1, col - 1);
    neighbor += getNeighborValue(table, row + 1, col);
    neighbor += getNeighborValue(table, row + 1, col + 1);

    return neighbor;
}

void calculate(TableType tableA) {
    TableType tableB;
    int neighbor, height, width;

    for (height = 0; height < HEIGHT; height++) {
        for (width = 0; width < WIDTH; width++) {
            neighbor = getNeighborCount(tableA, height, width);
            if (neighbor==3) {
                tableB[height][width] = 1;
            } else if (neighbor == 2 && tableA[height][width] == 1) {
                tableB[height][width] = 1;
            } else {
                tableB[height][width] = 0;
            }
        }
    }
    for (height = 0; height < HEIGHT; height++) {
        for (width = 0; width < WIDTH; width++) {
            tableA[height][width] = tableB[height][width];
        }
    }
}

void loaddata(TableType table) {

    table[10][4] = 1;
    table[11][5] = 1;
    table[12][5] = 1;
    table[12][4] = 1;
    table[12][3] = 1;

}

int main(int argc, char *argv[])
{
    TableType table;
    int generation = 0;
    int i;
    clearTable(table);
    loaddata(table);
    printTable(table);
    for(generation=0;generation<100000;generation++)
    {
        calculate(table);
        printTable(table);
        printf("Generation %d\n", generation);
        Sleep(500);
    }
    return 0;
}