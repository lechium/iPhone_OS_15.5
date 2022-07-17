//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSystemGestureRecognizerDelegate-Protocol.h>

@class NSHashTable, NSString, SBFailingSystemGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UIWindow;

@interface SBTransientUIInteractionManager : NSObject <SBSystemGestureRecognizerDelegate>
{
    UIWindow *_window;	// 8 = 0x8
    SBFailingSystemGestureRecognizer *_dismissGestureRecognizer;	// 16 = 0x10
    UITapGestureRecognizer *_unhideTapRecognizer;	// 24 = 0x18
    UITapGestureRecognizer *_unhideDoubleTapRecognizer;	// 32 = 0x20
    UIPanGestureRecognizer *_indirectPanRecognizer;	// 40 = 0x28
    NSHashTable *_tapToDismissParticipants;	// 48 = 0x30
    NSHashTable *_tapToUnhideParticipants;	// 56 = 0x38
    NSHashTable *_indirectPanToParticipants;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000296a98
@property(retain, nonatomic) NSHashTable *indirectPanToParticipants; // @synthesize indirectPanToParticipants=_indirectPanToParticipants;
@property(retain, nonatomic) NSHashTable *tapToUnhideParticipants; // @synthesize tapToUnhideParticipants=_tapToUnhideParticipants;
@property(retain, nonatomic) NSHashTable *tapToDismissParticipants; // @synthesize tapToDismissParticipants=_tapToDismissParticipants;
@property(retain, nonatomic) UIPanGestureRecognizer *indirectPanRecognizer; // @synthesize indirectPanRecognizer=_indirectPanRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *unhideDoubleTapRecognizer; // @synthesize unhideDoubleTapRecognizer=_unhideDoubleTapRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *unhideTapRecognizer; // @synthesize unhideTapRecognizer=_unhideTapRecognizer;
@property(retain, nonatomic) SBFailingSystemGestureRecognizer *dismissGestureRecognizer; // @synthesize dismissGestureRecognizer=_dismissGestureRecognizer;
@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)unregisterParticipantForIndirectPanToDismiss:(id)arg1;	// IMP=0x000000000029690d
- (void)registerParticipantForIndirectPanToDismiss:(id)arg1;	// IMP=0x00000000002967c6
- (void)unregisterParticipantForTapToUnhide:(id)arg1;	// IMP=0x00000000002966b8
- (void)registerParticipantForTapToUnhide:(id)arg1;	// IMP=0x000000000029645c
- (void)unregisterParticipantForTapToDismiss:(id)arg1;	// IMP=0x0000000000296398
- (void)registerParticipantForTapToDismiss:(id)arg1;	// IMP=0x000000000029627b
- (id)viewForSystemGestureRecognizer:(id)arg1;	// IMP=0x000000000029626d
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000296265
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000029609d
- (void)_screenWasIndirectPannedToDismiss:(id)arg1;	// IMP=0x0000000000295f11
- (void)_screenWasTappedToUnhide:(id)arg1;	// IMP=0x0000000000295d9f
- (id)initWithWindow:(id)arg1;	// IMP=0x0000000000295c84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
