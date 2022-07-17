//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/UIGestureRecognizerDelegate-Protocol.h>

@class MKVibrantLabel, NSLayoutConstraint, NSString, UILongPressGestureRecognizer, _MKUILabel;
@protocol NSItemProviderWriting;

__attribute__((visibility("hidden")))
@interface MKPlaceEncyclopedicFactoidView <UIGestureRecognizerDelegate>
{
    UILongPressGestureRecognizer *_longPressRecognizer;	// 8 = 0x8
    NSLayoutConstraint *_baselineToTopConstraint;	// 16 = 0x10
    NSLayoutConstraint *_baselineToBottomConstraint;	// 24 = 0x18
    NSLayoutConstraint *_baselineToBaselineConstraint;	// 32 = 0x20
    _Bool _isStandAlone;	// 40 = 0x28
    MKVibrantLabel *_keyLabel;	// 48 = 0x30
    _MKUILabel *_valueLabel;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001ffa60
@property(retain, nonatomic) _MKUILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) MKVibrantLabel *keyLabel; // @synthesize keyLabel=_keyLabel;
- (void)_menuDismissed:(id)arg1;	// IMP=0x00000000001ff96c
- (void)_handleLongPress:(id)arg1;	// IMP=0x00000000001ff825
- (void)copy:(id)arg1;	// IMP=0x00000000001ff784
@property(readonly, nonatomic) id <NSItemProviderWriting> draggableContent;
- (void)_contentSizeDidChange;	// IMP=0x00000000001ff5b6
- (id)_keyLabelFont;	// IMP=0x00000000001ff55f
- (void)setUpConstraints;	// IMP=0x00000000001ff137
- (id)_valueLabelWithString:(id)arg1;	// IMP=0x00000000001fefcc
- (id)_keyLabelWithString:(id)arg1;	// IMP=0x00000000001feeee
- (id)initWithTextItem:(id)arg1 isStandAloneFactoid:(_Bool)arg2;	// IMP=0x00000000001feced

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
