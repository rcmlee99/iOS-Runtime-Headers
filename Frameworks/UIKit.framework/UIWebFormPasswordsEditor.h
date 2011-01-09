/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSMutableDictionary, NSDictionary;



@interface UIWebFormPasswordsEditor : NSObject 
{
    NSDictionary *_credentialsByProtectionSpace;
    NSMutableArray *_flattenedCredentials;
    NSMutableDictionary *_credentialToProtectionSpaceMap;
    BOOL _ignoreNotifications;
}

+ (id)sharedPasswordsEditor;

- (id)protectionSpaceForCredential:(id)arg1;
- (id)addressStringForCredential:(id)arg1;
- (void)resetCredentials;
- (void)credentialsChanged:(id)arg1;
- (void)startMonitoringCredentials;
- (void)stopMonitoringCredentials;
- (void)dealloc;
- (void)removeSelectedItems:(id)arg1;
- (void)removeAll;

@end
