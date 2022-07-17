//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDWatchSync, NSString;

@interface HMDWatchSyncRetryContext : HMFObject <NSCopying>
{
    HMDWatchSync *_watchSync;	// 8 = 0x8
    NSString *_watchIdentifier;	// 16 = 0x10
    long long _retryAttempt;	// 24 = 0x18
    double _initialRetryInterval;	// 32 = 0x20
    long long _maximumRetryAttempts;	// 40 = 0x28
}

+ (id)createWithWatchIdentifier:(id)arg1 watchSync:(id)arg2 retryAttempt:(long long)arg3;	// IMP=0x00000000001e3cf6
- (void).cxx_destruct;	// IMP=0x00000000001e3cc5
@property(readonly) long long maximumRetryAttempts; // @synthesize maximumRetryAttempts=_maximumRetryAttempts;
@property(readonly) double initialRetryInterval; // @synthesize initialRetryInterval=_initialRetryInterval;
@property(readonly) long long retryAttempt; // @synthesize retryAttempt=_retryAttempt;
@property(readonly, copy) NSString *watchIdentifier; // @synthesize watchIdentifier=_watchIdentifier;
@property(readonly, copy) HMDWatchSync *watchSync; // @synthesize watchSync=_watchSync;
- (id)attributeDescriptions;	// IMP=0x00000000001e3ad2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e3ac7
@property(readonly) double retryInterval;
- (id)initWithWatchIdentifier:(id)arg1 watchSync:(id)arg2 retryAttempt:(long long)arg3 initialRetryInterval:(double)arg4 maximumRetryAttempts:(long long)arg5;	// IMP=0x00000000001e398d

@end
