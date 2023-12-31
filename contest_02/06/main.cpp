Student make_student(std::string d) {
    Student result;

    bool started_group = false;
    for (int i = 0; i < d.size(); i++) {
        char c = d.at(i);
        if (started_group) {
            result.group.append(1,c);
        } else if (c==';') {
            started_group = true;
        } else {
            result.name.append(1,c);
        }
    }

    return result;
}

bool is_upper(Student x, Student y) {
    if (x.group < y.group) {
        return true;
    } else if (x.group == y.group) {
        return x.name < y.name;
    }
    return false;
}

void print(std::vector<Student> students) {
    if (students.size() == 0) {
        std::cout << "Empty list!" << std::endl;
        return;
    }

    std::string prev = "";
    for (auto& s : students) {
        if (s.group != prev) {
            prev = s.group;
            std::cout << s.group << std::endl;
        }
        std::cout << "- " << s.name << std::endl;
    }
}
