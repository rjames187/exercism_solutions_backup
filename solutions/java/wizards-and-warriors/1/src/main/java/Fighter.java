class Fighter {

    boolean isVulnerable() {
        return true;
    }

    int getDamagePoints(Fighter fighter) {
        return 1;
    }
}

class Warrior extends Fighter {

    public String toString() {
        return "Fighter is a Warrior";
    }

    public boolean isVulnerable() {
        return false;
    }

    public int getDamagePoints(Fighter fighter) {
        if (fighter.isVulnerable()) {
            return 10;
        } else {
            return 6;
        }
    }
}

class Wizard extends Fighter {

    boolean hasSpell = false;
    
    public String toString() {
        return "Fighter is a Wizard";
    }

    public void prepareSpell() {
        this.hasSpell = true;
    }

    public boolean isVulnerable() {
        return !this.hasSpell;
    }

    public int getDamagePoints(Fighter fighter) {
        if (this.hasSpell) {
            return 12;
        } else {
            return 3;
        }
    }
}
