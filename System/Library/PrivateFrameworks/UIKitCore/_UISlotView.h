//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UISSlotStyle;
@protocol UISSlotAnyContent;

@interface _UISlotView
{
    NSString *_localization;	// 8 = 0x8
    CDUnknownBlockType _slotStyleResolver;	// 16 = 0x10
    CDUnknownBlockType _slotAnyContentProvider;	// 24 = 0x18
    UISSlotStyle *_currentSlotStyle;	// 32 = 0x20
    struct CGSize _intrinsicContentSize;	// 40 = 0x28
    id <UISSlotAnyContent> _slotContent;	// 56 = 0x38
    unsigned long long _currentGeneration;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000f9f201
- (void)_updateContent;	// IMP=0x0000000000f9ef56
- (void)_overlayView:(id)arg1;	// IMP=0x0000000000f9ed4d
- (void)_slotStyleDidChange:(id)arg1;	// IMP=0x0000000000f9ed43
@property(copy, nonatomic, setter=_setSlotStyleResolver:) CDUnknownBlockType _slotStyleResolver;
@property(copy, nonatomic, setter=_setSlotAnyContentProvider:) CDUnknownBlockType _slotAnyContentProvider;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000f9ec61
- (void)tintColorDidChange;	// IMP=0x0000000000f9eb33
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000f9eb1b
- (void)displayLayer:(id)arg1;	// IMP=0x0000000000f9ea42
- (void)dealloc;	// IMP=0x0000000000f9e958
- (id)init;	// IMP=0x0000000000f9e5d8

@end
