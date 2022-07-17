//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BNConsidering-Protocol.h>
#import <SpringBoard/BNConsideringDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol BNConsideringDelegate, OS_dispatch_queue;

@interface SBBannerAuthority : NSObject <BNConsideringDelegate, BNConsidering>
{
    NSMutableDictionary *_requesterIDsToAuthorities;	// 8 = 0x8
    NSMutableDictionary *_sinks;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_biomeQueue;	// 24 = 0x18
    _Bool _isConfiguringSinks;	// 32 = 0x20
    _Bool _screenSharingActive;	// 33 = 0x21
    id <BNConsideringDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004f7873
@property(getter=_isScreenSharingActive, setter=_setScreenSharingActive:) _Bool screenSharingActive; // @synthesize screenSharingActive=_screenSharingActive;
@property(nonatomic) __weak id <BNConsideringDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_shouldDropPresentableDuringScreenSharing:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000000004f761b
- (_Bool)_shouldDropPresentablesDuringScreenSharing;	// IMP=0x00000000004f75ca
- (void)_configureSinksIfNecessary;	// IMP=0x00000000004f7212
- (long long)_mediatedDecisionFromDecisions:(id)arg1 defaultDecision:(long long)arg2;	// IMP=0x00000000004f7092
- (void)bannerAuthority:(id)arg1 mayChangeDecisionForResponsiblePresentable:(id)arg2;	// IMP=0x00000000004f6fd2
- (long long)shouldOverlapPresentable:(id)arg1 withPresentable:(id)arg2;	// IMP=0x00000000004f6dc0
- (long long)shouldPresentPresentable:(id)arg1 withPresentedPresentables:(id)arg2 responsiblePresentable:(out id *)arg3;	// IMP=0x00000000004f6a07
- (long long)shouldPostPresentable:(id)arg1 userInfo:(id)arg2 reason:(out id *)arg3;	// IMP=0x00000000004f6957
- (void)registerAuthority:(id)arg1 forRequesterIdentifier:(id)arg2;	// IMP=0x00000000004f689f
- (id)init;	// IMP=0x00000000004f6853

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
