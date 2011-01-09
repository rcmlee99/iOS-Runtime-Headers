/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString, CKSMSMessage;



@interface CKSMSMessageDelivery : NSObject 
{
    NSString *_text;
    NSInteger _group;
    NSInteger _associationID;
    CKSMSMessage *_message;
    unsigned int _isSending : 1;
}

@property CKSMSMessage *message; /* unknown property attribute: V_message */


- (id)init;
- (void)dealloc;
- (float)progress;
- (BOOL)isSending;
- (void)_finishedSendingMessages;
- (void)_notifyDelegatesOfMessageDelivery:(struct __CKSMSRecord { }*)arg1 success:(BOOL)arg2;
- (void)_sentMessage:(struct __CKSMSRecord { }*)arg1;
- (void)_errorSendingMessage:(struct __CKSMSRecord { }*)arg1;
- (void)sendOutboundMessage:(struct __CKSMSRecord { }*)arg1;
- (void)redeliverPartiallyFailedMessage;
- (void)sendMessage;
- (struct { NSInteger x1; NSInteger x2; })_sendMessage:(struct __CKSMSRecord { }*)arg1;
- (void)_fakeSendMessage:(struct __CKSMSRecord { }*)arg1 afterDelay:(double)arg2;
- (id)message;
- (void)setMessage:(id)arg1;

@end
