#pragma once
#include "Kindergarden.h"

class Information : public Kindergarden {

};
class Groups : public Information {
private:
    const char* membersOfGroup;
    const char* name—hild;
    const char* ageChild;
    const char* groupChild;
public:
    void setmembersOfGroup(const char* membersOfGroup);
    const char* getmembersOfGroup();

    void setname—hild(const char* name—hild);
    const char* getname—hild();

    void setageChild(const char* ageChild);
    const char* getageChild();

    void setgroupChild(const char* groupChild);
    const char* getgroupChild();
};

class GroupsInfo : public Groups {

};
class GroupsScore : public Groups {

};

class Employment : public Information {
private:
    const char* EmplInfo;
public:
    void setEmplInfo(const char* EmplInfo);
    const char* getEmplInfo();
};


class Small : public GroupsInfo {

};

class Middle : public GroupsInfo {

};
class High : public GroupsInfo {

};

