//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIViewRepresentingKeyboardLayout-Protocol.h>

@class UIKeyboardDockItem;
@protocol UIKeyboardDockViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardDockView <_UIViewRepresentingKeyboardLayout>
{
    id <UIKeyboardDockViewDelegate> _delegate;	// 8 = 0x8
    UIKeyboardDockItem *_leftDockItem;	// 16 = 0x10
    UIKeyboardDockItem *_rightDockItem;	// 24 = 0x18
    UIKeyboardDockItem *_centerDockItem;	// 32 = 0x20
}

+ (id)dockViewHomeGestureExclusionZones;	// IMP=0x0000000000a762c4
+ (CDStruct_b7523c42)_itemFramesForBoundingSize:(struct CGSize)arg1;	// IMP=0x0000000000a75e27
+ (long long)_currentInterfaceOrientation;	// IMP=0x0000000000a75da6
- (void).cxx_destruct;	// IMP=0x0000000000a77693
@property(retain, nonatomic) UIKeyboardDockItem *centerDockItem; // @synthesize centerDockItem=_centerDockItem;
@property(retain, nonatomic) UIKeyboardDockItem *rightDockItem; // @synthesize rightDockItem=_rightDockItem;
@property(retain, nonatomic) UIKeyboardDockItem *leftDockItem; // @synthesize leftDockItem=_leftDockItem;
@property(nonatomic) __weak id <UIKeyboardDockViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_keyboardLongPressInteractionRegions;	// IMP=0x0000000000a7741d
- (id)_keyboardLayoutView;	// IMP=0x0000000000a77379
- (void)layoutSubviews;	// IMP=0x0000000000a76a81
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000a76a6b
- (void)_didReceiveHandBiasChangeNotification:(id)arg1;	// IMP=0x0000000000a76a59
- (id)_dockItemWithButton:(id)arg1;	// IMP=0x0000000000a76704
- (void)_configureDockItem:(id)arg1;	// IMP=0x0000000000a7664a
- (void)_dockItemButtonWasTapped:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000a7657d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000a764d8
- (void)dealloc;	// IMP=0x0000000000a76463

@end

