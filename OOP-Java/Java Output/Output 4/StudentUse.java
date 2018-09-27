class Student{
    String name;
    int rollNo;
    Student(int num){
    rollNo = num;
    }
    public void print(){
    System.out.print(name + " " + rollNo + " ");
    }
}

public class StudentUse {
    public static void main(String[] args) {
    Student s = new Student(12);
    s.print();
    }
}

/*
   null 12

   Constructor is called when an object is created, here when we create a Student
   object coressponding student object is created and rollNo is assigned to 12,
   whereas name is assigned null (as default value for String data member is null).
   So output is null 12
 */
