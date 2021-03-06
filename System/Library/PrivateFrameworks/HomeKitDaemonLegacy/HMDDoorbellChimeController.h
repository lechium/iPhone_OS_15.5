//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDCharacteristicsAvailabilityListenerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSDate, NSSet, NSString;
@protocol HMDDoorbellChimeControllerContext;

@interface HMDDoorbellChimeController : HMFObject <HMDCharacteristicsAvailabilityListenerDelegate, HMFLogging>
{
    id <HMDDoorbellChimeControllerContext> _context;	// 8 = 0x8
    NSSet *_availableCharacteristics;	// 16 = 0x10
    NSDate *_lastUnidentifiedChimeDate;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0000000000639fae
- (void).cxx_destruct;	// IMP=0x00000000006383a3
@property(retain) NSDate *lastUnidentifiedChimeDate; // @synthesize lastUnidentifiedChimeDate=_lastUnidentifiedChimeDate;
@property(copy) NSSet *availableCharacteristics; // @synthesize availableCharacteristics=_availableCharacteristics;
@property(readonly) id <HMDDoorbellChimeControllerContext> context; // @synthesize context=_context;
- (void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2;	// IMP=0x0000000000638251
- (id)logIdentifier;	// IMP=0x00000000006381b0
- (void)handleCharacteristicsValueUpdatedNotification:(id)arg1;	// IMP=0x0000000000637f47
- (unsigned long long)_numHomePodsWithDoorbellChimeEnabled;	// IMP=0x0000000000637e3f
- (_Bool)_isDoorbellChimeSettingEnabledForHomePodAccessory:(id)arg1;	// IMP=0x0000000000637da0
- (id)_destinationIDsToNotifyForDoorbellChimeUsingCoreUtilAction;	// IMP=0x00000000006377b3
- (void)_chimeCoreUtilDoorbellWithDestination:(id)arg1 shouldPlayChime:(_Bool)arg2 logEvent:(id)arg3 personIdentificationText:(id)arg4;	// IMP=0x000000000063723c
- (void)_notifyAllAccessoriesForDoorbellPressAndPlayChimeSound:(_Bool)arg1 attemptCloudPullIfNoPersonsFound:(_Bool)arg2;	// IMP=0x000000000063654e
- (void)_handleCharacteristicsValueUpdatedNotification:(id)arg1;	// IMP=0x000000000063623c
- (id)clientIdentifier;	// IMP=0x0000000000636161
- (void)handleUpdatedPersonIdentificationInformation;	// IMP=0x0000000000635f45
- (void)configure;	// IMP=0x0000000000635de0
- (void)dealloc;	// IMP=0x0000000000635ce5
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000635c45
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2;	// IMP=0x0000000000635b8f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

