/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MailMessageLibrary, DAMessageStore, ActivityMonitor, DAMailbox, MFError;



@interface DAMSBasicConsumer : BufferedQueue 
{
    DAMailbox *mailbox;
    DAMessageStore *store;
    MailMessageLibrary *library;
    ActivityMonitor *monitor;
    NSInteger numNewMessages;
    MFError *error;
}

@property(retain) MFError *error; /* unknown property attribute: Verror */
@property(retain) ActivityMonitor *monitor; /* unknown property attribute: Vmonitor */


- (id)init;
- (void)dealloc;
- (id)error;
- (void)setError:(id)arg1;
- (id)monitor;
- (void)setMonitor:(id)arg1;

@end
