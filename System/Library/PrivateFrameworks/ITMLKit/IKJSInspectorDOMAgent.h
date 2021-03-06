//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/RWIProtocolDOMDomainHandler-Protocol.h>

@class IKJSInspectorController, NSMapTable, NSMutableDictionary, NSString, RWIProtocolDOMNode;

@interface IKJSInspectorDOMAgent : NSObject <RWIProtocolDOMDomainHandler>
{
    NSMutableDictionary *_searches;	// 8 = 0x8
    RWIProtocolDOMNode *_rootNode;	// 16 = 0x10
    NSMapTable *_eventListenersMap;	// 24 = 0x18
    int _eventListenerIdSequence;	// 32 = 0x20
    _Bool _inspectElementModeEnabled;	// 36 = 0x24
    IKJSInspectorController *_controller;	// 40 = 0x28
}

+ (id)_nodeIDsFromNodePaths:(id)arg1;	// IMP=0x00000000000d8e95
+ (id)_parseAttributeString:(id)arg1;	// IMP=0x00000000000d8c97
- (void).cxx_destruct;	// IMP=0x00000000000d90ec
@property(readonly, nonatomic, getter=isInspectElementModeEnabled) _Bool inspectElementModeEnabled; // @synthesize inspectElementModeEnabled=_inspectElementModeEnabled;
@property(readonly, nonatomic) __weak IKJSInspectorController *controller; // @synthesize controller=_controller;
- (void)_fullfillNodePath:(id)arg1;	// IMP=0x00000000000d8a08
- (void)getDataBindingsForNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3;	// IMP=0x00000000000d81a4
- (void)getAssociatedDataForNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3;	// IMP=0x00000000000d7f55
- (void)getSupportedEventNamesWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d7ec5
- (void)moveToWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 targetNodeId:(int)arg4 insertBeforeNodeId:(int *)arg5;	// IMP=0x00000000000d78f9
- (void)getAttributesWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3;	// IMP=0x00000000000d76bc
- (void)hideHighlightWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d764b
- (_Bool)hideHighlight;	// IMP=0x00000000000d7607
- (void)highlightNodeListWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeIds:(id)arg3 highlightConfig:(id)arg4;	// IMP=0x00000000000d7358
- (void)highlightNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 highlightConfig:(id)arg3 nodeId:(int *)arg4 objectId:(id *)arg5;	// IMP=0x00000000000d70b3
- (void)setInspectModeEnabledWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 enabled:(_Bool)arg3 highlightConfig:(id *)arg4 showRulers:(_Bool *)arg5;	// IMP=0x00000000000d70a1
- (void)setInspectModeEnabledWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 enabled:(_Bool)arg3 highlightConfig:(id *)arg4;	// IMP=0x00000000000d7020
- (void)discardSearchResultsWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 searchId:(id)arg3;	// IMP=0x00000000000d6f5f
- (void)getSearchResultsWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 searchId:(id)arg3 fromIndex:(int)arg4 toIndex:(int)arg5;	// IMP=0x00000000000d6e06
- (void)performSearchWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 query:(id)arg3 nodeIds:(id *)arg4 caseSensitive:(_Bool *)arg5;	// IMP=0x00000000000d6abb
- (void)performSearchWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 query:(id)arg3 nodeIds:(id *)arg4;	// IMP=0x00000000000d6a98
- (void)setOuterHTMLWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 outerHTML:(id)arg4;	// IMP=0x00000000000d685a
- (void)getOuterHTMLWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3;	// IMP=0x00000000000d663f
- (void)getAccessibilityPropertiesForNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3;	// IMP=0x00000000000d64d5
- (void)setEventListenerDisabledWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 eventListenerId:(int)arg3 disabled:(_Bool)arg4;	// IMP=0x00000000000d63e4
- (void)getEventListenersForNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3;	// IMP=0x00000000000d5e81
- (void)getEventListenersForNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 objectGroup:(id *)arg4;	// IMP=0x00000000000d5e6f
- (int)_eventListenerIDForListener:(id)arg1;	// IMP=0x00000000000d5bec
- (void)removeAttributeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 name:(id)arg4;	// IMP=0x00000000000d5977
- (void)setAttributesAsTextWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 text:(id)arg4 name:(id *)arg5;	// IMP=0x00000000000d4ed2
- (void)setAttributeValueWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 name:(id)arg4 value:(id)arg5;	// IMP=0x00000000000d4c19
- (void)removeNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3;	// IMP=0x00000000000d485b
- (void)setNodeValueWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 value:(id)arg4;	// IMP=0x00000000000d440e
- (void)requestChildNodesWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 depth:(int *)arg4;	// IMP=0x00000000000d41c9
- (void)getDocumentWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d409e
- (void)willRemoveEventListenerForNodeID:(int)arg1;	// IMP=0x00000000000d3fe7
- (void)didAddEventListenerForNodeID:(int)arg1;	// IMP=0x00000000000d3f30
- (void)inspectNodeWithID:(long long)arg1;	// IMP=0x00000000000d3d9a
- (void)documentDidChange;	// IMP=0x00000000000d3cce
- (void)documentDidUpdate;	// IMP=0x00000000000d3b63
- (id)initWithInspectorController:(id)arg1;	// IMP=0x00000000000d3a9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

