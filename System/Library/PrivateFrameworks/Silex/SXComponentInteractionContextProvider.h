//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXInteractionContextProviding-Protocol.h>

@class NSString, SXComponentInteraction;
@protocol SXActionManager, SXComponentInteractionHandlerManager;

@interface SXComponentInteractionContextProvider : NSObject <SXInteractionContextProviding>
{
    id <SXComponentInteractionHandlerManager> _componentInteractionHandlerManager;	// 8 = 0x8
    id <SXActionManager> _actionManager;	// 16 = 0x10
    SXComponentInteraction *_currentInteraction;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000caa49
@property(nonatomic) __weak SXComponentInteraction *currentInteraction; // @synthesize currentInteraction=_currentInteraction;
@property(readonly, nonatomic) id <SXActionManager> actionManager; // @synthesize actionManager=_actionManager;
@property(readonly, nonatomic) id <SXComponentInteractionHandlerManager> componentInteractionHandlerManager; // @synthesize componentInteractionHandlerManager=_componentInteractionHandlerManager;
- (id)toolTipAtLocation:(struct CGPoint)arg1 viewport:(id)arg2 boundingRect:(struct CGRect *)arg3;	// IMP=0x00000000000ca7df
- (id)targetedPreviewAtLocation:(struct CGPoint)arg1 viewport:(id)arg2;	// IMP=0x00000000000ca525
- (void)commitPreviewViewController:(id)arg1;	// IMP=0x00000000000ca3e4
- (id)contextMenuAtLocation:(struct CGPoint)arg1 viewport:(id)arg2;	// IMP=0x00000000000ca16c
- (id)initWithComponentInteractionHandlerManager:(id)arg1 actionManager:(id)arg2;	// IMP=0x00000000000ca0d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
