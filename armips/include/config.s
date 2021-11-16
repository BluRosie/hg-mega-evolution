// all of the current configurations for this project.  each is explained in a comment.

// START_ADDRESS defines the file address within the synthetic overlay where you would like to place all of the code that this project uses.  this is largely the repointed tables that the code uses.
// if START_ADDRESS is 0x10000, then the tables will be inserted at address 0x10000 of the synthetic overlay
START_ADDRESS equ 0x10000

// FAIRY_TYPE_IMPLEMENTED defines whether or not the fairy type has been implemented as type 9 or not.  it will be replaced with TYPE_NORMAL if the following is 0, 1 if the fairy type has been implemented
FAIRY_TYPE_IMPLEMENTED equ 0
