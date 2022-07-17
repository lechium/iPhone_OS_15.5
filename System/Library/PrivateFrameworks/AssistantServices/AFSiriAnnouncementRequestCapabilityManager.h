//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFAnnouncementRequestCapabilityProvidingDelegate-Protocol.h>

@class NSHashTable;
@protocol AFAnnouncementRequestCapabilityProviding;

@interface AFSiriAnnouncementRequestCapabilityManager : NSObject <AFAnnouncementRequestCapabilityProvidingDelegate>
{
    NSHashTable *_observers;	// 8 = 0x8
    id <AFAnnouncementRequestCapabilityProviding> _capabilityProvider;	// 16 = 0x10
    long long _platform;	// 24 = 0x18
}

+ (_Bool)_supportsAnnouncementType:(unsigned long long)arg1 forSupportedIntents:(id)arg2 forBundleId:(id)arg3 onPlatform:(long long)arg4;	// IMP=0x00000000000fe9dc
+ (id)_requiredBundleIDsForNotificationAnnouncementType:(long long)arg1;	// IMP=0x00000000000fe969
+ (long long)notificationAnnouncementTypeForNotificationFromApp:(id)arg1 withIntentIDs:(id)arg2 onPlatform:(long long)arg3;	// IMP=0x00000000000fe0df
+ (id)supportedAnnouncementTypesForBundleId:(id)arg1 onPlatform:(long long)arg2;	// IMP=0x00000000000fddaa
+ (Class)_classForPlatform:(long long)arg1;	// IMP=0x00000000000fdc8a
- (void).cxx_destruct;	// IMP=0x00000000000fec41
- (void)provider:(id)arg1 availableAnnouncementRequestTypesChanged:(unsigned long long)arg2;	// IMP=0x00000000000fe796
- (void)provider:(id)arg1 eligibleAnnouncementRequestTypesChanged:(unsigned long long)arg2;	// IMP=0x00000000000fe5c3
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000fdd94
- (void)addObserver:(id)arg1;	// IMP=0x00000000000fdd7e
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fdd61
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fdd44
- (id)initWithPlatform:(long long)arg1;	// IMP=0x00000000000fdbac

@end
