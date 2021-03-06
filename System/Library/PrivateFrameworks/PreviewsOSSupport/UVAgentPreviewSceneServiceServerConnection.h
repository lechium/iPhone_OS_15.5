//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PreviewsOSSupport/UVAgentPreviewSceneServiceProtocol-Protocol.h>
#import <PreviewsOSSupport/UVBSServerConnection-Protocol.h>

@class NSString;

@interface UVAgentPreviewSceneServiceServerConnection <UVBSServerConnection, UVAgentPreviewSceneServiceProtocol>
{
    NSString *_sceneIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000003d60
@property(readonly, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
- (oneway void)sendEndpoint:(id)arg1 context:(id)arg2 contentIdentifier:(id)arg3;	// IMP=0x0000000000003cb5
- (oneway void)generateStaticOutput:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003c11
- (oneway void)performUpdate:(id)arg1 sceneContext:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003b3a
- (void)activate;	// IMP=0x0000000000003aab
- (void)initializeWithClientContext:(id)arg1;	// IMP=0x0000000000003a23

// Remaining properties
@property(readonly) int clientPid;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

