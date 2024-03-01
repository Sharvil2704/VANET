# GENERIC MODEL FOR VANETS USING PCCP-AS

PCCP-AS will extend the CL-PKC system architecture.

### Overview

    The CL-PKC system architecture is largely similar to the basic VANET model with the addition of a KGC (Key Generation Center) as a part of the TA and AS's (Application Servers).
    
    Instead of relying on certificates to verify the authenticity of public keys that are shared between members of the network (vehicles and infrastructure), CL-PKC instead partially aids in the generation of the keypair itself. This combined with the fact that some of the KCG's ECC parameters needed for verification are public and known to the verifiers, along with the ID of the vehicle (which is transmitted along with the message), results in a verification process which is much less computationally expensive than the use of certificates. This has the additional benefit of conditional privacy being maintained without the user having to hand over its private key to the TA for signing.

### Technical Architecture:

1. Setup:
    KGC decides variables *params* and *msk*, keeping *msk* secret
    and publishing *params*.

2. Partial private keygen:
    KGC uses these two variables along with a third ID variable
    (the identity of the vehicle) to generate the *PPK*. This
    PPK is shared with the user securely.

3. User secret generation:
    The user with id: ID generates a secret.

4. Public-Private keypair generation:
    The user uses *params* and *PPK* to generate its pub-priv
    keypair.

5. Message signature:
    When signing a message, the user uses the *params*, it's *ID*,
    and it's *private key* to sign the message.

6. Signature verification:
    When verifying, the message, signature, message signer's ID,
    their public key, and the initial params are used to verify
    the authenticity of the message.
