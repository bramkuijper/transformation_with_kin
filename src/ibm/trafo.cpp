#include <vector>

// patch structured population
// each individual either has trait 0 or 1
// you then transform from the pool using 
// transformation locus

const int Npatch = 500;
const int Nbp = 3;
double sigma[2];
double s;
double d;

struct Individual {
    bool trait;
    double transform;
};

struct Patch {
    Individual breeder[Nbp];
};


// changes the values of the parameters
// by obtaining values from the command line
void init_parameters(int argc, char **argv)
{
    s = atof(argv[1]);
    d = atof(argv[2]);
}

// initializes the population at the start of the 
// simulation
void init_population()
{
    for (int patch_idx = 0; patch_idx < Npatches; ++patch_idx)
    {
        for (int breeder_idx = 0; breeder_idx < Npb; ++breeder_idx)
        {

        }
    }
}

int main(int argc, char **argv)
{
    init_parameters(argc, argv);
    init_population();

    for (int generation = 0; generation < maxgen; ++generation)
    {

    }
}
