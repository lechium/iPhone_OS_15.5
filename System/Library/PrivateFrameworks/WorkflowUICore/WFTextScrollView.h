//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

#import <WorkflowUICore/UITextViewDelegate-Protocol.h>

@class NSObject, NSString, UITextView;
@protocol UITextViewDelegate;

@interface WFTextScrollView : UIScrollView <UITextViewDelegate>
{
    _Bool _adjustmentEnabled;	// 8 = 0x8
    UITextView *_textView;	// 16 = 0x10
    NSObject<UITextViewDelegate> *_textViewDelegate;	// 24 = 0x18
    struct _NSRange _selectedRange;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000a14dc
@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
@property(nonatomic) __weak NSObject<UITextViewDelegate> *textViewDelegate; // @synthesize textViewDelegate=_textViewDelegate;
@property(nonatomic, getter=isAdjustmentEnabled) _Bool adjustmentEnabled; // @synthesize adjustmentEnabled=_adjustmentEnabled;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000a1357
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000a129b
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000a1223
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x00000000000a1158
- (void)textViewDidChangeSelection:(id)arg1;	// IMP=0x00000000000a0e8a
- (void)textUpdated;	// IMP=0x00000000000a0e3a
- (void)layoutSubviews;	// IMP=0x00000000000a0b24
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000a0aca
- (_Bool)resignFirstResponder;	// IMP=0x00000000000a0aad
- (_Bool)becomeFirstResponder;	// IMP=0x00000000000a0a90
- (_Bool)canBecomeFocused;	// IMP=0x00000000000a0a73
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000000a0a56
- (void)dealloc;	// IMP=0x00000000000a09cc
- (id)initWithTextView:(id)arg1;	// IMP=0x00000000000a08a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
