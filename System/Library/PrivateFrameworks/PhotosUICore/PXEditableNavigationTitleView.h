//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/UITextFieldDelegate-Protocol.h>

@class NSString, _PXEditableNavigationTitleTextField;
@protocol PXEditableNavigationTitleViewDelegate;

@interface PXEditableNavigationTitleView : UIView <UITextFieldDelegate>
{
    struct {
        _Bool textColor;
    } _needsUpdateFlags;	// 8 = 0x8
    _Bool _isPerformingUpdates;	// 9 = 0x9
    struct {
        _Bool validateNewText;
        _Bool didEndEditing;
    } _delegateRespondsTo;	// 10 = 0xa
    _Bool _editing;	// 12 = 0xc
    id <PXEditableNavigationTitleViewDelegate> _delegate;	// 16 = 0x10
    NSString *_text;	// 24 = 0x18
    _PXEditableNavigationTitleTextField *_textField;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000022c605
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(readonly, nonatomic) _PXEditableNavigationTitleTextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak id <PXEditableNavigationTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;	// IMP=0x000000000022c3c5
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x000000000022c3ab
- (void)_textFieldTextDidChange:(id)arg1;	// IMP=0x000000000022c399
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x000000000022c382
- (void)_updateTextColorIfNeeded;	// IMP=0x000000000022c2d8
- (void)_invalidateTextColor;	// IMP=0x000000000022c2bb
- (void)_updateIfNeeded;	// IMP=0x000000000022c26e
- (void)_setNeedsUpdate;	// IMP=0x000000000022c24d
- (_Bool)_needsUpdate;	// IMP=0x000000000022c23d
- (void)tintColorDidChange;	// IMP=0x000000000022c1fc
- (void)layoutSubviews;	// IMP=0x000000000022c17a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000022c10c
- (void)endEditing;	// IMP=0x000000000022c0ca
- (void)dealloc;	// IMP=0x000000000022beee
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000022be6b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000022bcff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
