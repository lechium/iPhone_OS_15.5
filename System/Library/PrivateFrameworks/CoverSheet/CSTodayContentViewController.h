//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/SBFLegibilitySettingsProviderDelegate-Protocol.h>

@class CSTodayViewController, NSString, SBUISpotlightBarNavigationController, SPUISearchBarController;

@interface CSTodayContentViewController <SBFLegibilitySettingsProviderDelegate>
{
    _Bool _bouncing;	// 8 = 0x8
    CSTodayViewController *_todayViewController;	// 16 = 0x10
    SBUISpotlightBarNavigationController *_spotlightNavigationController;	// 24 = 0x18
    SPUISearchBarController *_spotlightSearchBarViewController;	// 32 = 0x20
}

+ (Class)viewClass;	// IMP=0x00000000000ffffb
- (void).cxx_destruct;	// IMP=0x00000000001006c2
@property(retain, nonatomic) SPUISearchBarController *spotlightSearchBarViewController; // @synthesize spotlightSearchBarViewController=_spotlightSearchBarViewController;
@property(retain, nonatomic) SBUISpotlightBarNavigationController *spotlightNavigationController; // @synthesize spotlightNavigationController=_spotlightNavigationController;
@property(nonatomic, getter=isBouncing) _Bool bouncing; // @synthesize bouncing=_bouncing;
@property(retain, nonatomic) CSTodayViewController *todayViewController; // @synthesize todayViewController=_todayViewController;
- (void)_updateSpotlightLegibility;	// IMP=0x00000000001005b6
- (void)providerLegibilitySettingsChanged:(id)arg1;	// IMP=0x00000000001005a4
- (id)_todayContentView;	// IMP=0x000000000010054e
- (void)aggregateBehavior:(id)arg1;	// IMP=0x00000000001004ba
- (void)aggregateAppearance:(id)arg1;	// IMP=0x0000000000100426
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000001003d0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000010037a
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000010030f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000100233
- (void)viewDidLoad;	// IMP=0x000000000010000c
- (id)init;	// IMP=0x00000000000ffe68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
