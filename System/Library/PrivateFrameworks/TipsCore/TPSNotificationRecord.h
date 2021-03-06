//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipsCore/MLFeatureProvider-Protocol.h>

@class NSSet, NSString, TPSTimeframeRecordUtilities;

@interface TPSNotificationRecord <MLFeatureProvider>
{
    NSString *_origin;	// 8 = 0x8
    long long _classification;	// 16 = 0x10
    TPSTimeframeRecordUtilities *_timeframe;	// 24 = 0x18
    long long _internalLockscreenEmpty;	// 32 = 0x20
    long long _internalPreviousNotificationSentMoreThan24HoursAgo;	// 40 = 0x28
    long long _internalPreviousNotificationSentMoreThanOneWeekAgo;	// 48 = 0x30
    long long _internalPreviousNotificationSentMoreThanOneMonthAgo;	// 56 = 0x38
    long long _internalContentAvailableInUsersPreferredLanguage;	// 64 = 0x40
    long long _internalWelcomeTipAvailableMatchingUsersHardware;	// 72 = 0x48
    long long _internalUserHasLaunchedTipsApp;	// 80 = 0x50
    long long _internalHasNetworkConnection;	// 88 = 0x58
    long long _internalUserHasLaunchedTipsAppWithinLastWeek;	// 96 = 0x60
    long long _internalUserHasLaunchedTipsAppWithinLastMonth;	// 104 = 0x68
    long long _internalUserIsNewToThisHardware;	// 112 = 0x70
    long long _internalUserHasAlreadySeenWelcomeTipMatchingHardware;	// 120 = 0x78
    long long _internalWelcomeTipAvailableMatchingSoftware;	// 128 = 0x80
    long long _internalUserIsNewToThisSoftware;	// 136 = 0x88
    long long _internalUserHasAlreadySeenWelcomeTipMatchingSoftware;	// 144 = 0x90
    long long _internalUserHasPairedNewHardware;	// 152 = 0x98
    long long _internalInstructionalContentIsAvailableForNewPairedHardware;	// 160 = 0xa0
    long long _internalUserHasAlreadyViewedContentForThisPairedHardware;	// 168 = 0xa8
    long long _internalUserHasRespondedToAtLeast1ofPast3Notifications;	// 176 = 0xb0
    long long _internalHighPriorityContentThatOverridesSoftOptOutIsAvailable;	// 184 = 0xb8
    long long _internalCollectionWithNotificationTextIsAvailable;	// 192 = 0xc0
    long long _internalUserHasAlreadySeenNotificationForCollectionWithNotificationText;	// 200 = 0xc8
    long long _internalUnviewedTipsAvailable;	// 208 = 0xd0
    long long _internalShouldNotify;	// 216 = 0xd8
}

+ (id)lastPairedHardwareDate;	// IMP=0x0000000000028069
+ (void)pairedHardware:(id)arg1 paired:(_Bool)arg2;	// IMP=0x0000000000027f3d
+ (_Bool)shouldLogNegativeSample;	// IMP=0x0000000000027eec
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000026953
+ (id)keyOrder;	// IMP=0x0000000000025b62
+ (void)persistRecordWithOrigin:(id)arg1 andClassification:(long long)arg2;	// IMP=0x00000000000254bd
+ (id)recordWithOrigin:(id)arg1 andClassification:(long long)arg2;	// IMP=0x0000000000025465
+ (id)recordWithOrigin:(id)arg1;	// IMP=0x0000000000025418
- (void).cxx_destruct;	// IMP=0x00000000000288c7
@property(nonatomic) long long internalShouldNotify; // @synthesize internalShouldNotify=_internalShouldNotify;
@property(nonatomic) long long internalUnviewedTipsAvailable; // @synthesize internalUnviewedTipsAvailable=_internalUnviewedTipsAvailable;
@property(nonatomic) long long internalUserHasAlreadySeenNotificationForCollectionWithNotificationText; // @synthesize internalUserHasAlreadySeenNotificationForCollectionWithNotificationText=_internalUserHasAlreadySeenNotificationForCollectionWithNotificationText;
@property(nonatomic) long long internalCollectionWithNotificationTextIsAvailable; // @synthesize internalCollectionWithNotificationTextIsAvailable=_internalCollectionWithNotificationTextIsAvailable;
@property(nonatomic) long long internalHighPriorityContentThatOverridesSoftOptOutIsAvailable; // @synthesize internalHighPriorityContentThatOverridesSoftOptOutIsAvailable=_internalHighPriorityContentThatOverridesSoftOptOutIsAvailable;
@property(nonatomic) long long internalUserHasRespondedToAtLeast1ofPast3Notifications; // @synthesize internalUserHasRespondedToAtLeast1ofPast3Notifications=_internalUserHasRespondedToAtLeast1ofPast3Notifications;
@property(nonatomic) long long internalUserHasAlreadyViewedContentForThisPairedHardware; // @synthesize internalUserHasAlreadyViewedContentForThisPairedHardware=_internalUserHasAlreadyViewedContentForThisPairedHardware;
@property(nonatomic) long long internalInstructionalContentIsAvailableForNewPairedHardware; // @synthesize internalInstructionalContentIsAvailableForNewPairedHardware=_internalInstructionalContentIsAvailableForNewPairedHardware;
@property(nonatomic) long long internalUserHasPairedNewHardware; // @synthesize internalUserHasPairedNewHardware=_internalUserHasPairedNewHardware;
@property(nonatomic) long long internalUserHasAlreadySeenWelcomeTipMatchingSoftware; // @synthesize internalUserHasAlreadySeenWelcomeTipMatchingSoftware=_internalUserHasAlreadySeenWelcomeTipMatchingSoftware;
@property(nonatomic) long long internalUserIsNewToThisSoftware; // @synthesize internalUserIsNewToThisSoftware=_internalUserIsNewToThisSoftware;
@property(nonatomic) long long internalWelcomeTipAvailableMatchingSoftware; // @synthesize internalWelcomeTipAvailableMatchingSoftware=_internalWelcomeTipAvailableMatchingSoftware;
@property(nonatomic) long long internalUserHasAlreadySeenWelcomeTipMatchingHardware; // @synthesize internalUserHasAlreadySeenWelcomeTipMatchingHardware=_internalUserHasAlreadySeenWelcomeTipMatchingHardware;
@property(nonatomic) long long internalUserIsNewToThisHardware; // @synthesize internalUserIsNewToThisHardware=_internalUserIsNewToThisHardware;
@property(nonatomic) long long internalUserHasLaunchedTipsAppWithinLastMonth; // @synthesize internalUserHasLaunchedTipsAppWithinLastMonth=_internalUserHasLaunchedTipsAppWithinLastMonth;
@property(nonatomic) long long internalUserHasLaunchedTipsAppWithinLastWeek; // @synthesize internalUserHasLaunchedTipsAppWithinLastWeek=_internalUserHasLaunchedTipsAppWithinLastWeek;
@property(nonatomic) long long internalHasNetworkConnection; // @synthesize internalHasNetworkConnection=_internalHasNetworkConnection;
@property(nonatomic) long long internalUserHasLaunchedTipsApp; // @synthesize internalUserHasLaunchedTipsApp=_internalUserHasLaunchedTipsApp;
@property(nonatomic) long long internalWelcomeTipAvailableMatchingUsersHardware; // @synthesize internalWelcomeTipAvailableMatchingUsersHardware=_internalWelcomeTipAvailableMatchingUsersHardware;
@property(nonatomic) long long internalContentAvailableInUsersPreferredLanguage; // @synthesize internalContentAvailableInUsersPreferredLanguage=_internalContentAvailableInUsersPreferredLanguage;
@property(nonatomic) long long internalPreviousNotificationSentMoreThanOneMonthAgo; // @synthesize internalPreviousNotificationSentMoreThanOneMonthAgo=_internalPreviousNotificationSentMoreThanOneMonthAgo;
@property(nonatomic) long long internalPreviousNotificationSentMoreThanOneWeekAgo; // @synthesize internalPreviousNotificationSentMoreThanOneWeekAgo=_internalPreviousNotificationSentMoreThanOneWeekAgo;
@property(nonatomic) long long internalPreviousNotificationSentMoreThan24HoursAgo; // @synthesize internalPreviousNotificationSentMoreThan24HoursAgo=_internalPreviousNotificationSentMoreThan24HoursAgo;
@property(nonatomic) long long internalLockscreenEmpty; // @synthesize internalLockscreenEmpty=_internalLockscreenEmpty;
@property(retain, nonatomic) TPSTimeframeRecordUtilities *timeframe; // @synthesize timeframe=_timeframe;
@property(readonly, nonatomic) long long classification; // @synthesize classification=_classification;
@property(readonly, copy, nonatomic) NSString *origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)featureValueForName:(id)arg1;	// IMP=0x00000000000282bc
@property(readonly, nonatomic) _Bool shouldNotify;
@property(readonly, nonatomic) _Bool unviewedTipsAvailable;
@property(readonly, nonatomic) _Bool userHasAlreadySeenNotificationForCollectionWithNotificationText;
@property(readonly, nonatomic) _Bool collectionWithNotificationTextIsAvailable;
@property(readonly, nonatomic) _Bool highPriorityContentThatOverridesSoftOptOutIsAvailable;
@property(readonly, nonatomic) _Bool userHasRespondedToAtLeast1ofPast3Notifications;
@property(readonly, nonatomic) _Bool userHasAlreadyViewedContentForThisPairedHardware;
@property(readonly, nonatomic) _Bool instructionalContentIsAvailableForNewPairedHardware;
@property(readonly, nonatomic) _Bool userHasPairedNewHardware;
@property(readonly, nonatomic) _Bool userHasAlreadySeenWelcomeTipMatchingSoftware;
@property(readonly, nonatomic) _Bool userIsNewToThisSoftware;
@property(readonly, nonatomic) _Bool welcomeTipAvailableMatchingSoftware;
@property(readonly, nonatomic) _Bool userHasAlreadySeenWelcomeTipMatchingHardware;
@property(readonly, nonatomic) _Bool userIsNewToThisHardware;
@property(readonly, nonatomic) _Bool userHasLaunchedTipsAppWithinLastMonth;
@property(readonly, nonatomic) _Bool userHasLaunchedTipsAppWithinLastWeek;
@property(readonly, nonatomic) _Bool hasNetworkConnection;
@property(readonly, nonatomic) _Bool userHasLaunchedTipsApp;
@property(readonly, nonatomic) _Bool welcomeTipAvailableMatchingUsersHardware;
@property(readonly, nonatomic) _Bool contentAvailableInUsersPreferredLanguage;
@property(readonly, nonatomic) _Bool previousNotificationSentMoreThanOneMonthAgo;
@property(readonly, nonatomic) _Bool previousNotificationSentMoreThanOneWeekAgo;
@property(readonly, nonatomic) _Bool previousNotificationSentMoreThan24HoursAgo;
@property(readonly, nonatomic) _Bool lockscreenLikelyEmpty;
- (_Bool)date:(id)arg1 isWithinTheLast:(double)arg2;	// IMP=0x000000000002729a
- (_Bool)checkInternalValue:(long long *)arg1 otherwiseUse:(_Bool)arg2;	// IMP=0x0000000000027224
- (long long)uncertainBoolFromBool:(_Bool)arg1;	// IMP=0x0000000000027219
- (_Bool)boolFromUncertainBool:(long long)arg1;	// IMP=0x00000000000271b5
- (id)task;	// IMP=0x00000000000271a8
- (id)recordDescription;	// IMP=0x0000000000027171
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000026d95
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002695b
- (id)recordData;	// IMP=0x0000000000026576
- (id)recordInfo;	// IMP=0x000000000002655d
- (id)dataDictionary;	// IMP=0x0000000000025db1
- (id)initWithOrigin:(id)arg1 andClassification:(long long)arg2;	// IMP=0x0000000000025ae8
- (id)initWithOrigin:(id)arg1;	// IMP=0x00000000000259dd
- (id)description;	// IMP=0x00000000000255f7

@end

