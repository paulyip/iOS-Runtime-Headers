/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface VKAnimation : NSObject {
    struct { 
        unsigned int runsForever : 1; 
        unsigned int startTimestampSet : 1; 
        unsigned int pauseTimestampSet : 1; 
        unsigned int completed : 1; 
        unsigned int state : 2; 
    id _completionHandler;
    double _duration;
    } _flags;
    NSString *_name;
    double _pauseTimestamp;
    int _priority;
    double _startTimestamp;
    id _stepHandler;
    id _timingFunction;
}

@property double duration;
@property(readonly) int priority;
@property(readonly) BOOL running;
@property BOOL runsForever;
@property(copy) id timingFunction;

- (void)_stopAnimation:(BOOL)arg1;
- (void)dealloc;
- (id)description;
- (double)duration;
- (id)init;
- (id)initWithDuration:(double)arg1 name:(id)arg2;
- (id)initWithDuration:(double)arg1 priority:(int)arg2 name:(id)arg3;
- (id)initWithDuration:(double)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithPriority:(int)arg1 name:(id)arg2;
- (id)initWithPriority:(int)arg1;
- (void)onTimerFired:(double)arg1;
- (void)pause;
- (int)priority;
- (void)resume;
- (BOOL)running;
- (BOOL)runsForever;
- (void)setDuration:(double)arg1;
- (void)setRunsForever:(BOOL)arg1;
- (void)setTimingFunction:(id)arg1;
- (void)startWithStepHandler:(id)arg1 completionHandler:(id)arg2;
- (void)stop;
- (id)timingFunction;

@end
