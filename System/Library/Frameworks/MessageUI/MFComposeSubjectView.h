//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MessageUI/NSLayoutManagerDelegate-Protocol.h>
#import <MessageUI/UITextViewDelegate-Protocol.h>

@class MFConfirmationButton, NSString, UITextView;
@protocol MFComposeSubjectViewDelegate;

@interface MFComposeSubjectView <NSLayoutManagerDelegate, UITextViewDelegate>
{
    unsigned int _delegateRespondsToTextChange:1;	// 8 = 0x8
    unsigned int _delegateRespondsToWillRemoveContent:1;	// 8 = 0x8
    _Bool _needsExclusionPathUpdate;	// 9 = 0x9
    _Bool _allowsNotifyOption;	// 10 = 0xa
    UITextView *_textView;	// 16 = 0x10
    MFConfirmationButton *_notifyButton;	// 24 = 0x18
    double _trailingButtonMidlineInsetFromLayoutMargin;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000051c6a
@property(nonatomic) double trailingButtonMidlineInsetFromLayoutMargin; // @synthesize trailingButtonMidlineInsetFromLayoutMargin=_trailingButtonMidlineInsetFromLayoutMargin;
@property(nonatomic) _Bool allowsNotifyOption; // @synthesize allowsNotifyOption=_allowsNotifyOption;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void)_textInputDidChange:(id)arg1;	// IMP=0x0000000000051ba0
- (_Bool)_canBecomeFirstResponder;	// IMP=0x0000000000051b98
- (_Bool)endEditing:(_Bool)arg1;	// IMP=0x0000000000051b7b
- (_Bool)isEndEditingText:(id)arg1;	// IMP=0x0000000000051b06
- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;	// IMP=0x0000000000051a63
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x0000000000051919
- (void)textViewDidChange:(id)arg1;	// IMP=0x0000000000051800
@property(nonatomic) _Bool enabled;
@property(nonatomic) __weak id <MFComposeSubjectViewDelegate> delegate; // @dynamic delegate;
@property(copy, nonatomic) NSString *text;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(_Bool)arg3;	// IMP=0x000000000005126c
- (void)displayMetricsDidChange;	// IMP=0x00000000000511da
- (void)layoutSubviews;	// IMP=0x0000000000050b13
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000509f7
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000050916
- (id)_textContainerExclusionPathsWithNotifyButton:(_Bool)arg1;	// IMP=0x000000000005065a
- (void)_updateTextContainerInsets;	// IMP=0x0000000000050585
- (void)refreshPreferredContentSize;	// IMP=0x00000000000504d9
- (void)textViewDidBeginEditing:(id)arg1;	// IMP=0x000000000005042d
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x0000000000050398
- (_Bool)becomeFirstResponder;	// IMP=0x000000000005037b
- (void)_updateExclusionPathsIfNeeded;	// IMP=0x0000000000050240
- (void)setNeedsExclusionPathUpdate;	// IMP=0x0000000000050223
@property(nonatomic, getter=isNotifyOptionSelected) _Bool notifyOptionSelected;
- (void)_configureNotifyGlyphs;	// IMP=0x000000000004fe18
@property(readonly, nonatomic) MFConfirmationButton *notifyButton; // @synthesize notifyButton=_notifyButton;
- (void)_showNotifyButtonIfNeeded;	// IMP=0x000000000004fb54
- (void)dealloc;	// IMP=0x000000000004faa4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004f709

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

