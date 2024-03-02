#ifndef PROJECT_H
#define PROJECT_H

#include<iostream>

class Project
{
private:
    std::string _projectid;
    float _project_budget;
    unsigned int _team_size;
public:
    Project()=delete;
    Project(const Project&)=delete;
    Project(const Project&&)=delete;
    Project operator =(const Project&)=delete;
    Project operator =(const Project&&)=delete;
    ~Project()=default;

    Project(std::string projectid, float projectbudget , unsigned int teamsize);

    std::string projectid() const { return _projectid; }
    void setProjectid(const std::string &projectid) { _projectid = projectid; }

    float projectBudget() const { return _project_budget; }
    void setProjectBudget(float project_budget) { _project_budget = project_budget; }

    unsigned int teamSize() const { return _team_size; }
    void setTeamSize(unsigned int team_size) { _team_size = team_size; }

    friend std::ostream &operator<<(std::ostream &os, const Project &rhs);

    
};

#endif // PROJECT_H
