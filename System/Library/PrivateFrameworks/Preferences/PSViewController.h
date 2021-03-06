//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <Preferences/PSController-Protocol.h>

@class NSString, PSRootController, PSSpecifier;
@protocol PSController;

@interface PSViewController : UIViewController <PSController>
{
    UIViewController<PSController> *_parentController;	// 8 = 0x8
    PSRootController *_rootController;	// 16 = 0x10
    PSSpecifier *_specifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000029601
- (long long)navigationItemLargeTitleDisplayMode;	// IMP=0x00000000000295f6
- (void)statusBarWillAnimateByHeight:(double)arg1;	// IMP=0x00000000000295f0
- (_Bool)canBeShownFromSuspendedState;	// IMP=0x00000000000295e8
- (void)formSheetViewDidDisappear;	// IMP=0x00000000000295e2
- (void)formSheetViewWillDisappear;	// IMP=0x00000000000295dc
- (void)popupViewDidDisappear;	// IMP=0x00000000000295d6
- (void)popupViewWillDisappear;	// IMP=0x00000000000295d0
- (void)viewDidLoad;	// IMP=0x0000000000029566
- (void)handleURL:(id)arg1;	// IMP=0x0000000000029560
- (void)handleURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000029513
- (void)showController:(id)arg1 animate:(_Bool)arg2;	// IMP=0x0000000000029480
- (void)showController:(id)arg1;	// IMP=0x0000000000029469
- (void)pushController:(id)arg1 animate:(_Bool)arg2;	// IMP=0x0000000000029457
- (void)pushController:(id)arg1;	// IMP=0x0000000000029445
- (void)didWake;	// IMP=0x000000000002943f
- (void)didUnlock;	// IMP=0x0000000000029439
- (void)willUnlock;	// IMP=0x0000000000029433
- (void)didLock;	// IMP=0x000000000002942d
- (void)suspend;	// IMP=0x0000000000029427
- (void)willBecomeActive;	// IMP=0x0000000000029421
- (void)willResignActive;	// IMP=0x000000000002941b
- (id)readPreferenceValue:(id)arg1;	// IMP=0x0000000000029402
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000293e9
- (id)specifier;	// IMP=0x00000000000293d4
- (void)setSpecifier:(id)arg1;	// IMP=0x0000000000029383
- (id)rootController;	// IMP=0x000000000002936a
- (void)setRootController:(id)arg1;	// IMP=0x0000000000029356
- (id)parentController;	// IMP=0x000000000002933d
- (void)setParentController:(id)arg1;	// IMP=0x0000000000029329
- (id)init;	// IMP=0x0000000000029299

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

