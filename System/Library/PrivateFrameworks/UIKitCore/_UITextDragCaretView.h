//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAShapeLayer, UIView;
@protocol UITextInput;

@interface _UITextDragCaretView
{
    UIView<UITextInput> *_view;	// 120 = 0x78
    CAShapeLayer *_mask;	// 128 = 0x80
    _Bool _rangesExcludeSelection;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000fc1a14
@property(nonatomic) _Bool rangesExcludeSelection; // @synthesize rangesExcludeSelection=_rangesExcludeSelection;
- (struct CGRect)_configureMask:(id)arg1 withPath:(id)arg2;	// IMP=0x0000000000fc1854
- (id)_maskForRects:(id)arg1;	// IMP=0x0000000000fc113c
- (id)_rectsForRange:(id)arg1;	// IMP=0x0000000000fc10cf
- (id)_rangeColor;	// IMP=0x0000000000fc1030
- (id)_caretColor;	// IMP=0x0000000000fc0f91
- (_Bool)_isRemoveAnimatesBackToCaret;	// IMP=0x0000000000fc0eed
- (void)removeWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000fc0bd0
- (void)removeWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000fc0bb8
- (void)remove;	// IMP=0x0000000000fc0b9c
- (void)_performUpdate:(id)arg1;	// IMP=0x0000000000fc0635
- (void)_updateToRangeOrPosition:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 animated:(_Bool)arg4;	// IMP=0x0000000000fc0198
- (void)updateToRange:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 animated:(_Bool)arg4;	// IMP=0x0000000000fc0186
- (void)updateToRange:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000fc016e
- (void)updateToRange:(id)arg1;	// IMP=0x0000000000fc0151
- (void)updateToPosition:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000fc0139
- (void)updateToPosition:(id)arg1;	// IMP=0x0000000000fc011c
- (void)_insertAtRangeOrPosition:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 animated:(_Bool)arg4;	// IMP=0x0000000000fbf9b9
- (void)insertAtRange:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 animated:(_Bool)arg4;	// IMP=0x0000000000fbf9a7
- (void)insertAtRange:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000fbf98f
- (void)insertAtRange:(id)arg1;	// IMP=0x0000000000fbf972
- (void)insertAtPosition:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000fbf95a
- (void)insertAtPosition:(id)arg1;	// IMP=0x0000000000fbf93d
- (id)initWithTextInputView:(id)arg1;	// IMP=0x0000000000fbf86a

@end

