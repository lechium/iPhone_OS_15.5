//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDCharacteristicsAvailabilityListenerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSDate, NSSet, NSString;
@protocol HMDDoorbellChimeControllerContext;

@interface HMDDoorbellChimeController : HMFObject <HMDCharacteristicsAvailabilityListenerDelegate, HMFLogging>
{
    id <HMDDoorbellChimeControllerContext> _context;	// 8 = 0x8
    NSSet *_availableCharacteristics;	// 16 = 0x10
    NSDate *_lastUnidentifiedChimeDate;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00000000006a1db4
- (void).cxx_destruct;	// IMP=0x00000000006a01a9
@property(retain) NSDate *lastUnidentifiedChimeDate; // @synthesize lastUnidentifiedChimeDate=_lastUnidentifiedChimeDate;
@property(copy) NSSet *availableCharacteristics; // @synthesize availableCharacteristics=_availableCharacteristics;
@property(readonly) id <HMDDoorbellChimeControllerContext> context; // @synthesize context=_context;
- (void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2;	// IMP=0x00000000006a0057
- (id)logIdentifier;	// IMP=0x000000000069ffb6
- (void)handleCharacteristicsValueUpdatedNotification:(id)arg1;	// IMP=0x000000000069fd4d
- (unsigned long long)_numHomePodsWithDoorbellChimeEnabled;	// IMP=0x000000000069fc45
- (_Bool)_isDoorbellChimeSettingEnabledForHomePodAccessory:(id)arg1;	// IMP=0x000000000069fba6
- (id)_destinationIDsToNotifyForDoorbellChimeUsingCoreUtilAction;	// IMP=0x000000000069f5b9
- (void)_chimeCoreUtilDoorbellWithDestination:(id)arg1 shouldPlayChime:(_Bool)arg2 logEvent:(id)arg3 personIdentificationText:(id)arg4;	// IMP=0x000000000069f042
- (void)_notifyAllAccessoriesForDoorbellPressAndPlayChimeSound:(_Bool)arg1 attemptCloudPullIfNoPersonsFound:(_Bool)arg2;	// IMP=0x000000000069e354
- (void)_handleCharacteristicsValueUpdatedNotification:(id)arg1;	// IMP=0x000000000069e042
- (id)clientIdentifier;	// IMP=0x000000000069df67
- (void)handleUpdatedPersonIdentificationInformation;	// IMP=0x000000000069dd4b
- (void)configure;	// IMP=0x000000000069dbe6
- (void)dealloc;	// IMP=0x000000000069daeb
- (id)initWithContext:(id)arg1;	// IMP=0x000000000069da4b
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2;	// IMP=0x000000000069d995

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

