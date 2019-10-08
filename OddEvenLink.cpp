#include<iostream>
using namespace std;
class Node
{
	private: int data;
		 Node* next;
	public:
		 void SetNext(Node* temp)
		 {
			 next=temp;
		 }
		 Node* GetNext()
		 {
			 return next;
		 }
		 void SetData(int ele)
		 {
			 data=ele;

		 }
		 int GetData()
		 {
			 return data;
		 }
};
class Link
{
	private:Node* head;
		Node* tail;
		int count;
	public:
		Link()
		{head=NULL;
	         tail=NULL;
		 count=0;
		}
		
		/*void OddDisplay()
		{int i; Node* temp=head;
			if(count%2==0)
		        {
			for(i=1;i<=(count/2);i++)
			{
				while(temp!=NULL)
				{
				i=temp->GetData();
				cout<<i<<"-->";
				temp=temp->GetNext()->GetNext();
				}
			}
			}
			
			if(count%2==1)
		        {
			for(i=1;i<=((count/2)+1);i++)
			{
				while(temp->GetNext()!=tail)
				{
				i=temp->GetData();
				cout<<i<<"-->";
				temp=temp->GetNext()->GetNext();
				}
			}
			}
		}*/
		void EvenDisplay()
		{	int e;
			head=head->GetNext();
			Node *temp=head;
			if((count%2)==0)
			{	while(temp->GetNext()!=tail || temp!=nullptr)
				
			{
				e=temp->GetData();
				cout<<e<<"-->";
				temp=temp->GetNext()->GetNext();
			}
			//	count=count/2;
			
			}
			cout<<temp->GetData();
		}
		void AddAtBegin(int ele)
		{
			if(head==NULL)
			{
			Node* temp=new Node;
			temp->SetData(ele);
			        temp->SetNext(NULL);
				head=tail=temp;
				count++;

			}
			else
			{
			Node* temp=new Node;
			temp->SetData(ele);
				temp->SetNext(head);
				head=temp;
				count++;
			}

		}


};
int main()
{
	int n,ch,d;
	Link ll;
	do
	{
		cout<<"\n1.Enter data from begining."<<endl;
		cout<<"2.Display odd nodes."<<endl;
		cout<<"3.Display even node."<<endl;
		cout<<"4.Exit"<<endl;
		cout<<"\n\nEnter choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1: {
					cout<<"\nEnter element: ";
					cin>>n;
					ll.AddAtBegin(n);
					break;
				}
			case 2:{
				       cout<<"\nOdd Nodes are having: ";
					// ll.OddDisplay();
					 break;
			       }
			case 3:{
				       cout<<"\nEven Nodes are elements: ";
				       ll.EvenDisplay();
				       break;
			       }

		}
	}while(ch!=4);
	return 0;

}

