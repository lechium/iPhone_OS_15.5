//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/PKScribbleInteractionWrapper-Protocol.h>

@class NSString, UIIndirectScribbleInteraction, UIScribbleInteraction, UIView;
@protocol UIInteraction;

__attribute__((visibility("hidden")))
@interface UIScribbleInteractionWrapper : NSObject <PKScribbleInteractionWrapper>
{
    UIScribbleInteraction *_scribbleInteraction;	// 8 = 0x8
    UIIndirectScribbleInteraction *_indirectInteraction;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000c1ba46
- (_Bool)shouldDisableInputAssistant;	// IMP=0x0000000000c1b941
- (_Bool)isElementFocused:(id)arg1;	// IMP=0x0000000000c1b89f
- (_Bool)supportsIsElementFocused;	// IMP=0x0000000000c1b897
- (id)suggestedStrokeColorForElement:(id)arg1;	// IMP=0x0000000000c1b88f
- (_Bool)isElement:(id)arg1 inFrontOf:(id)arg2;	// IMP=0x0000000000c1b887
- (_Bool)supportsIsElementInFrontOfElement;	// IMP=0x0000000000c1b87f
- (_Bool)isElementContainer;	// IMP=0x0000000000c1b858
- (struct UIEdgeInsets)hitToleranceInsetsWithDefaultInsets:(struct UIEdgeInsets)arg1 element:(id)arg2;	// IMP=0x0000000000c1b6c9
- (void)focusElement:(id)arg1 initialFocusSelectionReferencePoint:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c1b590
- (void)requestElementsInRect:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c1b3b4
- (void)didFinishWritingInElement:(id)arg1;	// IMP=0x0000000000c1b298
- (void)willBeginWritingInElement:(id)arg1;	// IMP=0x0000000000c1b179
- (_Bool)shouldBeginAtLocation:(struct CGPoint)arg1;	// IMP=0x0000000000c1b0e1
- (_Bool)focusWillTransformElement:(id)arg1;	// IMP=0x0000000000c1afec
- (void)endSuppressingPlaceholderForElement:(id)arg1;	// IMP=0x0000000000c1afe6
- (_Bool)beginSuppressingPlaceholderForElement:(id)arg1;	// IMP=0x0000000000c1afde
- (struct CGRect)frameForElement:(id)arg1;	// IMP=0x0000000000c1af0c
- (_Bool)supportsShouldBegin;	// IMP=0x0000000000c1aea8
@property(readonly, nonatomic) id <UIInteraction> interaction;
@property(readonly, nonatomic) UIView *view;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c1ac5b
- (id)initWithCustomScribbleInteraction:(id)arg1 indirectScribbleInteraction:(id)arg2;	// IMP=0x0000000000c1abc9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *interactionView;
@property(readonly) Class superclass;

@end
