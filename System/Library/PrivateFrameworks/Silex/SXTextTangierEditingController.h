//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSWPEditingController.h>

@interface SXTextTangierEditingController : TSWPEditingController
{
    _Bool _startingInitialSelectionDrag;	// 352 = 0x160
}

@property(nonatomic) _Bool startingInitialSelectionDrag; // @synthesize startingInitialSelectionDrag=_startingInitialSelectionDrag;
- (id)editorKeyboardLanguage;	// IMP=0x000000000005f1a3
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x000000000005f15d
- (id)editingReps;	// IMP=0x000000000005eedf
- (void)tappedOnKnob:(id)arg1;	// IMP=0x000000000005eed9
- (_Bool)isParagraphModeWithSelection:(id)arg1 onStorage:(id)arg2;	// IMP=0x000000000005eed1
- (_Bool)canAddOrShowComment;	// IMP=0x000000000005eec9
- (_Bool)wantsKeyboard;	// IMP=0x000000000005eec1
- (_Bool)wantsCaret;	// IMP=0x000000000005eeb9

@end

