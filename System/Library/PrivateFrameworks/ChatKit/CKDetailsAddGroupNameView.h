//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <ChatKit/UITextFieldDelegate-Protocol.h>

@class CKDetailsViewAddGroupNameViewUITextField, NSString, UILabel;
@protocol CKDetailsAddGroupNameViewDelegate;

@interface CKDetailsAddGroupNameView : UIView <UITextFieldDelegate>
{
    _Bool _enabled;	// 8 = 0x8
    id <CKDetailsAddGroupNameViewDelegate> _delegate;	// 16 = 0x10
    NSString *_groupName;	// 24 = 0x18
    UILabel *_placeholderLabel;	// 32 = 0x20
    CKDetailsViewAddGroupNameViewUITextField *_inputField;	// 40 = 0x28
}

+ (double)preferredHeight;	// IMP=0x00000000002b0c24
- (void).cxx_destruct;	// IMP=0x00000000002b1334
@property(retain, nonatomic) CKDetailsViewAddGroupNameViewUITextField *inputField; // @synthesize inputField=_inputField;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) __weak id <CKDetailsAddGroupNameViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x00000000002b1204
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000000002b113b
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000002b10b4
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00000000002b1075
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002b0fb5
- (void)commitGroupName;	// IMP=0x00000000002b0c35
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002b027b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

