//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class ICTrackedParagraph, UIColor;

@interface ICTodoButton : UIButton
{
    _Bool _done;	// 8 = 0x8
    _Bool _trackedParagraphIsRTL;	// 9 = 0x9
    ICTrackedParagraph *_trackedParagraph;	// 16 = 0x10
    UIColor *_highlightColor;	// 24 = 0x18
    struct CGSize _defaultSize;	// 32 = 0x20
    struct CGSize _defaultImageSize;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000091416
@property(nonatomic) _Bool trackedParagraphIsRTL; // @synthesize trackedParagraphIsRTL=_trackedParagraphIsRTL;
@property(nonatomic) struct CGSize defaultImageSize; // @synthesize defaultImageSize=_defaultImageSize;
@property(nonatomic) struct CGSize defaultSize; // @synthesize defaultSize=_defaultSize;
@property(copy, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) __weak ICTrackedParagraph *trackedParagraph; // @synthesize trackedParagraph=_trackedParagraph;
@property(nonatomic, getter=isDone) _Bool done; // @synthesize done=_done;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x000000000009105a
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x0000000000090f79
- (id)debugDescription;	// IMP=0x0000000000090eca
- (void)setDone:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000090d89
- (id)init;	// IMP=0x0000000000090d4b
- (id)_icaxParentUITextView;	// IMP=0x0000000000094603
- (id)icaxCorrespondingParagraphText;	// IMP=0x000000000009449a
- (void)setFrame:(struct CGRect)arg1 leftToRight:(_Bool)arg2;	// IMP=0x00000000000943f8
- (struct CGRect)imageFrame;	// IMP=0x0000000000094335
- (void)updateTintColor;	// IMP=0x0000000000094321
- (void)updateImagesAnimated:(_Bool)arg1;	// IMP=0x0000000000094155
- (id)imageForChecked:(_Bool)arg1 withHighlight:(_Bool)arg2;	// IMP=0x0000000000093fe7
- (void)wasPressed;	// IMP=0x0000000000093f94
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000093ea1
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;	// IMP=0x0000000000093ce9
- (void)trackedParagraphDidChange;	// IMP=0x0000000000093c28
- (id)initWithDragDelegate:(id)arg1;	// IMP=0x0000000000093ba2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000093a55

@end
