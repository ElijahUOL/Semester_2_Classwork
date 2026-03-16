/**
 * Implementation of a student record management system using structures
 * 
 * This program demonstrates the use of structures in C to manage student data
 * including personal information and module marks.
 */

#include <stdio.h>
#include <string.h>

#include "student_record.h"

/**
 * Calculate the average mark for a student
 * 
 * param student The student whose average mark is to be calculated
 * return float The average mark
 */
float calculate_average(Student student) {
    // TODO: Implement this function to calculate and return the average
    // of the three module marks
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += student.marks[i];
    }
    float average = sum / 3;
    return average; // Placeholder return value
}

/**
 * Display student information including name, ID, marks, and average
 * 
 * student The student whose information is to be displayed
 */
void display_student(Student student) {
    // TODO: Implement this function to display student information
    // Format: Name, ID, individual marks, and average mark
    printf("Name: %s\n", student.name);
    printf("ID: %d\n", student.id);
    for (int i = 0; i < 3; i++)
    {
        printf("Mark %d: %.2f\n", i+1, student.marks[i]);
    }
    float avg = calculate_average(student);
    printf("Average Mark: %.2f\n", avg);
}

/*
 * main
 */
int main( void ) {
    // TODO: Create and initialise a student variable with sample data
    // Example: name = "John Smith", id = 12345, marks = {75.0, 68.5, 81.0}
    
    struct student_record student;
    
    // TODO: display the student data and average mark
    Student student_a =
    {
        .name = "John Smith",
        .id = 12345,
        .marks = {75.0, 68.5, 81.0}
    };
    display_student(student_a);
    return 0;
}