/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class Message, MailboxUid, DAMailMessage;



@interface DAMessage : MailMessage 
{
    DAMailMessage *_DAMailMessage;
    Message *_rfc822CreatedMessage;
    MailboxUid *_mailbox;
    BOOL _haveTweakedSenderIvar;
    BOOL _haveTweakedToIvar;
    BOOL _haveTweakedCcIvar;
}


- (void)dealloc;
- (id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2;
- (id)remoteID;
- (id)mailbox;
- (id)headers;
- (unsigned long)messageFlags;
- (id)messageBody;
- (BOOL)messageData:(id*)arg1 messageSize:(NSUInteger*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (id)remoteMailboxURL;
- (id)tweakedHeaderValueForSelector:(SEL)arg1 setter:(SEL)arg2 key:(id)arg3 trackingIvar:(BOOL*)arg4;
- (id)sender;
- (id)to;
- (id)cc;
- (id)DAMailMessage;
- (NSUInteger)messageSize;

@end
