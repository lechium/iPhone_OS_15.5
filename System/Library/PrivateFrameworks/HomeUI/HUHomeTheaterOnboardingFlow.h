//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeUI/HUFeatureOnboardingFlow-Protocol.h>

@class HMHome, NAFuture, NSArray, NSString, UIViewController;
@protocol HUConfigurationViewController;

@interface HUHomeTheaterOnboardingFlow : NSObject <HUFeatureOnboardingFlow>
{
    _Bool _shouldAbortThisOnboardingFlowGroup;	// 8 = 0x8
    _Bool _shouldAbortAllOnboarding;	// 9 = 0x9
    HMHome *_home;	// 16 = 0x10
    NAFuture *_onboardingFuture;	// 24 = 0x18
    UIViewController<HUConfigurationViewController> *_initialViewController;	// 32 = 0x20
    NSArray *_appleTVs;	// 40 = 0x28
}

+ (id)needsOnboardingForHome:(id)arg1 options:(id)arg2;	// IMP=0x0000000000056505
- (void).cxx_destruct;	// IMP=0x0000000000056a5d
@property(retain, nonatomic) NSArray *appleTVs; // @synthesize appleTVs=_appleTVs;
@property(nonatomic) _Bool shouldAbortAllOnboarding; // @synthesize shouldAbortAllOnboarding=_shouldAbortAllOnboarding;
@property(nonatomic) _Bool shouldAbortThisOnboardingFlowGroup; // @synthesize shouldAbortThisOnboardingFlowGroup=_shouldAbortThisOnboardingFlowGroup;
@property(retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController; // @synthesize initialViewController=_initialViewController;
@property(retain, nonatomic) NAFuture *onboardingFuture; // @synthesize onboardingFuture=_onboardingFuture;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)processUserInput:(id)arg1;	// IMP=0x00000000000561e5
- (id)viewControllerForAccessory:(id)arg1;	// IMP=0x000000000005603d
@property(readonly, copy) NSString *description;
- (id)initWithUsageOptions:(id)arg1 home:(id)arg2;	// IMP=0x0000000000055d27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

