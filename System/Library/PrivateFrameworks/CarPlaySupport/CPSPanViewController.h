//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <CarPlaySupport/CPSLinearFocusProviding-Protocol.h>
#import <CarPlaySupport/CPSPanViewDelegate-Protocol.h>
#import <CarPlaySupport/UIGestureRecognizerDelegate-Protocol.h>

@class CPSPanView, CPSTemplateEnvironment, NSArray, NSString;
@protocol CPSPanEventDelegate;

@interface CPSPanViewController : UIViewController <CPSPanViewDelegate, UIGestureRecognizerDelegate, CPSLinearFocusProviding>
{
    _Bool _rightHandDrive;	// 8 = 0x8
    CPSTemplateEnvironment *_environment;	// 16 = 0x10
    CPSPanView *_panView;	// 24 = 0x18
    id <CPSPanEventDelegate> _panDelegate;	// 32 = 0x20
    NSArray *_nudgeGestureRecognizers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000027d7b
@property(retain, nonatomic) NSArray *nudgeGestureRecognizers; // @synthesize nudgeGestureRecognizers=_nudgeGestureRecognizers;
@property(nonatomic) __weak id <CPSPanEventDelegate> panDelegate; // @synthesize panDelegate=_panDelegate;
@property(retain, nonatomic) CPSPanView *panView; // @synthesize panView=_panView;
@property(readonly, nonatomic) __weak CPSTemplateEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) double sideButtonTopInset;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000000027b5d
- (id)_linearFocusItems;	// IMP=0x000000000002790e
- (id)_linearFocusItemsWithPresentedMapButtons:(id)arg1;	// IMP=0x0000000000027539
- (id)preferredFocusEnvironments;	// IMP=0x0000000000027453
- (void)panView:(id)arg1 panWithDirection:(long long)arg2;	// IMP=0x0000000000027407
- (void)panView:(id)arg1 panEndedWithDirection:(long long)arg2;	// IMP=0x00000000000273bb
- (void)panView:(id)arg1 panBeganWithDirection:(long long)arg2;	// IMP=0x000000000002736f
- (void)_handleNudgeLongPress:(id)arg1;	// IMP=0x00000000000272cd
- (void)_handleNudgeTapped:(id)arg1;	// IMP=0x000000000002724b
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000002711b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000026fde
- (void)viewDidLoad;	// IMP=0x00000000000269b1
- (void)loadView;	// IMP=0x0000000000026944
- (id)initWithEnvironment:(id)arg1;	// IMP=0x00000000000268dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool useRightHandDriveFocusGuide;

@end

