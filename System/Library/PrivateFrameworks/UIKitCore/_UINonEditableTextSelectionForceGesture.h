//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIKeyboardTextSelectionGestureControllerDelegate-Protocol.h>

@class NSString, UIKeyboardTaskQueue, _UIKeyboardTextSelectionController, _UIKeyboardTextSelectionGestureController;
@protocol _UINonEditableTextSelectionForceGestureDelegate;

@interface _UINonEditableTextSelectionForceGesture <_UIKeyboardTextSelectionGestureControllerDelegate>
{
    id <_UINonEditableTextSelectionForceGestureDelegate> forceGestureDelegate;	// 8 = 0x8
    _UIKeyboardTextSelectionController *_textSelectionController;	// 16 = 0x10
    _UIKeyboardTextSelectionGestureController *_gestureController;	// 24 = 0x18
}

@property(retain, nonatomic) _UIKeyboardTextSelectionGestureController *gestureController; // @synthesize gestureController=_gestureController;
@property(retain, nonatomic) _UIKeyboardTextSelectionController *textSelectionController; // @synthesize textSelectionController=_textSelectionController;
@property(nonatomic) id <_UINonEditableTextSelectionForceGestureDelegate> forceGestureDelegate; // @synthesize forceGestureDelegate;
- (void)willBeginGesture;	// IMP=0x0000000000b3c4b7
- (_Bool)_shouldDelayUntilForceLevelRequirementIsMet;	// IMP=0x0000000000b3c4af
@property(readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;
- (void)dealloc;	// IMP=0x0000000000b3c406
- (id)initWithTextInput:(id)arg1;	// IMP=0x0000000000b3c346

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) double timestampOfLastTouchesEnded;

@end
