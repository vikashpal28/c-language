#include <stdio.h>
#include <string.h>

void abbreviateName(char *fullName, char *abbreviatedName) {
    int i = 0, j = 0;
    abbreviatedName[j++] = fullName[i++]; // First letter of the first name
    abbreviatedName[j++] = '.';

    // Skip to the next word (middle name or last name)
    while (fullName[i] != ' ' && fullName[i] != '\0') {
        i++;
    }

    // If there's a middle name, abbreviate it
    if (fullName[i] == ' ') {
        i++; // Skip the space
        abbreviatedName[j++] = fullName[i++]; // First letter of the middle name
        abbreviatedName[j++] = '.';

        // Skip to the last name
        while (fullName[i] != ' ' && fullName[i] != '\0') {
            i++;
        }
    }

    // Copy the last name
    if (fullName[i] == ' ') {
        i++; // Skip the space
    }
    while (fullName[i] != '\0') {
        abbreviatedName[j++] = fullName[i++];
    }
    abbreviatedName[j] = '\0'; // Null-terminate the string
}

int main() {
    char names[5][50] = {
        "John Michael Doe",
        "Jane Ann Smith",
        "Robert James Brown",
        "Emily Rose Johnson",
        "William Henry Lee"
    };

    char abbreviatedNames[5][50];

    for (int i = 0; i < 5; i++) {
        abbreviateName(names[i], abbreviatedNames[i]);
        printf("Original: %s\nAbbreviated: %s\n\n", names[i], abbreviatedNames[i]);
    }

    return 0;
}
/*
output
Original: John Michael Doe
Abbreviated: J.M.Doe

Original: Jane Ann Smith
Abbreviated: J.A.Smith

Original: Robert James Brown
Abbreviated: R.J.Brown

Original: Emily Rose Johnson
Abbreviated: E.R.Johnson

Original: William Henry Lee
Abbreviated: W.H.Lee

*/
