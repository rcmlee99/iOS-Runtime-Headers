/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@class NSMutableData, EASession, NSLock, EAAccessory;



@interface EAInputStream : NSInputStream 
{
    id _delegate;
    NSInteger _infd;
    EAAccessory *_accessory;
    EASession *_session;
    char *_readBuffer;
    NSMutableData *_inData;
    NSLock *_inDataLock;
    BOOL _isOpenCompletedEventSent;
    BOOL _hasNewBytesAvailable;
    BOOL _isAtEndEventSent;
    NSUInteger _streamStatus;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_runLoopSource;
    struct __CFFileDescriptor { } *_readCFFileDescriptor;
    struct __CFRunLoopSource { } *_readRunLoopSource;
}


- (id)initWithAccessory:(id)arg1 forSession:(id)arg2;
- (void)dealloc;
- (void)open;
- (void)close;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (NSUInteger)streamStatus;
- (id)streamError;
- (NSInteger)read:(char *)arg1 maxLength:(NSUInteger)arg2;
- (BOOL)getBuffer:(char **)arg1 length:(NSUInteger*)arg2;
- (BOOL)hasBytesAvailable;
- (void)_accessoryDidDisconnect:(id)arg1;
- (void)_performAtEndOfStreamValidation;
- (void)_streamEventTrigger;
- (void)_scheduleCallback;
- (void)_readData;

@end
