/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class NSMutableDictionary, NSMutableSet;



@interface ICSCalendar : ICSComponent 
{
    NSMutableSet *_keys;
    NSMutableDictionary *_masters;
    NSMutableDictionary *_occurrences;
    NSMutableDictionary *_timezones;
}

@property(retain) NSString *calscale;
@property NSInteger method;
@property(retain) NSString *prodid;
@property(retain) NSString *version;
@property(retain) ICSDuration *x_apple_auto_refresh;
@property(retain) ICSColor *x_apple_calendar_color;
@property(retain) NSString *x_wr_caldesc;
@property(retain) NSString *x_wr_calname;
@property(retain) NSString *x_wr_relcalid;
@property(retain) NSString *x_wr_timezone;
@property BOOL x_apple_ignore_on_restore;
@property NSInteger x_calendarserver_access;

+ (id)name;
+ (void)setDefaultProdid:(id)arg1;
+ (id)defaultProdid;
+ (NSInteger)methodFromICSString:(id)arg1;
+ (id)ICSStringFromMethod:(NSInteger)arg1;
+ (NSInteger)calendarServerAccessFromICSString:(id)arg1;
+ (id)ICSStringFromCalendarServerAccess:(NSInteger)arg1;
+ (id)calendarWithKnownTimeZones;

- (id)init;
- (void)dealloc;
- (id)calscale;
- (void)setCalscale:(id)arg1;
- (NSInteger)method;
- (void)setMethod:(NSInteger)arg1;
- (id)prodid;
- (void)setProdid:(id)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)x_apple_auto_refresh;
- (void)setX_apple_auto_refresh:(id)arg1;
- (id)x_apple_calendar_color;
- (void)setX_apple_calendar_color:(id)arg1;
- (void)setX_wr_caldesc:(id)arg1;
- (id)x_wr_caldesc;
- (id)x_wr_calname;
- (void)setX_wr_calname:(id)arg1;
- (id)x_wr_relcalid;
- (void)setX_wr_relcalid:(id)arg1;
- (id)x_wr_timezone;
- (void)setX_wr_timezone:(id)arg1;
- (id)systemTimeZoneForDate:(id)arg1;
- (id)systemCalendarForDate:(id)arg1 options:(NSInteger)arg2;
- (id)systemDateForDate:(id)arg1 options:(NSInteger)arg2;
- (void)_addTimeZonesInComponent:(id)arg1 toSet:(id)arg2;
- (void)_addTimeZonesInComponent:(id)arg1 toDictionary:(id)arg2;
- (id)_timeZonesForComponents:(id)arg1 options:(NSInteger)arg2;
- (void)_addComponent:(id)arg1;
- (id)componentKeys;
- (id)componentForKey:(id)arg1;
- (id)componentOccurrencesForKey:(id)arg1;
- (void)setComponents:(id)arg1 timeZones:(BOOL)arg2;
- (void)setComponents:(id)arg1 options:(NSInteger)arg2;
- (void)setComponents:(id)arg1;
- (void)addComponent:(id)arg1;
- (id)timeZoneForKey:(id)arg1;
- (id)_init;
- (void)fixPropertiesInheritance;
- (void)fixComponent;
- (void)fixEntities;

@end
