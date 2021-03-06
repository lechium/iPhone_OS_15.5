//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;

@interface CKUploadRequestManagerResponseActionThrottler : NSObject
{
    double _throttlePeriod;	// 8 = 0x8
    long long _minimumThrottleCount;	// 16 = 0x10
    double _maximumThrottleTime;	// 24 = 0x18
    double _minimumRetryTime;	// 32 = 0x20
    NSSet *_actionsToThrottle;	// 40 = 0x28
    NSMutableDictionary *_responseActionToMetadata;	// 48 = 0x30
}

+ (double)currentTime;	// IMP=0x000000000008dc0f
+ (void)sleep:(double)arg1;	// IMP=0x000000000008dbf8
- (void).cxx_destruct;	// IMP=0x000000000008e258
@property(retain, nonatomic) NSMutableDictionary *responseActionToMetadata; // @synthesize responseActionToMetadata=_responseActionToMetadata;
@property(copy, nonatomic) NSSet *actionsToThrottle; // @synthesize actionsToThrottle=_actionsToThrottle;
@property(nonatomic) double minimumRetryTime; // @synthesize minimumRetryTime=_minimumRetryTime;
@property(nonatomic) double maximumThrottleTime; // @synthesize maximumThrottleTime=_maximumThrottleTime;
@property(nonatomic) long long minimumThrottleCount; // @synthesize minimumThrottleCount=_minimumThrottleCount;
@property(nonatomic) double throttlePeriod; // @synthesize throttlePeriod=_throttlePeriod;
- (double)throttleTimeForCount:(long long)arg1 isRetry:(_Bool)arg2;	// IMP=0x000000000008e108
- (void)gateResponseAction:(long long)arg1 isRetry:(_Bool)arg2 currentTime:(double)arg3;	// IMP=0x000000000008dcec
- (void)gateResponseAction:(long long)arg1 isRetry:(_Bool)arg2;	// IMP=0x000000000008dca2
- (id)init;	// IMP=0x000000000008dc1b

@end

