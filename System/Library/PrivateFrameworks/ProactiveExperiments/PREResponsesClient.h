//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveExperiments/PREResponsesProtocol-Protocol.h>

@class PREXPCClientHelpers;

@interface PREResponsesClient : NSObject <PREResponsesProtocol>
{
    PREXPCClientHelpers *_clientHelpers;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000001a85a
- (void).cxx_destruct;	// IMP=0x000000000001a71e
- (void)registerResponse:(id)arg1 position:(id)arg2 isCanned:(_Bool)arg3 isUsingQuickResponses:(_Bool)arg4 locale:(id)arg5 modelConfigPath:(id)arg6;	// IMP=0x000000000001a5f6
- (void)preResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 language:(id)arg6 recipientHandles:(id)arg7 modelFilePath:(id)arg8 modelConfigPath:(id)arg9 espressoBinFilePath:(id)arg10 registerDisplayed:(_Bool)arg11 completion:(CDUnknownBlockType)arg12;	// IMP=0x000000000001a43a
- (id)_remoteObjectProxy;	// IMP=0x000000000001a424
- (id)init;	// IMP=0x000000000001a2d9

@end
