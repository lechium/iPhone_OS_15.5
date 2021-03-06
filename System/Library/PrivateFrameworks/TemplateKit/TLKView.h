//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <TemplateKit/TLKObservable-Protocol.h>
#import <TemplateKit/TLKObserver-Protocol.h>

@class NSString, TLKAppearance;
@protocol TLKObserver;

@interface TLKView : UIView <TLKObserver, TLKObservable>
{
    id <TLKObserver> observer;	// 8 = 0x8
    long long batchUpdateCount;	// 16 = 0x10
    UIView *_leadingTextView;	// 24 = 0x18
    UIView *_contentView;	// 32 = 0x20
    TLKAppearance *_tlkAppearance;	// 40 = 0x28
}

+ (void)makeContainerShadowCompatible:(id)arg1;	// IMP=0x000000000002af72
+ (void)enableShadow:(_Bool)arg1 forView:(id)arg2;	// IMP=0x000000000002ae4a
+ (void)enableLightKeylineStroke:(_Bool)arg1 forView:(id)arg2;	// IMP=0x000000000002ad20
+ (Class)layerClass;	// IMP=0x000000000002a7d1
+ (struct UIEdgeInsets)defaultLayoutMargins;	// IMP=0x000000000002a467
- (void).cxx_destruct;	// IMP=0x000000000002b063
@property(retain, nonatomic) TLKAppearance *tlkAppearance; // @synthesize tlkAppearance=_tlkAppearance;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly) UIView *leadingTextView; // @synthesize leadingTextView=_leadingTextView;
@property(nonatomic) long long batchUpdateCount; // @synthesize batchUpdateCount;
@property __weak id <TLKObserver> observer; // @synthesize observer;
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000002acc6
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000002ac58
- (void)layoutSubviews;	// IMP=0x000000000002abc2
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;	// IMP=0x000000000002ab7e
- (void)disableUnbatchedUpdates;	// IMP=0x000000000002ab6a
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a986
- (id)viewForLastBaselineLayout;	// IMP=0x000000000002a8b7
- (id)viewForFirstBaselineLayout;	// IMP=0x000000000002a7e8
- (void)observedPropertiesChanged;	// IMP=0x000000000002a7e2
- (void)layoutMarginsDidChange;	// IMP=0x000000000002a70f
- (struct UIEdgeInsets)effectiveLayoutMargins;	// IMP=0x000000000002a632
- (struct UIEdgeInsets)defaultBaselineRelativeLayoutMargins;	// IMP=0x000000000002a515
- (void)propertiesDidChange;	// IMP=0x000000000002a371
@property(readonly) _Bool usesDefaultLayoutMargins;
- (id)setupContentView;	// IMP=0x000000000002a361
- (id)init;	// IMP=0x000000000002a1e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

