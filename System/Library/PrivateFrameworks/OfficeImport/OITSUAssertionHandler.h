//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUAssertionHandler : NSObject
{
}

+ (int)_atomicIncrementAssertCount;	// IMP=0x000000000024e923
+ (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 isFatal:(_Bool)arg4 description:(const char *)arg5;	// IMP=0x000000000024e91d
+ (void)simulateCrashWithMessage:(id)arg1;	// IMP=0x000000000024e917
+ (void)logBacktraceThrottled;	// IMP=0x000000000024e911
+ (void)logBacktraceWithCallStackSymbols:(id)arg1;	// IMP=0x000000000024e8ad
+ (void)logBacktrace;	// IMP=0x000000000024e7b8
+ (id)p_performBlockIgnoringAssertions:(CDUnknownBlockType)arg1 onlyFatal:(_Bool)arg2;	// IMP=0x000000000024e560
+ (id)performBlockIgnoringFatalAssertions:(CDUnknownBlockType)arg1;	// IMP=0x000000000024e549
+ (id)performBlockIgnoringAssertions:(CDUnknownBlockType)arg1;	// IMP=0x000000000024e535

@end
