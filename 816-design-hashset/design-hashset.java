class MyHashSet {
    private List<Integer> keys;
    public MyHashSet() {
         keys = new ArrayList<>();

    }
    
    public void add(int key) {
        if (!keys.contains(key)) {
            keys.add(key);
        }
    }
    
    public void remove(int key) {
         keys.remove(Integer.valueOf(key));
    }
    
    public boolean contains(int key) {
        return keys.contains(key);
    }
}

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.add(key);
 * obj.remove(key);
 * boolean param_3 = obj.contains(key);
 */