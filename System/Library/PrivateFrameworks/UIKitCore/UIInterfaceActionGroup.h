//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/UIInterfaceActionDisplayPropertyObserver-Protocol.h>

@class NSArray, NSPointerArray, NSString, UIInterfaceAction, UIInterfaceActionVisualStyle;

@interface UIInterfaceActionGroup : NSObject <UIInterfaceActionDisplayPropertyObserver, NSCopying>
{
    NSArray *_actions;	// 8 = 0x8
    UIInterfaceAction *_preferredAction;	// 16 = 0x10
    NSPointerArray *_weakDisplayPropertyObservers;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSArray *_actionsBySection;	// 40 = 0x28
    UIInterfaceActionVisualStyle *_visualStyle;	// 48 = 0x30
    struct CGSize _leadingImageLayoutSize;	// 56 = 0x38
    struct CGSize _trailingImageLayoutSize;	// 72 = 0x48
}

+ (id)actionGroupWithActionsBySection:(id)arg1;	// IMP=0x0000000000029efc
+ (id)actionGroupWithActions:(id)arg1;	// IMP=0x0000000000029e17
+ (_Bool)changedProperties:(id)arg1 containsAny:(id)arg2;	// IMP=0x0000000000029c76
- (void).cxx_destruct;	// IMP=0x000000000002b7a4
@property(retain, nonatomic, getter=_visualStyle, setter=_setVisualStyle:) UIInterfaceActionVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;
@property(readonly, nonatomic) struct CGSize trailingImageLayoutSize; // @synthesize trailingImageLayoutSize=_trailingImageLayoutSize;
@property(readonly, nonatomic) struct CGSize leadingImageLayoutSize; // @synthesize leadingImageLayoutSize=_leadingImageLayoutSize;
@property(readonly, nonatomic) NSArray *actionsBySection; // @synthesize actionsBySection=_actionsBySection;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSPointerArray *weakDisplayPropertyObservers; // @synthesize weakDisplayPropertyObservers=_weakDisplayPropertyObservers;
@property(retain, nonatomic) UIInterfaceAction *preferredAction; // @synthesize preferredAction=_preferredAction;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (id)_deepCopyOfActionsBySection;	// IMP=0x000000000002b5bc
- (void)_endObservingActions;	// IMP=0x000000000002b48e
- (void)_beginObservingActions;	// IMP=0x000000000002b360
- (void)_performWithActionObservingDisabled:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b309
- (void)_notifyObserversDidChangeActionProperty:(id)arg1;	// IMP=0x000000000002b169
- (void)_notifyObserversVisualStyleDidChange;	// IMP=0x000000000002b019
- (void)_reloadImageLayoutSizesUsingExistingActionImages;	// IMP=0x000000000002a99d
- (void)_updateActionImageLayoutSizes;	// IMP=0x000000000002a8c3
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;	// IMP=0x000000000002a8bd
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;	// IMP=0x000000000002a73d
- (void)_removeActionGroupDisplayPropertyObserver:(id)arg1;	// IMP=0x000000000002a686
- (void)_addActionGroupDisplayPropertyObserver:(id)arg1;	// IMP=0x000000000002a626
- (void)setTrailingImageLayoutSize:(struct CGSize)arg1;	// IMP=0x000000000002a2e9
- (void)setLeadingImageLayoutSize:(struct CGSize)arg1;	// IMP=0x000000000002a2b1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002a202
@property(readonly, copy) NSString *description;
- (id)initWithTitle:(id)arg1 actionsBySection:(id)arg2;	// IMP=0x0000000000029f4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

