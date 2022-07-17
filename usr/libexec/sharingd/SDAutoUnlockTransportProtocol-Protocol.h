//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSSet, SFAutoUnlockDevice;

@protocol SDAutoUnlockTransportProtocol
@property(readonly, nonatomic) NSDate *lastSeenWatchDate;
@property(readonly, nonatomic) _Bool watchSeenRecently;
@property(readonly, nonatomic) _Bool appleWatchExisted;
- (SFAutoUnlockDevice *)placeholderDevice;
- (NSSet *)enabledAutoUnlockDevicesUsingCache:(_Bool)arg1;
- (NSSet *)autoUnlockEligibleDevicesWithCloudPairing:(_Bool)arg1;
@end
