//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKClinicalAuthorizationSettingsViewController.h>

@class HRProfile;

__attribute__((visibility("hidden")))
@interface WDClinicalAuthorizationSettingsViewController : HKClinicalAuthorizationSettingsViewController
{
    HRProfile *_profile;	// 8 = 0x8
}

+ (id)contextUsingProfile:(id)arg1 source:(id)arg2;	// IMP=0x0000000000048bbc
- (void).cxx_destruct;	// IMP=0x0000000000048d9f
@property(readonly, nonatomic) __weak HRProfile *profile; // @synthesize profile=_profile;
- (id)initWithProfile:(id)arg1 source:(id)arg2;	// IMP=0x0000000000048afc
- (id)initWithContext:(id)arg1 style:(long long)arg2;	// IMP=0x0000000000048a82

@end

