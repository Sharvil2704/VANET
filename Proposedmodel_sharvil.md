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
  
  - In this the platoon leader randomly selects a platoon member who is not restricted by the CA and to generate a block and the vehicle generates the hash and sends the nonce and the block to platoon leader
    
  - If no issues are found with the block after successful verification by the platoon leader then this block is sent to the entire platoon along with the POW attached
    
  - If the block does not get verified by the platoon leader than the platoon leader randomly selects another vehicle and the transaction noting failure is created and sent to the platoon
    
  - Once a block is published, it can be used to show a vehicle’s trustworthiness when they try to join another platoon.

3.  Platoon Join
   
   * This protocol is run whenever a vehicle tries  to join a platoon , considering the fact that the incoming vehicle must be in a nearby vehicle range of the platoon
   
   * A requesting vehicle sends a request to join  which includes their identification number and their generator block to the platoon leader. The platoon leader in turn verifies the information provided by it and the genesis block supplied to it by the CA.
   
   * After successful verification of the required information, it sends the vehicle requesting the Request for blockchain message to calculate  the incoming vehicle's trust score and readjust it according to it's previous transacton history.
   
   * If the vehicle trust score is less than the threshold then the platoon leader sends the accept to platoon restrictted message and publish this message in the platoon chain/

4. Intra Platoon Communication
   
   * It is used by the platoon leader to ensure wether all the vehicles are following the order correctly or not.
   
   * Every vehicle verifies that a particular command is safe or not and reports the status in form of command transaction.
   
   * After the protocol completion the trust scores are re-evaluated and if their turst scores goes below a certain threshold than they are put into restricted status and cannot perform dangerous manuvers and their movement is restricted.

5.  Platoon Leave protocol
   
   * A vehicle sends a message to the platoon leader that they want to leave the platoon and the platoon leader acknowledges it, and once the vehicle has left the sensor range than it sends a transaction to the platoon that the vehicle is no longer in the range.
   
   * The leaving vehicle deletes any unpuplished transactions from it's history for better memory usage.
    
