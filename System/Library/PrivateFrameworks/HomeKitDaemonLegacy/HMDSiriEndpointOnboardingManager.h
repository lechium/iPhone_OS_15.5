//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFUnfairLock, NSMutableDictionary;
@protocol HMDSiriEndpointOnboardingManagerDataSource;

@interface HMDSiriEndpointOnboardingManager : NSObject
{
    NSMutableDictionary *_onboardingSelections;	// 8 = 0x8
    HMFUnfairLock *_lock;	// 16 = 0x10
    id <HMDSiriEndpointOnboardingManagerDataSource> _dataSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000007c4187
@property __weak id <HMDSiriEndpointOnboardingManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)readyToApplyOnboardingSelectionsWithHomeUUID:(id)arg1 accessoryUUID:(id)arg2;	// IMP=0x00000000007c3de9
- (void)_setNeedsOnboardingCompleteWitHomeUUID:(id)arg1 accessoryUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000007c3cf0
- (void)applyCachedOnboardingSelectionsWithAccessoryUUID:(id)arg1 homeUUID:(id)arg2;	// IMP=0x00000000007c36f6
- (void)applyOnboardingSelections:(id)arg1 accessoryUUID:(id)arg2 homeUUID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000007c2ef6
- (void)handleAccessoryConfigured:(id)arg1;	// IMP=0x00000000007c2cbf
- (void)handleCompositeSettingsControllerConfigured:(id)arg1;	// IMP=0x00000000007c297d
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000007c2831

@end

