var deleteDuplicates = function(head) {
    let start = head;
    let set = new Set();
    let prev;
    while (head) {
        if(set.has(head.val)) {
            prev.next = head.next;
            head = head.next;
        } else {
            set.add(head.val);
            prev = head;
            head = head.next;
        }
    }
    return start;
};

function ListNode(val) {
    this.val = val;
    this.next = null;
}

// linked list: 1 -> 2 -> 2 -> 3 -> 3
let head = new ListNode(1);
head.next = new ListNode(2);
head.next.next = new ListNode(2);
head.next.next.next = new ListNode(3);
head.next.next.next.next = new ListNode(3);

// Call the function to delete duplicates
let result = deleteDuplicates(head);

// Output the result
while (result) {
    console.log(result.val);
    result = result.next;
}


