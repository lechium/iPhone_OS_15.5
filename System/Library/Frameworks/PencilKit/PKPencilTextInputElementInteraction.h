//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PencilKit/PKScribbleInteractionWrapperProvider-Protocol.h>
#import <PencilKit/UIInteraction-Protocol.h>

@class NSString, UIView;
@protocol PKPencilTextInputElementInteractionDelegate, PKScribbleInteractionWrapper;

@interface PKPencilTextInputElementInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction>
{
    id <PKScribbleInteractionWrapper> _cachedWrapper;	// 8 = 0x8
    id <PKPencilTextInputElementInteractionDelegate> _delegate;	// 16 = 0x10
    UIView *_view;	// 24 = 0x18
}

+ (id)_pencilTextInputElementInteractionInView:(id)arg1;	// IMP=0x0000000000042660
- (void).cxx_destruct;	// IMP=0x000000000004284a
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <PKPencilTextInputElementInteractionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)scribbleInteractionWrapper;	// IMP=0x00000000000427ae
- (void)didMoveToView:(id)arg1;	// IMP=0x000000000004264e
- (void)willMoveToView:(id)arg1;	// IMP=0x0000000000042648

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
