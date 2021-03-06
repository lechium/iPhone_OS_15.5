//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebInspector/RWIProtocolDOMDomainEventDispatcher.h>

@interface RWIProtocolDOMDomainEventDispatcher (IKJSDependency)
- (void)safe_pseudoElementAddedWithParentId:(int)arg1 pseudoElement:(id)arg2;	// IMP=0x00000000000d0256
- (void)safe_attributeModifiedWithNodeId:(int)arg1 name:(id)arg2 value:(id)arg3;	// IMP=0x00000000000d013c
- (void)safe_inlineStyleInvalidatedWithNodeIds:(id)arg1;	// IMP=0x00000000000d0052
- (void)safe_setChildNodesWithParentId:(int)arg1 nodes:(id)arg2;	// IMP=0x00000000000cff5d
- (void)safe_customElementStateChangedWithNodeId:(int)arg1 customElementState:(long long)arg2;	// IMP=0x00000000000cfe7f
- (void)safe_attributeRemovedWithNodeId:(int)arg1 name:(id)arg2;	// IMP=0x00000000000cfd8a
- (void)safe_shadowRootPoppedWithHostId:(int)arg1 rootId:(int)arg2;	// IMP=0x00000000000cfcad
- (void)safe_childNodeCountUpdatedWithNodeId:(int)arg1 childNodeCount:(int)arg2;	// IMP=0x00000000000cfbd0
- (void)safe_willRemoveEventListenerWithNodeId:(int)arg1;	// IMP=0x00000000000cfafd
- (void)safe_shadowRootPushedWithHostId:(int)arg1 root:(id)arg2;	// IMP=0x00000000000cfa08
- (void)safe_willDestroyDOMNodeWithNodeId:(int)arg1;	// IMP=0x00000000000cf935
- (void)safe_inspectWithNodeId:(int)arg1;	// IMP=0x00000000000cf862
- (void)safe_powerEfficientPlaybackStateChangedWithNodeId:(int)arg1 timestamp:(double)arg2 isPowerEfficient:(_Bool)arg3;	// IMP=0x00000000000cf779
- (void)safe_documentUpdated;	// IMP=0x00000000000cf6d8
- (void)safe_pseudoElementRemovedWithParentId:(int)arg1 pseudoElementId:(int)arg2;	// IMP=0x00000000000cf5fb
- (void)safe_characterDataModifiedWithNodeId:(int)arg1 characterData:(id)arg2;	// IMP=0x00000000000cf506
- (void)safe_didAddEventListenerWithNodeId:(int)arg1;	// IMP=0x00000000000cf433
- (void)safe_didFireEventWithNodeId:(int)arg1 eventName:(id)arg2 timestamp:(double)arg3 data:(id *)arg4;	// IMP=0x00000000000cf31a
- (void)safe_childNodeRemovedWithParentNodeId:(int)arg1 nodeId:(int)arg2;	// IMP=0x00000000000cf23d
- (void)safe_childNodeInsertedWithParentNodeId:(int)arg1 previousNodeId:(int)arg2 node:(id)arg3;	// IMP=0x00000000000cf13c
@end

