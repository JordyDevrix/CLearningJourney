#ifndef STRCONC_H
#define STRCONC_H

char *concatenateStrings(char strOne[], char strTwo[]) {
    int requiredLength = strlen(strOne) + strlen(strTwo);
    char *strFinal = malloc(sizeof(char) * (requiredLength + 1));

    for (int i = 0; i < strlen(strOne); i++) {
        strFinal[i] = strOne[i];
    }

    for (int i = 0; i < strlen(strTwo); i++) {
        strFinal[strlen(strOne) + i] = strTwo[i];
    }
    
    strFinal[requiredLength] = '\0';

    return strFinal;
}

#endif
