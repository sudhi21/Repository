// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
        
        SinglyLinkedListNode* temp1;
        SinglyLinkedListNode* temp2;
        SinglyLinkedListNode* result;
        SinglyLinkedListNode* temp3;
    
        temp1 = head1;
        temp2 = head2;
        temp3 = result;
    
       if (temp1 == NULL  && temp2 == NULL) {
           
           return head1;
       }
    
       else if(temp1 == NULL) {
            
            return head2;
            
        }
      
       else if(temp2 == NULL) {
           
           return head1;
           
       }
       
       else {
           while(temp1 != NULL && temp2 != NULL) {
            if(temp1->data < temp2->data) {
                
                result = temp1;
                result = result->next;
                temp1 = temp1->next;
                
            }
           
           else if(temp2->data < temp1->data) {
               
                result = temp2;
                result = result->next;
                temp2 = temp2->next;
               
           }
           
           else {
               
               result = temp1;
               result = result->next;
               temp1 = temp1->next;
               temp2 = temp2->next;
               
               
               
           }    
           
           
           
           }
           
           if(temp2 == NULL) {
               
               while(temp1 != NULL) {
                   
                   result = temp1;
                   result = result->next;
                   temp1=temp1->next;
                   
               }
               
               
           }
           
           if(temp1 == NULL) {
               
               while(temp2 != NULL) {
                   
                   result = temp2;
                   result = result->next;
                   temp2 = temp2->next;
                   
               }
               
               
               
           }
           
       }
        
          return temp3;

}
