/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSOperationQueue;



@interface ISOperationQueue : NSObject 
{
    NSOperationQueue *_queue;
}

+ (BOOL)isActive;
+ (id)mainQueue;

- (id)init;
- (void)dealloc;
- (void)addOperation:(id)arg1;
- (void)cancelAllOperations;
- (id)operations;
- (void)setMaxConcurrentOperationCount:(NSInteger)arg1;
- (void)setSuspended:(BOOL)arg1;

@end
