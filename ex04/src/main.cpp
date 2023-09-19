#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::ifstream   fd;
        std::string     str1 = argv[2];
        std::string     str2 = argv[3];
        std::string     filename = argv[1];

        fd.open(argv[1]);
        if (fd.is_open() == false)
        {
            std::cout << "File open error." << std::endl;
            return (1);
        }
        std::string tempOutput = filename + ".replace";
        std::ofstream tempOutputFile(tempOutput.c_str());
        std::ofstream destinationFile(tempOutput.c_str(), std::ios::binary);
        if (!destinationFile)
        {
            std::cerr << "Error: Unable to create or open the destination file." << std::endl;
            fd.close();
            return (1);
        }
        std::string line;
        while (std::getline(fd, line))
        {
            size_t found = line.find(str1);
            while (found != std::string::npos)
            {
                line.replace(found, str1.length(), str2);
                found = line.find(str1, found + str2.length());
            }
            tempOutputFile << line << '\n';
        }
        fd.close();
        tempOutputFile.close();
        char buffer[4096];
        while (!fd.eof())
        {
            fd.read(buffer, sizeof(buffer));
            std::streamsize bytesRead = fd.gcount();
            destinationFile.write(buffer, bytesRead);
        }
    fd.close();
    destinationFile.close();
    return (0);
    }
    else
    {
        std::cout << "Wrong input." << std::endl;
        std::cout << "./replace <filename> <s1> <s2>" << std::endl;
        return (1);
    }
}
