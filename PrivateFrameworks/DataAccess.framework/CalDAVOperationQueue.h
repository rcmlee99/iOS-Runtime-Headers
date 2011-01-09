/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableArray, CalDAVAccount;



@interface CalDAVOperationQueue : NSObject 
{
    BOOL _stopped;
    CalDAVAccount *_account;
    NSMutableArray *_operations;
}


- (id)initWithAccount:(id)arg1;
- (void)dealloc;
- (void)insertOperation:(id)arg1;
- (void)enqueueOperation:(id)arg1;
- (void)dequeueOperation:(id)arg1;
- (void)removeOperation:(id)arg1;
- (void)completeOperation:(id)arg1;
- (void)tryOperationAgain:(id)arg1;
- (id)nextOperationNotCurrentlyRunning;
- (id)peek;
- (id)allOperations;
- (BOOL)hasOperations;
- (void)notifyListenersQueueChanged;
- (void)beginNextOperation;
- (void)stop;
- (void)start;
- (void)cancelAllOperations;
- (BOOL)isStopped;
- (BOOL)isStalled;
- (BOOL)isBusy;
- (id)account;
- (id)description;

@end
