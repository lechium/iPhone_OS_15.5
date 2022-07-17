//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeUI/HUFeatureOnboardingFlow-Protocol.h>

@class HMHome, NAFuture, NSString, UIViewController;
@protocol HUConfigurationViewController;

@interface HUVoiceProfileOnboardingFlow : NSObject <HUFeatureOnboardingFlow>
{
    _Bool _shouldAbortThisOnboardingFlowGroup;	// 8 = 0x8
    _Bool _shouldAbortAllOnboarding;	// 9 = 0x9
    _Bool _initialCheckedResult;	// 10 = 0xa
    HMHome *_home;	// 16 = 0x10
    NAFuture *_onboardingFuture;	// 24 = 0x18
    UIViewController<HUConfigurationViewController> *_initialViewController;	// 32 = 0x20
    NSString *_initialCheckedLanguage;	// 40 = 0x28
}

+ (id)needsOnboardingForHome:(id)arg1 options:(id)arg2;	// IMP=0x0000000000177d81
- (void).cxx_destruct;	// IMP=0x0000000000178766
@property(nonatomic) _Bool initialCheckedResult; // @synthesize initialCheckedResult=_initialCheckedResult;
@property(retain, nonatomic) NSString *initialCheckedLanguage; // @synthesize initialCheckedLanguage=_initialCheckedLanguage;
@property(nonatomic) _Bool shouldAbortAllOnboarding; // @synthesize shouldAbortAllOnboarding=_shouldAbortAllOnboarding;
@property(nonatomic) _Bool shouldAbortThisOnboardingFlowGroup; // @synthesize shouldAbortThisOnboardingFlowGroup=_shouldAbortThisOnboardingFlowGroup;
@property(retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController; // @synthesize initialViewController=_initialViewController;
@property(retain, nonatomic) NAFuture *onboardingFuture; // @synthesize onboardingFuture=_onboardingFuture;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)processUserInput:(id)arg1;	// IMP=0x0000000000177a22
@property(readonly, copy) NSString *description;
- (void)checkIfStillRequiredFromCurrentResults:(id)arg1;	// IMP=0x000000000017763e
- (id)initWithUsageOptions:(id)arg1 home:(id)arg2;	// IMP=0x0000000000176cab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
