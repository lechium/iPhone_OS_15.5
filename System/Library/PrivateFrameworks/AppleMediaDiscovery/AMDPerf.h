//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AMDPerf : NSObject
{
}

+ (void)logWithLevel:(int)arg1 andFormat:(id)arg2;	// IMP=0x00000000000a32c0
+ (void)sampleForKey:(id)arg1;	// IMP=0x00000000000a3040
+ (id)generatePerformanceDict;	// IMP=0x00000000000a2900
+ (void)endMonitoringEvent:(id)arg1;	// IMP=0x00000000000a24b0
+ (void)startMonitoringEvent:(id)arg1;	// IMP=0x00000000000a2260
+ (void)setVerbosity:(BOOL)arg1;	// IMP=0x00000000000a21e0
+ (void)enable:(_Bool)arg1;	// IMP=0x00000000000a2150
+ (id)getContainer;	// IMP=0x00000000000a1fc0
+ (void)provision;	// IMP=0x00000000000a1f00

@end

