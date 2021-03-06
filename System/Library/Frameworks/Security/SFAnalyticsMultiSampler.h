//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface SFAnalyticsMultiSampler : NSObject
{
    double _samplingInterval;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    CDUnknownBlockType _block;	// 32 = 0x20
    int _notificationToken;	// 40 = 0x28
    Class _clientClass;	// 48 = 0x30
    _Bool _oncePerReport;	// 56 = 0x38
    _Bool _activeTimer;	// 57 = 0x39
}

- (void).cxx_destruct;	// IMP=0x000000000000c7fe
@property(readonly, nonatomic) _Bool oncePerReport; // @synthesize oncePerReport=_oncePerReport;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;	// IMP=0x000000000000c7ad
- (void)resumeSampling;	// IMP=0x000000000000c79b
- (void)pauseSampling;	// IMP=0x000000000000c761
- (id)sampleNow;	// IMP=0x000000000000c6ed
@property(nonatomic) double samplingInterval; // @synthesize samplingInterval=_samplingInterval;
- (void)setupPeriodicTimer;	// IMP=0x000000000000c49b
- (void)setupOnceTimer;	// IMP=0x000000000000c3b9
- (void)newTimer;	// IMP=0x000000000000c35a
- (id)initWithName:(id)arg1 interval:(double)arg2 block:(CDUnknownBlockType)arg3 clientClass:(Class)arg4;	// IMP=0x000000000000c13c

@end

