/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSMutableArray, NSConditionLock;



@interface VoiceChatDataQueue : NSObject 
{
    NSConditionLock *qLock;
    NSMutableArray *dataArray;
}


- (id)init;
- (void)dealloc;
- (BOOL)addToQueue:(id)arg1;
- (id)pullFromQueue;

@end
