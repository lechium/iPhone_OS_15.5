//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PencilKit/PKScribbleInteractionDelegate-Protocol.h>

@class NSString, UIView;

@interface PKFakeVoiceMemosDelegate : NSObject <PKScribbleInteractionDelegate>
{
    UIView *_view;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000022de76
- (struct UIEdgeInsets)_scribbleInteraction:(id)arg1 hitToleranceInsetsForElement:(id)arg2 defaultInsets:(struct UIEdgeInsets)arg3;	// IMP=0x000000000022de4c
- (id)initWithView:(id)arg1;	// IMP=0x000000000022dde1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
