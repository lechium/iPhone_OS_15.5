//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSSecureCoding-Protocol.h>

@class CKVLocalization, CKVSearchContext, NSDictionary;

@interface CKVSettings : NSObject <NSSecureCoding>
{
    _Bool _isSandboxInstance;	// 8 = 0x8
    CKVLocalization *_localization;	// 16 = 0x10
    CKVSearchContext *_searchContext;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a86a4
+ (id)defaultSettings;	// IMP=0x00000000000a8637
+ (id)sandboxSettingsWithLocale:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000087c23
+ (id)defaultSandboxSettings;	// IMP=0x0000000000087bb3
- (void).cxx_destruct;	// IMP=0x00000000000a8410
@property(readonly, nonatomic) CKVSearchContext *searchContext; // @synthesize searchContext=_searchContext;
@property(readonly, nonatomic) _Bool isSandboxInstance; // @synthesize isSandboxInstance=_isSandboxInstance;
@property(readonly) CKVLocalization *localization; // @synthesize localization=_localization;
- (id)overrideRankerPrioritizeExactMatch;	// IMP=0x00000000000a83d8
- (id)overrideRankerAllowApproximateMatch;	// IMP=0x00000000000a83c7
- (id)overrideRankerAllowPartialMatch;	// IMP=0x00000000000a83b6
- (id)overrideRankerAbsoluteThreshold;	// IMP=0x00000000000a83a5
- (id)overrideRankerGlobalRelativeThreshold;	// IMP=0x00000000000a8394
- (id)overrideRankerRegionalRelativeThreshold;	// IMP=0x00000000000a8383
- (id)overrideRankerPriorScoreWeight;	// IMP=0x00000000000a8372
- (id)overrideRankerMatchScoreWeight;	// IMP=0x00000000000a8361
- (id)overrideRankerUseTopFive;	// IMP=0x00000000000a8350
- (id)overrideRankerUsePriors;	// IMP=0x00000000000a833f
- (_Bool)_shouldOverrideDonationSettings;	// IMP=0x00000000000a830e
- (_Bool)_shouldDonateAll;	// IMP=0x00000000000a82fb
- (_Bool)shouldDonateMedia;	// IMP=0x00000000000a8274
- (_Bool)shouldDonateHomeKit;	// IMP=0x00000000000a81ea
- (_Bool)shouldDonateCustomVocabulary;	// IMP=0x00000000000a8186
- (_Bool)shouldDonateAppInfo;	// IMP=0x00000000000a80fc
- (_Bool)shouldDonateContacts;	// IMP=0x00000000000a808a
- (_Bool)isSkitEnabled;	// IMP=0x00000000000a806a
- (_Bool)isXPCVocabularyDonationEnabled;	// IMP=0x00000000000a8042
- (_Bool)isVocabularyDonationEnabled;	// IMP=0x00000000000a802c
- (id)init;	// IMP=0x00000000000a7fe4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a7eef
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a7e67
- (id)initWithLocalization:(id)arg1 isSandboxInstance:(_Bool)arg2;	// IMP=0x00000000000a7dd7
@property(retain) NSDictionary *simulatedPriors;

@end
