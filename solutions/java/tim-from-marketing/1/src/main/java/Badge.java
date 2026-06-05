class Badge {
    public String print(Integer id, String name, String department) {
        String fId = "";
        String fDepartment = "";
        if (id != null) {
            fId = String.format("[%d] - ", id);
        }
        if (department != null) {
            fDepartment = String.format(" - %s", department.toUpperCase());
        } else {
            fDepartment = " - OWNER";
        }
        return fId + name + fDepartment;
    }
}
