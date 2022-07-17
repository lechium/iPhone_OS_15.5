//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface BackgroundTaskRequest : NSObject
{
    NSObject<OS_xpc_object> *_job;	// 8 = 0x8
    NSString *_requestIdentifier;	// 16 = 0x10
}

+ (id)xpcUpdatesCheck;	// IMP=0x00400000000c34d4
+ (id)xpcActivityWithDuration:(long long)arg1;	// IMP=0x00100000000c34bc
+ (id)xpcMaintenanceActivityWithDuration:(id)arg1 allowCellular:(_Bool)arg2 allowBattery:(_Bool)arg3;	// IMP=0x00100000000c34a4
+ (id)xpcMaintenanceActivityWithDuration:(id)arg1;	// IMP=0x00100000000c348d
+ (id)xpcActivityWithDuration:(id)arg1 gracePeriod:(long long)arg2;	// IMP=0x00100000000c3475
+ (id)usageCheckJob;	// IMP=0x00100000000c345d
+ (id)updateCheckJobWithDate:(id)arg1 allowsCellular:(_Bool)arg2 requireScreenSleep:(_Bool)arg3 gracePeriod:(_Bool)arg4;	// IMP=0x00100000000c3445
+ (id)requestCheckInWithIdentifier:(id)arg1;	// IMP=0x00100000000c33d4
+ (id)cacheDeleteUpdatJobWithInterval:(long long)arg1;	// IMP=0x00100000000c33bc
- (void).cxx_destruct;	// IMP=0x00200000000c3513
@property(copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
- (id)copyBackgroundTaskAgentJob;	// IMP=0x00100000000c34ec
- (id)initWithBackgroundTaskAgentJob:(id)arg1;	// IMP=0x00100000000c3351
- (id)init;	// IMP=0x00100000000c32fc

@end
