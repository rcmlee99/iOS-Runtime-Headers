/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSString;



@interface CalendarComposeRecipient : MailComposeRecipient 
{
    NSInteger _attendeeUid;
    NSString *_calAttendeeName;
}


- (id)init;
- (id)initWithRecord:(void*)arg1 identifier:(NSInteger)arg2 address:(id)arg3;
- (void)dealloc;
- (id)initWithMailComposeRecipient:(id)arg1;
- (void)setAttendeeUid:(NSInteger)arg1;
- (NSInteger)attendeeUid;
- (void)setCalAttendeeName:(id)arg1;
- (id)displayString;

@end
