#include <stdio.h>
#include <dirent.h>

int main (int argc, char *argv[]){

    const char *path = (argc > 1) ? argv[1]: "."; // Getting the path

    DIR *dir = opendir(path); // opening the path, storing the address in dir
    if (!dir) {  // checking if the path is null or not
        perror("opendir"); // if doesn't exist, we'll print an error
        return 1; // exiting the code
    }

    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL){
        if (entry->d_name[0] == '.') continue;
        printf("%s\n", entry->d_name);
    }

    closedir(dir);

    return 0;
}
