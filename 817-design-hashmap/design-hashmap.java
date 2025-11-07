class MyHashMap {
    private List<int[]> list;

    public MyHashMap() {
        list = new ArrayList<>();
    }

    public void put(int key, int value) {
        // Check if key exists, update if found
        for (int[] pair : list) {
            if (pair[0] == key) {
                pair[1] = value;
                return;
            }
        }
        // Else add new key-value pair
        list.add(new int[]{key, value});
    }

    public int get(int key) {
        for (int[] pair : list) {
            if (pair[0] == key) {
                return pair[1];
            }
        }
        return -1; // Not found
    }

    public void remove(int key) {
        Iterator<int[]> it = list.iterator();
        while (it.hasNext()) {
            int[] pair = it.next();
            if (pair[0] == key) {
                it.remove();
                return;
            }
        }
    }
}


/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap obj = new MyHashMap();
 * obj.put(key,value);
 * int param_2 = obj.get(key);
 * obj.remove(key);
 */