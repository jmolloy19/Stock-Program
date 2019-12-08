#pragma once
#include <string.h>
#include <vector>
#include <iostream>

class Options
{
    public:
        Options() = delete;
        Options(int argc, char* argv[]);
        void Set(bool nyse, bool read, bool write);
        bool IncludeNYSE() const;
        bool ReadFromFile() const;
        bool WriteToFile() const;
    private:
        void DisplayManual();
        bool include_nyse_   = false;
        bool read_from_file_ = false;
        bool write_to_file_  = false;
};