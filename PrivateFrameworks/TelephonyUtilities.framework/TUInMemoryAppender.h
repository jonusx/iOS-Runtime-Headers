/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSString, NSMutableArray, NSMutableDictionary;

@interface TUInMemoryAppender : NSObject <TUAppender> {
    NSMutableArray *_buffer;
    NSString *_cachedPrettyNameForPid;
    unsigned long long _currentCapacity;
    NSMutableDictionary *_dyldInfo;
    unsigned long long _maxCapacity;
    BOOL _shouldLogDyldInfo;
    BOOL _shouldLogSystemInfo;
}

@property BOOL shouldLogDyldInfo;
@property BOOL shouldLogSystemInfo;

- (void)dealloc;
- (void)dumpLogsToFilePath:(id)arg1;
- (void)flush;
- (id)initWithMaxCapacity:(unsigned long long)arg1;
- (void)logWithIdentifier:(id)arg1 pid:(int)arg2 date:(id)arg3 level:(int)arg4 topic:(id)arg5 text:(id)arg6 backtrace:(id)arg7;
- (void)reset;
- (void)setShouldLogDyldInfo:(BOOL)arg1;
- (void)setShouldLogSystemInfo:(BOOL)arg1;
- (BOOL)shouldLogDyldInfo;
- (BOOL)shouldLogSystemInfo;

@end