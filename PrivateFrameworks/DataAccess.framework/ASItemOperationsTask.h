/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSArray, ASMailMessage;



@interface ASItemOperationsTask : ASTask 
{
    NSArray *_commands;
    NSInteger _numReplacedItems;
    NSInteger _bodyTruncationBytes;
    NSInteger _mimeSupport;
    ASMailMessage *_streamingMailMessage;
}


- (NSInteger)commandCode;
- (void)dealloc;
- (id)init;
- (NSInteger)mimeSupport;
- (void)setMIMESupport:(NSInteger)arg1;
- (NSInteger)bodyType;
- (void)setBodyTruncationBytes:(NSInteger)arg1;
- (id)commands;
- (void)setCommands:(id)arg1;
- (NSInteger)_mimeSupportCode;
- (id)requestBody;
- (NSInteger)handleStreamOperation:(NSInteger)arg1 forCodePage:(NSInteger)arg2 tag:(NSInteger)arg3 withParentItem:(id)arg4 withData:(char *)arg5 dataLength:(NSInteger)arg6;
- (id)replacementObjectForEmailItem:(id)arg1;
- (BOOL)processContext:(id)arg1;
- (void)finishWithError:(id)arg1;
- (NSInteger)taskStatusForExchangeStatus:(NSInteger)arg1;
- (id)streamingMailMessage;
- (void)setStreamingMailMessage:(id)arg1;

@end
