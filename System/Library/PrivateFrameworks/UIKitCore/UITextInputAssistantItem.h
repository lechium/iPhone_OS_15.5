//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIBlurEffect, UIColor;

@interface UITextInputAssistantItem : NSObject
{
    _Bool _allowsHidingShortcuts;	// 8 = 0x8
    _Bool _showsBarButtonItemsInline;	// 9 = 0x9
    _Bool _independentGroupSizes;	// 10 = 0xa
    NSArray *_leadingBarButtonGroups;	// 16 = 0x10
    NSArray *_trailingBarButtonGroups;	// 24 = 0x18
    NSArray *_centerBarButtonGroups;	// 32 = 0x20
    double _marginOverride;	// 40 = 0x28
    UIColor *_detachedBackgroundColor;	// 48 = 0x30
    UIBlurEffect *_detachedBackgroundEffect;	// 56 = 0x38
    UIColor *_detachedTintColor;	// 64 = 0x40
}

+ (id)_keyboardDeleteItem;	// IMP=0x0000000000b745be
@property(retain, nonatomic, getter=_detachedTintColor, setter=_setDetachedTintColor:) UIColor *detachedTintColor; // @synthesize detachedTintColor=_detachedTintColor;
@property(copy, nonatomic, getter=_detachedBackgroundEffect, setter=_setDetachedBackgroundEffect:) UIBlurEffect *detachedBackgroundEffect; // @synthesize detachedBackgroundEffect=_detachedBackgroundEffect;
@property(retain, nonatomic, getter=_detachedBackgroundColor, setter=_setDetachedBackgroundColor:) UIColor *detachedBackgroundColor; // @synthesize detachedBackgroundColor=_detachedBackgroundColor;
@property(nonatomic, getter=_marginOverride, setter=_setMarginOverride:) double marginOverride; // @synthesize marginOverride=_marginOverride;
@property(nonatomic, getter=_independentGroupSizes, setter=_setIndependentGroupSizes:) _Bool independentGroupSizes; // @synthesize independentGroupSizes=_independentGroupSizes;
@property(copy, nonatomic, getter=_centerBarButtonGroups, setter=_setCenterBarButtonGroups:) NSArray *centerBarButtonGroups; // @synthesize centerBarButtonGroups=_centerBarButtonGroups;
@property(nonatomic, getter=_showsBarButtonItemsInline, setter=_setShowsBarButtonItemsInline:) _Bool showsBarButtonItemsInline; // @synthesize showsBarButtonItemsInline=_showsBarButtonItemsInline;
@property(copy, nonatomic) NSArray *trailingBarButtonGroups; // @synthesize trailingBarButtonGroups=_trailingBarButtonGroups;
@property(copy, nonatomic) NSArray *leadingBarButtonGroups; // @synthesize leadingBarButtonGroups=_leadingBarButtonGroups;
@property(nonatomic) _Bool allowsHidingShortcuts; // @synthesize allowsHidingShortcuts=_allowsHidingShortcuts;
- (id)description;	// IMP=0x0000000000b743ce
@property(readonly, nonatomic, getter=_requiresPredictionDisabled) _Bool requiresPredictionDisabled;
@property(readonly, nonatomic, getter=_hasItemsToDisplay) _Bool hasItemsToDisplay;
@property(readonly, nonatomic, getter=_isSystemItem) _Bool systemItem;
- (void)dealloc;	// IMP=0x0000000000b741f5
- (id)init;	// IMP=0x0000000000b74187

@end

