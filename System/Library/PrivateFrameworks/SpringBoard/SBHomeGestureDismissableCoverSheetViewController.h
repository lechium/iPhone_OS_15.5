//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

#import <SpringBoard/SBFZStackParticipantDelegate-Protocol.h>
#import <SpringBoard/SBHomeGestureParticipantDelegate-Protocol.h>
#import <SpringBoard/SBSystemGestureRecognizerDelegate-Protocol.h>

@class NSString, SBFZStackParticipant, SBHomeGesturePanGestureRecognizer, SBHomeGestureParticipant;

@interface SBHomeGestureDismissableCoverSheetViewController : CSCoverSheetViewControllerBase <SBHomeGestureParticipantDelegate, SBSystemGestureRecognizerDelegate, SBFZStackParticipantDelegate>
{
    _Bool _wantsHomeGestureOwnership;	// 8 = 0x8
    SBHomeGesturePanGestureRecognizer *_bottomEdgeRecognizer;	// 16 = 0x10
    SBHomeGestureParticipant *_homeGestureParticipant;	// 24 = 0x18
    SBFZStackParticipant *_zStackParticipant;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000019bc83
@property(retain, nonatomic) SBFZStackParticipant *zStackParticipant; // @synthesize zStackParticipant=_zStackParticipant;
@property(retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant; // @synthesize homeGestureParticipant=_homeGestureParticipant;
@property(nonatomic) _Bool wantsHomeGestureOwnership; // @synthesize wantsHomeGestureOwnership=_wantsHomeGestureOwnership;
@property(retain, nonatomic) SBHomeGesturePanGestureRecognizer *bottomEdgeRecognizer; // @synthesize bottomEdgeRecognizer=_bottomEdgeRecognizer;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000019bbd9
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000019bb35
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000019bb2d
- (id)viewForSystemGestureRecognizer:(id)arg1;	// IMP=0x000000000019bb1b
- (void)_handleBottomEdgeGestureEnded:(id)arg1;	// IMP=0x000000000019bad7
- (void)_handleBottomEdgeGestureChanged:(id)arg1;	// IMP=0x000000000019bad1
- (void)_handleBottomEdgeGestureBegan:(id)arg1;	// IMP=0x000000000019bacb
- (void)_handleBottomEdgeGesture:(id)arg1;	// IMP=0x000000000019ba73
- (void)_addOrRemoveGestureForCurrentSettings;	// IMP=0x000000000019b8b1
- (void)_relinquishHomeGestureOwnership;	// IMP=0x000000000019b7bb
- (void)_requestHomeGestureOwnership;	// IMP=0x000000000019b5cb
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;	// IMP=0x000000000019b57e
- (void)zStackParticipantDidChange:(id)arg1;	// IMP=0x000000000019b47e
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;	// IMP=0x000000000019b44c
@property(readonly, nonatomic) long long zStackParticipantIdentifier;
@property(readonly, nonatomic) long long homeGestureParticipantIdentifier;
- (_Bool)shouldDismissForHomeGestureRecognizer:(id)arg1;	// IMP=0x000000000019b42e
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000019b3ed
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000019b3ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

