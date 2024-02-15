#### The proposed scheme requires various protocols to reach the specific goal and the proper functioning of the model

There are mainly three kind of transactions and below mentioned protocols use one of them to perform their operations

1. Command Transaction
  
  - A command transaction is used
    to send commands to the platoon as well as store these commands. This transaction includes a signature, timestamp, and command.
    
  - This transaction type is used when determining whether a platoon leader is a bad actor. This command transaction is referenced in the evaluation transaction and can be used to note that a platoon leader issued an invalid or inappropriate command.
    
2. Evaluation Transaction
  
  - An evaluation transaction is used to send evaluations of other's physical actions based on a command transaction. It includes the evaluator's signature, the trust score, a timestamp, the evaluated vehicle ID, and the evaluated command.
    
  - This kind of transaction can be used to reassign the turst scores and also help perform manual audit by the CA.
    
3. Platoon Join Transaction
  
  - A join transaction is used to transcribe a platoon join event.
    
  - The join transaction includes the joining vehicle’s certificate, a hash of their blockchain, a time stamp, and the joining platoon’s leader.
    
  - It describes essential information such as that the event was successful and met all the relevant requirements
    

The protcols required are Car Registration, Block Creation, Join Platoon , Inner Platoon and Leave platoon

1. Car Registeration
  
  - This protocol ensures the registry of vehicle from the relevant certifying autority , thus ensuring it's participation in the system.
    
  - A genesis block is generated upon the succesful physical verification of vehicle and the owner , also they create a key pair so that the vehicle can sign all the forthcoming transactions .
    
  - They both log the information received into the database and an initial trust score is set up
    
  - figure 5.5
    
2. Platoon Block Creation
   --- adding right now---
