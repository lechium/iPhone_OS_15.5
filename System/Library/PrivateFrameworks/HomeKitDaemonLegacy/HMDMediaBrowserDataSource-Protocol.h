//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMAccessoryCategory, HMDDevice, HMDUnassociatedAppleMediaAccessory, HMFMessageDispatcher, HMFSystemInfo, NSString;

@protocol HMDMediaBrowserDataSource
@property(readonly) HMDDevice *currentDevice;
@property(readonly) HMFSystemInfo *systemInfo;
@property(readonly) _Bool requiresHomePodPairing;
@property(readonly) _Bool isAppleMediaAccessory;
@property(readonly) NSString *currentAccessoryMediaRouteIdentifier;
- (HMDUnassociatedAppleMediaAccessory *)createUnassociatedHomePodAccessory:(NSString *)arg1 name:(NSString *)arg2 category:(HMAccessoryCategory *)arg3 productColor:(long long)arg4 messageDispatcher:(HMFMessageDispatcher *)arg5;
- (HMDUnassociatedAppleMediaAccessory *)createUnassociatedAppleMediaAccessory:(NSString *)arg1 name:(NSString *)arg2 category:(HMAccessoryCategory *)arg3 productColor:(long long)arg4 messageDispatcher:(HMFMessageDispatcher *)arg5;
@end
