class Product {
    constructor(name, price) {
        this.name = name;
        this.price = price;
    }
}

class Cereal extends Product {
    constructor(name, price, flavour) {
        super(name, price);
        this.flavour = flavour;

    }
}

const cornflakes = new Cereal("Cornflakes", 12, "original");
console.log(cornflakes);
