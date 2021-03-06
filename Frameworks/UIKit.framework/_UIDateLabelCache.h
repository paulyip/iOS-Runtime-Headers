/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIFont;

@interface _UIDateLabelCache : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    } _amSize;
    NSString *_amString;
    struct __CFCalendar { } *_calendar;
    struct __CFDictionary { } *_dateSizeCache;
    struct __CFDictionary { } *_dateSizeCacheForForceTimeOnly;
    struct __CFDictionary { } *_dateStringCache;
    struct __CFDictionary { } *_dateStringCacheForForceTimeOnly;
    BOOL _designatorValid;
    double _noon;
    } _pmSize;
    NSString *_pmString;
    double _previousWeek;
    struct __CFDateFormatter { } *_shortDateFormatter;
    struct __CFDateFormatter { } *_shortTimeFormatter;
    BOOL _timeDesignatorAppearsBeforeTime;
    UIFont *_timeDesignatorFont;
    struct __CFDateFormatter { } *_timeFormatter;
    double _today;
    double _tomorrow;
    BOOL _use24HourTime;
}

- (void)_loadDesignatorStrings;
- (void)_localeDidChange;
- (void)_localeWillChange;
- (void)_significantTimeChange;
- (BOOL)_timeDesignatorAppearsBeforeTime;
- (void)_updateTodayAndNoon;
- (struct CGSize { float x1; float x2; })amSize;
- (id)amString;
- (struct __CFDate { }*)createDateKeyForAbsoluteTime:(double)arg1 forceTimeOnly:(BOOL)arg2;
- (id)dateStringForAbsoluteTime:(double)arg1 dateKey:(struct __CFDate { }*)arg2 forceTimeOnly:(BOOL)arg3;
- (void)dealloc;
- (id)init;
- (void)invalidateDateCache;
- (void)invalidateDateSizeCache;
- (struct CGSize { float x1; float x2; })mainTimeSizeForDateKey:(struct __CFDate { }*)arg1 forceTimeOnly:(BOOL)arg2;
- (double)noonAbsoluteTime;
- (struct CGSize { float x1; float x2; })pmSize;
- (id)pmString;
- (void)setMainTimeSize:(struct CGSize { float x1; float x2; })arg1 forDateKey:(struct __CFDate { }*)arg2 forceTimeOnly:(BOOL)arg3;
- (BOOL)timeDesignatorAppearsBeforeTime;
- (id)timeDesignatorFont;
- (id)timeDesignatorForAbsoluteTime:(double)arg1 forceTimeOnly:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })timeDesignatorSizeForAbsoluteTime:(double)arg1 forceTimeOnly:(BOOL)arg2 forFont:(id)arg3;
- (double)todayAbsoluteTime;
- (BOOL)use24HourTime;

@end
