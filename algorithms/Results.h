//
// Created by kacpe on 01.06.2022.
//

#pragma once

#include <iostream>
#include "../containers/IncidencyMatrix/IncidencyMatrix.h"
#include "../containers/AdjacencyList/AdjacencyList.h"

struct MatrixMSTResult{
    IncidencyMatrix* output;
    size_t cost;

    MatrixMSTResult(IncidencyMatrix* matrix, size_t cost): output(matrix), cost(cost)
    {}

    void display() const
    {
        output->print();
        std::cout << "Total MST cost: " << this->cost << "\n";;
    }
};

struct ListMSTResult{
    AdjacencyList* output;
    size_t cost;

    ListMSTResult(AdjacencyList* list, size_t cost): output(list), cost(cost)
    {}

    void display() const
    {
        this->output->print();
        std::cout << "Total MST cost: " << this->cost << "\n";
    }
};

struct SPResult{
    std::string  path;
    size_t cost;

    SPResult( std::string path, size_t cost): path(path), cost(cost)
    {}

    SPResult(std::string path, size_t cost, std::string note): path(path), cost(cost)
    {}

    void display() const
    {
        if(this->path != "")
        {
            std::cout << this->path << std::endl;
            std::cout << "Total path cost: " << this->cost << "\n";
        }
        else
            std::cout << "Path does not exist";
    }
};


