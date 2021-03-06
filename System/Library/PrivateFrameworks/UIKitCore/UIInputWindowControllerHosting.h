//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UIInputWindowController;

__attribute__((visibility("hidden")))
@interface UIInputWindowControllerHosting : NSObject
{
    NSMutableArray *_hostingItems;	// 8 = 0x8
    unsigned long long _currentState;	// 16 = 0x10
    _Bool _requiresConstraintUpdate;	// 24 = 0x18
    int _extraHostsRequired;	// 28 = 0x1c
    UIInputWindowController *_owner;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000a5c66d
@property(nonatomic) _Bool requiresConstraintUpdate; // @synthesize requiresConstraintUpdate=_requiresConstraintUpdate;
@property(nonatomic) int extraHostsRequired; // @synthesize extraHostsRequired=_extraHostsRequired;
@property(nonatomic) __weak UIInputWindowController *owner; // @synthesize owner=_owner;
- (unsigned long long)indexOfHost:(id)arg1;	// IMP=0x0000000000a5c615
- (_Bool)host:(id)arg1 isForPurpose:(unsigned long long)arg2;	// IMP=0x0000000000a5c576
- (id)expectedPlacementForHost:(id)arg1;	// IMP=0x0000000000a5c459
- (id)placementForHost:(id)arg1;	// IMP=0x0000000000a5c3c1
- (id)subPlacementFromPlacement:(id)arg1 forHost:(id)arg2;	// IMP=0x0000000000a5c30d
- (struct CGRect)visibleFrame;	// IMP=0x0000000000a5c2ad
- (void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2;	// IMP=0x0000000000a5c15c
- (void)updateViewSizingConstraints;	// IMP=0x0000000000a5c143
- (void)clearInputAssistantViewEdgeConstraints;	// IMP=0x0000000000a5c12a
- (void)clearInputAccessoryViewEdgeConstraints;	// IMP=0x0000000000a5c111
- (void)resetInputViewVisibility;	// IMP=0x0000000000a5c0f8
- (void)clearInputViewEdgeConstraints;	// IMP=0x0000000000a5c0df
- (void)_updateBackdropViews;	// IMP=0x0000000000a5c0c6
- (void)layoutIfNeeded;	// IMP=0x0000000000a5bf4e
- (void)performForInputAccessoryBackdropViews:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a5bdcb
- (void)setNeedsLayout;	// IMP=0x0000000000a5bc53
- (void)removeAllAnimations;	// IMP=0x0000000000a5bbe4
- (void)disableViewSizingConstraints:(unsigned long long)arg1 forNewView:(id)arg2;	// IMP=0x0000000000a5ba7b
- (void)updateEmptyHeightConstraint;	// IMP=0x0000000000a5ba62
- (void)updateConstraintInsets;	// IMP=0x0000000000a5ba49
- (void)resetBackdropHeight;	// IMP=0x0000000000a5ba30
- (void)initializeTranslateGestureRecognizerIfNecessary;	// IMP=0x0000000000a5ba17
- (void)updateViewConstraints;	// IMP=0x0000000000a5b89d
- (struct UIEdgeInsets)_inputViewPadding;	// IMP=0x0000000000a5b557
- (id)itemForPurpose:(unsigned long long)arg1;	// IMP=0x0000000000a5b4a5
- (void)reloadForPlacement;	// IMP=0x0000000000a5adf9
- (void)unloadForPlacement;	// IMP=0x0000000000a5addc
@property(readonly, retain, nonatomic) NSArray *allHostingItems;
- (id)initWithHost:(id)arg1;	// IMP=0x0000000000a5abdc

@end

