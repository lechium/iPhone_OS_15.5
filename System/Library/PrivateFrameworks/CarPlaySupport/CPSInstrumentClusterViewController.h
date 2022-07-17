//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <CarPlaySupport/CPSNavigationDisplaying-Protocol.h>

@class CPSAbridgableLabel, CPSDashboardManeuversCardView, CPSPausedCardView, NSArray, NSString;

@interface CPSInstrumentClusterViewController : UIViewController <CPSNavigationDisplaying>
{
    long long _guidanceStyle;	// 8 = 0x8
    NSArray *_inactiveVariants;	// 16 = 0x10
    NSArray *_attributedInactiveVariants;	// 24 = 0x18
    CPSDashboardManeuversCardView *_maneuversCardView;	// 32 = 0x20
    CPSPausedCardView *_pausedCardView;	// 40 = 0x28
    CPSAbridgableLabel *_inactiveLabel;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000007d083
@property(retain, nonatomic) CPSAbridgableLabel *inactiveLabel; // @synthesize inactiveLabel=_inactiveLabel;
@property(retain, nonatomic) CPSPausedCardView *pausedCardView; // @synthesize pausedCardView=_pausedCardView;
@property(retain, nonatomic) CPSDashboardManeuversCardView *maneuversCardView; // @synthesize maneuversCardView=_maneuversCardView;
@property(copy, nonatomic) NSArray *attributedInactiveVariants; // @synthesize attributedInactiveVariants=_attributedInactiveVariants;
@property(copy, nonatomic) NSArray *inactiveVariants; // @synthesize inactiveVariants=_inactiveVariants;
@property(nonatomic) long long guidanceStyle; // @synthesize guidanceStyle=_guidanceStyle;
- (void)_transitionFromViews:(id)arg1 inView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000007c73d
- (void)navigator:(id)arg1 didEndTrip:(_Bool)arg2;	// IMP=0x000000000007c5d6
- (void)navigator:(id)arg1 pausedTripForReason:(unsigned long long)arg2 description:(id)arg3 usingColor:(id)arg4;	// IMP=0x000000000007c1b8
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;	// IMP=0x000000000007c132
- (void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2;	// IMP=0x000000000007bc80
- (void)_updateGuidanceStyle;	// IMP=0x000000000007bb74
- (void)loadView;	// IMP=0x000000000007b4df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
