/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;



@interface LDAPSearchSettings : NSObject 
{
    NSString *_searchDescription;
    NSString *_searchBase;
    NSInteger _scope;
}

@property NSInteger scope; /* unknown property attribute: V_scope */
@property(retain) NSString *searchBase; /* unknown property attribute: V_searchBase */
@property(retain) NSString *searchDescription; /* unknown property attribute: V_searchDescription */


- (void)dealloc;
- (id)initWithSettingsDict:(id)arg1;
- (id)settingsDict;
- (BOOL)hasSameScopeAndBaseAsOther:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (NSInteger)scope;
- (void)setScope:(NSInteger)arg1;
- (id)searchBase;
- (void)setSearchBase:(id)arg1;
- (id)searchDescription;
- (void)setSearchDescription:(id)arg1;

@end
