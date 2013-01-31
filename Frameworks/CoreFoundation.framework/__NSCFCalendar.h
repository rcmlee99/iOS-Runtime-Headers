/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFCalendar : NSCalendar  {
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)initWithCalendarIdentifier:(id)arg1;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (id)retain;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (id)calendarIdentifier;
- (struct _NSRange { unsigned int x1; unsigned int x2; })maximumRangeOfUnit:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forDate:(id)arg3;
- (unsigned int)minimumDaysInFirstWeek;
- (unsigned int)firstWeekday;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned int)arg3;
- (BOOL)rangeOfUnit:(unsigned int)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4;
- (id)components:(unsigned int)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned int)arg4;
- (id)dateFromComponents:(id)arg1;
- (id)components:(unsigned int)arg1 fromDate:(id)arg2;
- (id)locale;
- (void)finalize;
- (void)setLocale:(id)arg1;
- (id)timeZone;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)setTimeZone:(id)arg1;
- (unsigned int)ordinalityOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forDate:(id)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })minimumRangeOfUnit:(unsigned int)arg1;
- (void)setGregorianStartDate:(id)arg1;
- (id)gregorianStartDate;
- (void)setMinimumDaysInFirstWeek:(unsigned int)arg1;
- (void)setFirstWeekday:(unsigned int)arg1;

@end