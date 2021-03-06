//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LocationSupport/CLTimerScheduler-Protocol.h>

@class CLTimer;
@protocol OS_dispatch_source;

@interface CLDispatchTimerScheduler : NSObject <CLTimerScheduler>
{
    CLTimer *timer;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_source;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000012f81
@property(retain, nonatomic) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property(nonatomic) __weak CLTimer *timer; // @synthesize timer;
- (void)reflectNextFireDelay:(double)arg1 fireInterval:(double)arg2;	// IMP=0x0000000000012e71
- (void)dealloc;	// IMP=0x0000000000012e20
- (id)initWithDispatchSilo:(id)arg1;	// IMP=0x0000000000012b9d

@end

