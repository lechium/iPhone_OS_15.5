//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContextualActionsClient/CAXContextualActionsXPCInterface-Protocol.h>
#import <ContextualActionsClient/NSXPCListenerDelegate-Protocol.h>

@class CAXSuggestionProvider, NSString, NSXPCListener;

@interface CAXContextualActionsSuggestionReceiver : NSObject <CAXContextualActionsXPCInterface, NSXPCListenerDelegate>
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
    CAXSuggestionProvider *_suggestionProvider;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000000c53a
- (void).cxx_destruct;	// IMP=0x000000000000ccfc
- (void)donateSessionSummary:(id)arg1;	// IMP=0x000000000000ca94
- (void)processShortcutsActionSelectionGivenFeedbackEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ca45
- (void)processShortcutsActionSelectionGivenFeedbackEvent:(id)arg1;	// IMP=0x000000000000c8fd
- (void)processShortcutsSessionGivenSummary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c83d
- (void)processShortcutsSessionGivenSummary:(id)arg1;	// IMP=0x000000000000c763
- (void)setupXPCListener;	// IMP=0x000000000000c6a6
- (void)dealloc;	// IMP=0x000000000000c664
- (void)startWithBlendingLayerServer:(id)arg1;	// IMP=0x000000000000c5a6
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000000c337

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
