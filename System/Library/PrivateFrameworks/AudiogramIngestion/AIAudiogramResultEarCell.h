//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <AudiogramIngestion/UITextFieldDelegate-Protocol.h>

@class NSNumber, NSString, UILabel, UIStackView, UITextField;
@protocol AIAudiogramResultEarCellDelegate;

@interface AIAudiogramResultEarCell : UITableViewCell <UITextFieldDelegate>
{
    id <AIAudiogramResultEarCellDelegate> _delegate;	// 8 = 0x8
    long long _ear;	// 16 = 0x10
    NSNumber *_frequency;	// 24 = 0x18
    NSNumber *_hearingLevel;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UILabel *_valueUnitLabel;	// 48 = 0x30
    UITextField *_valueTextField;	// 56 = 0x38
    UIStackView *_labelStackView;	// 64 = 0x40
    UIStackView *_verticalStackView;	// 72 = 0x48
}

+ (id)reuseIdentifier;	// IMP=0x000000000001930e
- (void).cxx_destruct;	// IMP=0x000000000001b2d5
@property(retain, nonatomic) UIStackView *verticalStackView; // @synthesize verticalStackView=_verticalStackView;
@property(retain, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property(retain, nonatomic) UITextField *valueTextField; // @synthesize valueTextField=_valueTextField;
@property(retain, nonatomic) UILabel *valueUnitLabel; // @synthesize valueUnitLabel=_valueUnitLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSNumber *hearingLevel; // @synthesize hearingLevel=_hearingLevel;
@property(retain, nonatomic) NSNumber *frequency; // @synthesize frequency=_frequency;
@property(nonatomic) long long ear; // @synthesize ear=_ear;
@property(nonatomic) __weak id <AIAudiogramResultEarCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityLabel;	// IMP=0x000000000001b038
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x000000000001ae5c
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x000000000001adde
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x000000000001ac73
- (void)_textFieldEditingChanged:(id)arg1;	// IMP=0x000000000001ab46
- (void)setKeyboardToolbar:(id)arg1;	// IMP=0x000000000001aad1
- (void)showActive:(_Bool)arg1;	// IMP=0x000000000001a712
- (void)configureLayout;	// IMP=0x000000000001a034
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000019318

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

