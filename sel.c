Import java.util.*; 
class library 
Protected Storing ISDN, category;
Void read() 
{ Scanner s= new Scanner(System.in); 
 System.out.println(Enter the details of books:);
 System.out.println("ISBN");
 15BN=S.next();
 System.out.printen (category:");
 category=s.next()) 
 Void display() 
} 
System.out.println("Details of Books: ");
System.out.println("ISBN: "+580; 
System.out.println("Category:" + category);
}
}
Class Bookinfo Extends liberary
{
Protected string book name, author, Publishers
{
Void read book Info) Void
{
Scanner se=new Scanner(System.in);

System.out.println("Enter book name:"

book name-Sconext();

System-out-Perintln("Enter authet name");

author=s.next(),

System.out.println("Enter Publishes: ");

Pub Seinext);

}

Void disp Book InfoC)
{
System-out-Printen (Book name: " + backname) ;

System.out.println(" Author names:"+author),

System.out.println(" Publisher: "+ Publishe) ;
}
}
}
Class Book Price extends BookInfo
{
double Perice;

String & Purchase;

Void cread Price)
{
 Scanner $1=new Scanner(System.in);

System.out.println("Perice:");

Price=51.next Double();

System.out.println("Date of Purchase:");

d purchase-si.next();

}

Void display Price();

System.out.println("Porice:" + Price); System.out System.out.println(Date

Date of Purchase:"+

d Purchase);

}

Public class Library Info

Public static void main(String args[]) Public

double Lotal Perice;

int nam

Scannel $2=new Scanner(System.in);

System.out.println("Enter the number of books");

Rum. 52.nextInt();

BookPrice[] books = new book Perice (num);

for(i=0;i<num; i++)

book [i] = new Book Price();

books [i] cread book()%

book [i]-read();

books [i].cread Porice();
books[i].display();

book (i].display Porice(); total Price book [i]. Perice;

System.out.printdn("Total Price of books

:" + total Porpce);

}

}
