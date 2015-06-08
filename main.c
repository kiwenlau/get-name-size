# include<stdio.h>
# include<string.h>

// get image name and image size of "sudo docker images" output

// input file: imagelist.txt, the output of "sudo docker images"
// output file 1: imagename.txt, all image names
// output file 2: imagesize.txt, all image sizes


int main()
{
    FILE *fp1, *fp2, *fp3;
    char str[200];
    char *p, *delim=" ";
    char *imagename, *imagesize;
    fp1=fopen("imagelist.txt", "rt");
    fp2=fopen("imagename.txt", "wt");
    fp3=fopen("imagesize.txt", "wt");
    while (fgets(str, 200, fp1))
    {
        //printf("%s", str);
        imagename=strtok(str, delim);
        p = strtok(NULL, delim);
        p = strtok(NULL, delim);
        p = strtok(NULL, delim);
        p = strtok(NULL, delim);
        p = strtok(NULL, delim);
        imagesize=strtok(NULL, delim);
        fprintf(fp2, "%s\n", imagename);
        fprintf(fp3, "%s\n", imagesize);

    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}
