/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class YahooAccount;



@interface YahooDeliveryAccount : DeliveryAccount 
{
    YahooAccount *_yahooAccount;
}


- (Class)deliveryClass;
- (id)preferredAuthScheme;
- (id)yahooAccount;
- (void)setYahooAccount:(id)arg1;
- (id)mailAccountIfAvailable;
- (id)displayHostname;
- (void)dealloc;

@end
