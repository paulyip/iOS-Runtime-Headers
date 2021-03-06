/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaQuery, NSMutableArray, NSString;

@interface MPMediaQueryLogProxy : NSObject {
    MPMediaQuery *_baseObject;
    NSString *_filePath;
    NSMutableArray *_loggedInvocations;
    MPMediaQuery *_target;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createFilePath;
- (void)dealloc;
- (void)flushLog;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (void)writeLog;

@end
