# **Related Works to "A Blockchain-based Dynamic Group Key Agreement Protocol for Secure Vehicular Communication"**

**1. Decentralized Authentication and Dynamic Group Key Agreement Protocol:**

- Authors: Xiaofeng Wang et al.
- Proposed a blockchain-based protocol for authentication and group key agreement, aiming to reduce computation and communication costs.
- Leverages one-time signature and blind signature techniques for privacy-preserving authentication.
- Employs light-weight neighbor authentication instead of full pairwise authentication for efficiency.

**2. Blockchain-based Group Key Agreement Protocol for Internet of Vehicles:**

- Authors: Lei Zhang et al.
- Presents an asymmetric group key agreement protocol using blockchain for the Internet of Vehicles (IoV).
- Introduces a group controller to manage key updates and reduce communication overhead.
- Utilizes ring signatures for group key generation and signature aggregation for efficient verification.

**3. Blockchain-based Partial Group Key Agreement Protocol for Intelligent Transportation Systems:**

- Authors: Zhenzhen Li et al.
- Proposes a protocol for partial group key agreement, enabling efficient key updates for dynamic groups.
- Employs certificate revocation lists on the blockchain to manage compromised nodes.
- Optimizes communication costs by sending group key updates only to relevant vehicles.

**4. A Secure and Efficient Lightweight Group Key Agreement Protocol for VANETs:**

- Authors: Jiashen Li et al.
- Focuses on designing a lightweight protocol for resource-constrained vehicular nodes.
- Utilizes a pre-distributed key scheme and pairwise key establishment for initial group key setup.
- Leverages a one-way chain function for efficient key updates without relying on a central authority.

**5. Secure and Scalable Multi-layer Key Management for Decentralized VANETs:**

- Authors: Xiaofeng Wang et al.
- Investigates a multi-layer key management approach for decentralized VANETs using blockchain.
- Proposes a hybrid key architecture with group keys and individual pairwise keys for different communication scenarios.
- Employs a hierarchical blockchain structure for efficient key management and scalability.

**Additionally:**

- Recent advancements in blockchain scalability solutions like sharding and Byzantine Fault Tolerance (BFT) protocols, which can further enhance the efficiency and robustness of blockchain-based protocols for vehicular communication.
- Related Works to **BCPPA** **(Blockchain Conditional Privacy-Preserving Authentication)** -
    - The concept of CPPA was proposed by Raya and Hubaux to address security and privacy concerns in VANETs. They also presented a concrete CPPA protocol using anonymous certificates, which can be realized using a modified PKI. That is, a large number of public/private key pairs and corresponding certificates are pre-loaded into vehicles’ OBUs to achieve anonymous authentication (hiding the vehicle’s real identity). When the vehicle wishes to share its traffic status, it should randomly choose a public/private key pair for message authentication via a signature. This will, however, result in significant storage costs (i.e. storing keys and certificates) for both vehicles and the relevant authority, as well as incurring significant cost to perform revocation of keys and certificates. To mitigate the above deficiencies, Lu et al. introduced a novel CPPA protocol via RSU-based anonymous certificates.
    - When the vehicle drives to an area near to a RSU, it will obtain a temporary anonymous certificate for authentication. Although one can achieve conditional privacy by frequently
    requesting for new anonymous certificates, signature signing and verification largely rely on online RSUs. This is inefficient in VANETs. Similarly, the CPPA protocols presented
    by Freudiger et al. and Zhang et al. incur significant storage cost for certificates in both vehicles and RSUs. In fact, one can observe from the literature a common limitation in existing CPPA protocols is key/certificate management complexity. Thus, there have been attempts to design ID-based CPPA protocols, such as those using ID-based signature, software-based solution, pseudo- ID-based solutions, etc. All these protocols either focus on improving some existing solutions to achieve required security requirements or improving the efficiency of CPPA to support VANET applications.
    - However, most of these protocols either rely on an ideal hardware or are not suitable for multi-cloud environment. For solving the former challenge, Zhang et al. proposed a Chinese Remainder Theorem-based CPPA Scheme and Zhang et al. constructed a new CPPA scheme using multiple trusted authority one-time identity-based aggregate signature, both of which only require realistic tamper-proof devices. As the latter one, Cui et al. designed a robust and extensible CPPA protocol that can meet the increasing diversified service needs in VANETs. Nevertheless, there still exists one common intractability of revoking vehicles’ private keys in these ID-based solutions, which is an area that is relatively understudied.
    Concurrently, there are several Blockchain-based CPPA (BCPPA) protocols have been proposed to solve those drawbacks existing in PKI-based solutions such as non-transparency of trusted authorities and heavy workload of revoking certificates. For example, Lu et al. integrated blockchain and Merkle Patricia Tree to propose a novel BCPPA protocol with privacy protection and efficient certificate revocation, but it requires frequent interactions between vehicles and certificate authority to generate anonymous certificates. Zheng et al. adopted pseudonym technology to design a ID-based BCPPA protocol with traceable anonymity, but which is faced with the requirement of ideal hardware and cannot resist against compromised certificate authority.