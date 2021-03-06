//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextView.h>

#import <ChatKit/NSLayoutManagerDelegate-Protocol.h>
#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>
#import <ChatKit/UITextViewDelegate-Protocol.h>

@class NSAttributedString, NSString, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol CKBalloonTextViewInteractionDelegate;

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate, UIGestureRecognizerDelegate, UITextViewDelegate>
{
    _Bool _fakeSelected;	// 8 = 0x8
    NSAttributedString *_attributedText;	// 16 = 0x10
    id <CKBalloonTextViewInteractionDelegate> _interactionDelegate;	// 24 = 0x18
    UITapGestureRecognizer *_tapGestureRecognizer;	// 32 = 0x20
    UIPanGestureRecognizer *_dragGestureRecognizer;	// 40 = 0x28
    struct _NSRange __selectedRange;	// 48 = 0x30
}

+ (id)textView;	// IMP=0x00000000004bf88c
- (void).cxx_destruct;	// IMP=0x00000000004c0e60
@property(nonatomic) struct _NSRange _selectedRange; // @synthesize _selectedRange=__selectedRange;
@property(retain, nonatomic) UIPanGestureRecognizer *dragGestureRecognizer; // @synthesize dragGestureRecognizer=_dragGestureRecognizer;
@property(nonatomic, getter=isFakeSelected) _Bool fakeSelected; // @synthesize fakeSelected=_fakeSelected;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) __weak id <CKBalloonTextViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (_Bool)_showsEditMenu;	// IMP=0x00000000004c0d76
- (void)setBalloonTextSelectedRange:(struct _NSRange)arg1;	// IMP=0x00000000004c0c89
- (_Bool)becomeFirstResponder;	// IMP=0x00000000004c0bef
- (_Bool)resignFirstResponder;	// IMP=0x00000000004c0b57
- (void)_updateFakeSelectionBackgroundColor:(id)arg1;	// IMP=0x00000000004c0a89
- (void)_removeFakeSelectionBackgroundColorForRange:(struct _NSRange)arg1;	// IMP=0x00000000004c09f4
- (void)_removeFakeSelectionBackgroundColor;	// IMP=0x00000000004c0995
- (void)_setFakeSelectionBackgroundColorForRange:(struct _NSRange)arg1;	// IMP=0x00000000004c08a0
- (id)_fakeSelectionBackgroundColor;	// IMP=0x00000000004c07e8
- (void)_setFakeSelectionBackgroundColor;	// IMP=0x00000000004c0789
- (void)registerForEvents;	// IMP=0x00000000004c0783
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00000000004c077b
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000004c0773
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000004c06ff
- (void)panGestureRecognized:(id)arg1;	// IMP=0x00000000004c0624
- (void)_interactionStoppedFromPreviewItemController:(id)arg1;	// IMP=0x00000000004c05b3
- (void)_interactionStartedFromPreviewItemController:(id)arg1;	// IMP=0x00000000004c0542
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2 isSingleLine:(_Bool *)arg3 isReplyPreview:(_Bool)arg4;	// IMP=0x00000000004c0174
- (_Bool)canBecomeFocused;	// IMP=0x00000000004c016c
- (void)copy:(id)arg1;	// IMP=0x00000000004c0120
- (id)_textWithHyphenationAppliedForAttributedText:(id)arg1;	// IMP=0x00000000004c0054
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;	// IMP=0x00000000004bfdaf
- (void)didMoveToWindow;	// IMP=0x00000000004bfcbb
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

