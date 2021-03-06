//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoverSheet/BSDescriptionProviding-Protocol.h>

@class NSMutableSet, NSString, SBSLockScreenContentAction, UIView, UIViewController;
@protocol CSAdjunctItemHosting;

@interface CSAdjunctListItem : NSObject <BSDescriptionProviding>
{
    NSMutableSet *_actions;	// 8 = 0x8
    _Bool _animatePresentation;	// 16 = 0x10
    _Bool _animateDismissal;	// 17 = 0x11
    UIView *itemView;	// 24 = 0x18
    UIViewController<CSAdjunctItemHosting> *contentHost;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000090d2b
@property(nonatomic) _Bool animateDismissal; // @synthesize animateDismissal=_animateDismissal;
@property(nonatomic) _Bool animatePresentation; // @synthesize animatePresentation=_animatePresentation;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) UIViewController<CSAdjunctItemHosting> *contentHost; // @synthesize contentHost;
@property(retain, nonatomic) UIView *itemView; // @synthesize itemView;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000090b89
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000090b39
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000090b1d
- (id)succinctDescription;	// IMP=0x0000000000090acd
@property(readonly, copy) NSString *description;
- (_Bool)isValid;	// IMP=0x0000000000090a9c
- (void)removeAction:(id)arg1;	// IMP=0x0000000000090a86
- (void)addAction:(id)arg1;	// IMP=0x0000000000090a70
@property(readonly, nonatomic) SBSLockScreenContentAction *action;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000000909ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

