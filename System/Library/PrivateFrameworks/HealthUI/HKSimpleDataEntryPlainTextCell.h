//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/UITextFieldDelegate-Protocol.h>

@class HKCaretOptionalTextField, NSArray, NSNumber, NSString, UILabel, UIView;
@protocol HKSimpleDataEntryCellDelegate;

@interface HKSimpleDataEntryPlainTextCell <UITextFieldDelegate>
{
    UIView *_horizontalSeparator;	// 8 = 0x8
    NSNumber *_characterCountLimit;	// 16 = 0x10
    _Bool _editDisabled;	// 24 = 0x18
    NSArray *_regularConstraints;	// 32 = 0x20
    NSArray *_largeTextConstraints;	// 40 = 0x28
    id <HKSimpleDataEntryCellDelegate> _delegate;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    HKCaretOptionalTextField *_inputTextField;	// 64 = 0x40
    NSString *_lastChangedText;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000eabc0
@property(retain, nonatomic) NSString *lastChangedText; // @synthesize lastChangedText=_lastChangedText;
@property(retain, nonatomic) HKCaretOptionalTextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <HKSimpleDataEntryCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_informDelegateForContentChange;	// IMP=0x00000000000eaa97
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000000eaa54
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x00000000000ea942
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000000000ea8c8
- (void)textFieldDidChangeValue:(id)arg1;	// IMP=0x00000000000ea8b6
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x00000000000ea8a2
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000ea7a8
- (void)setEditDisabled:(_Bool)arg1;	// IMP=0x00000000000ea798
- (_Bool)editDisabled;	// IMP=0x00000000000ea788
- (void)beginEditing;	// IMP=0x00000000000ea76b
- (void)_updateForCurrentSizeCategory;	// IMP=0x00000000000ea6f1
- (void)_setupLayoutConstraints;	// IMP=0x00000000000ea06a
- (void)layoutMarginsDidChange;	// IMP=0x00000000000e9fd9
- (void)_setupLabels;	// IMP=0x00000000000e9f04
- (void)_setupInputTextFieldWithIntention:(long long)arg1;	// IMP=0x00000000000e9c74
- (id)initWithIntention:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000e996c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

