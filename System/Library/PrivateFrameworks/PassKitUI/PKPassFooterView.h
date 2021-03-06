//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKForegroundActiveArbiterObserver-Protocol.h>
#import <PassKitUI/PKPassFooterContentViewDelegate-Protocol.h>
#import <PassKitUI/PKUIForegroundActiveArbiterDeactivationObserver-Protocol.h>

@class NSObject, NSString, PKPassFooterContentView, PKPassFooterViewConfiguration, PKPaymentSessionHandle;
@protocol OS_dispatch_group, OS_dispatch_source, PKPassFooterViewDelegate;

@interface PKPassFooterView : UIView <PKPassFooterContentViewDelegate, PKForegroundActiveArbiterObserver, PKUIForegroundActiveArbiterDeactivationObserver>
{
    PKPassFooterContentView *_contentView;	// 8 = 0x8
    PKPassFooterContentView *_fadingContentView;	// 16 = 0x10
    _Bool _fadingContentViewNeedsDidHide;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_sessionStartTimer;	// 32 = 0x20
    _Bool _isBackgrounded;	// 40 = 0x28
    _Bool _isAssistantActive;	// 41 = 0x29
    _Bool _acquiringSession;	// 42 = 0x2a
    unsigned long long _sessionToken;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_sessionDelayGroup;	// 56 = 0x38
    PKPaymentSessionHandle *_sessionHandle;	// 64 = 0x40
    _Bool _invalidated;	// 72 = 0x48
    unsigned char _visibility;	// 73 = 0x49
    unsigned char _contentViewVisibility;	// 74 = 0x4a
    _Bool _physicalButtonRequired;	// 75 = 0x4b
    PKPassFooterViewConfiguration *_configuration;	// 80 = 0x50
    long long _coachingState;	// 88 = 0x58
    id <PKPassFooterViewDelegate> _delegate;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000046a9f0
@property(nonatomic) __weak id <PKPassFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long coachingState; // @synthesize coachingState=_coachingState;
@property(readonly, nonatomic, getter=isPhysicalButtonRequired) _Bool physicalButtonRequired; // @synthesize physicalButtonRequired=_physicalButtonRequired;
@property(readonly, nonatomic) PKPassFooterViewConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)_messageForPaymentApplicationState;	// IMP=0x000000000046a0ce
- (id)_messageForPeerPaymentLockedByOwner;	// IMP=0x0000000000469f99
- (id)_messageForPeerPaymentZeroBalance;	// IMP=0x0000000000469d0d
- (id)_messageForRestrictedState;	// IMP=0x0000000000469c67
- (id)_messageForUnavailableState;	// IMP=0x0000000000469b61
- (id)_messageContentViewFromMessage:(id)arg1;	// IMP=0x0000000000469abd
- (void)_lostModeButtonTapped;	// IMP=0x0000000000469910
- (_Bool)_canApplyContentViewForValueAddedService;	// IMP=0x00000000004698a2
- (_Bool)_canApplyContentViewForPersonalizedApplication;	// IMP=0x0000000000469834
- (void)_endSessionStartTimer;	// IMP=0x00000000004697fa
- (void)_endSession;	// IMP=0x000000000046967c
- (void)_advanceContentViewVisibilityToState:(unsigned char)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000469530
- (void)_advanceVisibilityToState:(unsigned char)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000469475
- (void)_setCoachingState:(long long)arg1;	// IMP=0x0000000000469423
- (void)_setPhysicalButtonRequired:(_Bool)arg1;	// IMP=0x00000000004693bf
- (void)_commitContentViewAnimated:(_Bool)arg1;	// IMP=0x0000000000469275
- (void)_setContentView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000468b2f
- (void)_configureForValueAddedServiceWithContext:(id)arg1;	// IMP=0x0000000000468811
- (void)_configureForPersonalizedPaymentApplicationWithContext:(id)arg1;	// IMP=0x0000000000468486
- (void)_acquireContactlessInterfaceSessionWithSessionToken:(unsigned long long)arg1 shouldForceSessionAcquisition:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000467b85
- (long long)_acquireContactlessInterfaceSessionErrorActionForError:(id)arg1;	// IMP=0x0000000000467b6d
- (void)_startContactlessInterfaceSessionWithContext:(id)arg1 shouldForceSessionAcquisition:(_Bool)arg2 sessionAvailable:(CDUnknownBlockType)arg3 sessionUnavailable:(CDUnknownBlockType)arg4;	// IMP=0x0000000000467348
- (void)_configureWithConfiguration:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000467007
- (void)_updateForNonForegroundActivePresentationAnimated:(_Bool)arg1;	// IMP=0x0000000000466fbb
- (void)_updateForForegroundActivePresentationIfNecessaryAnimated:(_Bool)arg1;	// IMP=0x0000000000466f7d
- (void)passFooterContentViewDidChangePileSuppressionRequirement:(id)arg1;	// IMP=0x0000000000466f21
- (unsigned long long)suppressedContentForContentView:(id)arg1;	// IMP=0x0000000000466e66
- (_Bool)isPassFooterContentViewInGroup:(id)arg1;	// IMP=0x0000000000466dfe
- (void)foregroundActiveArbiter:(id)arg1 didUpdateDeactivationReasons:(unsigned int)arg2;	// IMP=0x0000000000466d8f
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_973bafd3)arg2;	// IMP=0x0000000000466d1e
- (void)passFooterContentViewDidChangeCoachingState:(id)arg1;	// IMP=0x0000000000466cd8
- (void)passFooterContentViewDidChangePhysicalButtonRequirement:(id)arg1;	// IMP=0x0000000000466c92
- (void)passFooterContentViewRequestsSessionSuppression:(id)arg1;	// IMP=0x0000000000466b88
- (void)passFooterContentViewDidInvalidateAuthorizedBarcode:(id)arg1;	// IMP=0x0000000000466aed
- (void)passFooterContentView:(id)arg1 didAuthorizeAndRetrieveDecryptedBarcode:(id)arg2;	// IMP=0x0000000000466a2d
- (void)passFooterContentViewDidTransact:(id)arg1;	// IMP=0x00000000004669e5
- (void)passFooterContentViewDidAuthenticate:(id)arg1;	// IMP=0x000000000046699d
- (_Bool)passFooterContentViewShouldAuthenticate:(id)arg1;	// IMP=0x000000000046694e
- (void)showFullScreenBarcode;	// IMP=0x0000000000466931
- (_Bool)isViewCurrentContentView:(id)arg1;	// IMP=0x000000000046691d
@property(readonly, nonatomic) _Bool requestPileSuppression;
@property(readonly, nonatomic, getter=isPassAuthorized) _Bool passAuthorized;
- (void)invalidate;	// IMP=0x00000000004667e4
- (void)configureWithConfiguration:(id)arg1 context:(id)arg2 options:(CDStruct_d7010776)arg3;	// IMP=0x0000000000466310
- (void)didBecomeHiddenAnimated:(_Bool)arg1;	// IMP=0x00000000004662fa
- (void)didBecomeVisibleAnimated:(_Bool)arg1;	// IMP=0x00000000004662e1
- (void)willBecomeHiddenAnimated:(_Bool)arg1;	// IMP=0x00000000004662c8
- (void)willBecomeVisibleAnimated:(_Bool)arg1;	// IMP=0x00000000004662af
- (void)layoutSubviews;	// IMP=0x00000000004661fc
- (void)dealloc;	// IMP=0x00000000004660f4
- (id)init;	// IMP=0x000000000046600a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000465ffc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

