//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/BNBannerSourceDelegate-Protocol.h>
#import <UserNotificationsUIKit/BNBannerSourceProvidingPrivate-Protocol.h>
#import <UserNotificationsUIKit/BNPresentableObserving-Protocol.h>

@class BNBannerSource, NSPointerArray, NSString, NSTimer;
@protocol BNBannerSourceDelegate;

@interface NCCarPlayBannerSource : NSObject <BNBannerSourceDelegate, BNPresentableObserving, BNBannerSourceProvidingPrivate>
{
    BNBannerSource *_bannerSource;	// 8 = 0x8
    NSPointerArray *_postedPresentables;	// 16 = 0x10
    id <BNBannerSourceDelegate> delegate;	// 24 = 0x18
    NSTimer *_dismissTimer;	// 32 = 0x20
    NSTimer *_replaceTimer;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x00000000000f13fc
- (void).cxx_destruct;	// IMP=0x00000000000f2ecf
@property(retain, nonatomic, getter=_replaceTimer, setter=_setReplaceTimer:) NSTimer *replaceTimer; // @synthesize replaceTimer=_replaceTimer;
@property(retain, nonatomic, getter=_dismissTimer, setter=_setDismissTimer:) NSTimer *dismissTimer; // @synthesize dismissTimer=_dismissTimer;
@property(nonatomic) __weak id <BNBannerSourceDelegate> delegate; // @synthesize delegate;
- (void)_cancelReplaceTimer;	// IMP=0x00000000000f2e40
- (void)_startReplaceTimer;	// IMP=0x00000000000f2cd8
- (void)_revokePreviouslyPostedPresentableIfPossible;	// IMP=0x00000000000f2b2d
- (void)_cancelDismissTimer;	// IMP=0x00000000000f2afb
- (void)_startDismissTimerWithTimeInterval:(double)arg1;	// IMP=0x00000000000f28af
- (void)_startDismissTimer;	// IMP=0x00000000000f2895
- (void)_allPresentablesDidDisappear;	// IMP=0x00000000000f27c2
- (void)_presentableWithIdentificationDidDisappear:(id)arg1;	// IMP=0x00000000000f2726
- (void)_presentableDidDisappear:(id)arg1;	// IMP=0x00000000000f2617
- (unsigned long long)_postedPresentableCount;	// IMP=0x00000000000f25ae
- (id)_pullPostedPresentableAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f24d7
- (unsigned long long)_indexOfPostedPresentable:(id)arg1;	// IMP=0x00000000000f23f6
- (id)_postedPresentablesWithIdentification:(id)arg1;	// IMP=0x00000000000f22e1
- (id)_peekPostedPresentable;	// IMP=0x00000000000f224f
- (void)_enqueuePostedPresentable:(id)arg1;	// IMP=0x00000000000f21a8
- (_Bool)_setSuspended:(_Bool)arg1 forReason:(id)arg2 revokingCurrent:(_Bool)arg3;	// IMP=0x00000000000f2129
- (_Bool)_isPresentableSticky:(id)arg1;	// IMP=0x00000000000f2065
- (id)_bannerSource;	// IMP=0x00000000000f1fcd
- (void)bannerSourceDidInvalidate:(id)arg1;	// IMP=0x00000000000f1fb3
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x00000000000f1fa1
- (void)presentableDidAppearAsBanner:(id)arg1;	// IMP=0x00000000000f1ef2
- (_Bool)setSuspended:(_Bool)arg1 forReason:(id)arg2 revokingCurrent:(_Bool)arg3 error:(out id *)arg4;	// IMP=0x00000000000f1e6a
- (id)keyWindowForScreen:(id)arg1;	// IMP=0x00000000000f1dfc
- (id)revokePresentableWithIdentification:(id)arg1 reason:(id)arg2 animated:(_Bool)arg3 userInfo:(id)arg4 error:(out id *)arg5;	// IMP=0x00000000000f1acd
- (void)invalidate;	// IMP=0x00000000000f1a8f
- (id)revokeAllPresentablesWithReason:(id)arg1 userInfo:(id)arg2 error:(out id *)arg3;	// IMP=0x00000000000f19d3
- (id)revokePresentableWithRequestIdentifier:(id)arg1 reason:(id)arg2 animated:(_Bool)arg3 userInfo:(id)arg4 error:(out id *)arg5;	// IMP=0x00000000000f17a6
- (_Bool)postPresentable:(id)arg1 options:(unsigned long long)arg2 userInfo:(id)arg3 error:(out id *)arg4;	// IMP=0x00000000000f1570
- (id)layoutDescriptionWithError:(out id *)arg1;	// IMP=0x00000000000f1511
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, copy, nonatomic) NSString *requesterIdentifier;
@property(readonly, nonatomic) long long destination;
- (void)_startAnnounceDismissalTimer;	// IMP=0x00000000000f2fc6
- (void)didFinishAnnounceForNotificationRequest:(id)arg1;	// IMP=0x00000000000f2f44
- (void)didBeginAnnounceForNotificationRequest:(id)arg1;	// IMP=0x00000000000f2f16

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
