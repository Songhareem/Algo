
var Graph = () => {

    function Vertex(key) {
        this.next = null;
        this.arc = null;
        this.key = key;
        this.inTree = null;
    }

    function Arc(data, dest, capacity) {
        this.nextArc = null;
        this.destination = dest;
        this.data = data;
        this.capacity = capacity;
        this.inTree = null;
    }

    function Graph() {
        this.count = 0;
        this.first = null;
    }
}