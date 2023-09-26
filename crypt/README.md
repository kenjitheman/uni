"Encryption" task

- The first task at school for a young cipher was to develop his own cipher. It is necessary to write a program (or several programs, each for its own encryption method) that allows you to encrypt messages in the specified ways and decrypt them.
- At the input, the program receives a message with a length of no more than 100 elements and the necessary encryption parameters (if any), then the encrypted message is displayed on the screen.
- Encryption methods proposed by young encryptors:
- Each element of the incoming message is replaced by its difference with the first element (we subtract the value of the first element from the current one, the first element does not change).
- An encrypted message is formed by mirroring relative to the middle of the incoming message.
- For a message of length N, a key containing no more than N numbers is specified. All numbers in the key must be different. Each number of the key specifies the number of the element in the incoming message to be duplicated.
- For each element of an incoming message, the following is recorded: the element itself, how many times it occurs in the message, and the positions at which it occurs.
- Remarks on the implementation of the task.
- An incoming message can have different representations: a set of integers; character set (string). If you can, implement both options.
- The resulting message can have a numeric or symbolic representation. Define the presentation method yourself, taking into account the features of the encryption method.

*An additional task is to decrypt encrypted messages.