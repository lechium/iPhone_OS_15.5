//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextView.h>

@interface _CNAtomFieldEditor : UITextView
{
}

- (struct CGRect)_rectForScrollToVisible:(struct _NSRange)arg1;	// IMP=0x000000000001ae63
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001ada5
- (id)selectionRectsForRange:(id)arg1;	// IMP=0x000000000001a565
- (void)paste:(id)arg1;	// IMP=0x000000000001a4a3
- (void)copy:(id)arg1;	// IMP=0x000000000001a3fd
- (void)cut:(id)arg1;	// IMP=0x000000000001a394
- (void)_lookup:(id)arg1;	// IMP=0x000000000001a38e
- (void)_share:(id)arg1;	// IMP=0x000000000001a388
- (void)_define:(id)arg1;	// IMP=0x000000000001a382
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x000000000001a260
- (id)undoManager;	// IMP=0x000000000001a210
- (struct CGRect)convertGlyphRect:(struct CGRect)arg1;	// IMP=0x000000000001a195
- (id)_textInputTraits;	// IMP=0x000000000001a183
- (id)textInputTraits;	// IMP=0x000000000001a133
- (id)_hostView;	// IMP=0x000000000001a121
- (id)_enclosingScrollView;	// IMP=0x000000000001a098
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;	// IMP=0x0000000000019f8a

@end
