//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface PXCPLStatusSettings
{
    _Bool _cloudQuotaOfferIncludeAssetCounts;	// 8 = 0x8
    long long _cloudQuotaOfferLevel;	// 16 = 0x10
    NSNumber *_resumeOverrideHours;	// 24 = 0x18
}

+ (id)settingsControllerModule;	// IMP=0x00000000004ce8d4
+ (id)sharedInstance;	// IMP=0x00000000004ce8a4
- (void).cxx_destruct;	// IMP=0x00000000004ce891
@property(retain, nonatomic) NSNumber *resumeOverrideHours; // @synthesize resumeOverrideHours=_resumeOverrideHours;
@property(nonatomic) _Bool cloudQuotaOfferIncludeAssetCounts; // @synthesize cloudQuotaOfferIncludeAssetCounts=_cloudQuotaOfferIncludeAssetCounts;
@property(nonatomic) long long cloudQuotaOfferLevel; // @synthesize cloudQuotaOfferLevel=_cloudQuotaOfferLevel;
- (void)setDefaultValues;	// IMP=0x00000000004ce7bc
- (id)parentSettings;	// IMP=0x00000000004ce7a3

@end

