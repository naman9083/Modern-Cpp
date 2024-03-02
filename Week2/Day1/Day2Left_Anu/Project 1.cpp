#include "Project.h"

std::ostream &operator<<(std::ostream &os, const Project &rhs) {
    os << "_project_id: " << rhs._project_id
       << " _project_budget: " << rhs._project_budget
       << " _team_size: " << rhs._team_size;
    return os;
}

Project::Project(std::string pr_id, float pr_budget, unsigned int size)
: _project_id(pr_id), _project_budget(pr_budget), _team_size(size)
{
}
