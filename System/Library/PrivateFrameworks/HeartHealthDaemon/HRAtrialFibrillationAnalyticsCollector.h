//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile;

@interface HRAtrialFibrillationAnalyticsCollector : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000c0ba
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (id)_fetchBiologicalSex;	// IMP=0x000000000000bf80
- (id)_fetchCurrentAge;	// IMP=0x000000000000bd6d
- (void)_postConfirmationCycleMetric:(id)arg1;	// IMP=0x000000000000bcd0
- (void)updateCountAnalyzedTachogramsWithCount:(long long)arg1 keyValueDomain:(id)arg2;	// IMP=0x000000000000bb27
- (void)collectAnalyticsForRemoteReEnableMessageShownForOnboardingCountryCode:(id)arg1;	// IMP=0x000000000000ba62
- (void)collectAnalyticsForRemoteDisableMessageShownForOnboardingCountryCode:(id)arg1;	// IMP=0x000000000000b99d
- (void)collectAnalyticsForResult:(id)arg1 algorithmVersion:(long long)arg2 samplesDateInterval:(id)arg3;	// IMP=0x000000000000b7b3
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000000b74f

@end
