//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/NSSecureCoding-Protocol.h>
#import <WebKit/WKObject-Protocol.h>

@class NSArray, NSString;

@interface WKUserContentController : NSObject <WKObject, NSSecureCoding>
{
    struct ObjectStorage<WebKit::WebUserContentControllerProxy> _userContentControllerProxy;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000274664
@property(readonly) struct Object *_apiObject;
- (void)removeAllScriptMessageHandlers;	// IMP=0x0000000000274d86
- (void)removeAllScriptMessageHandlersFromContentWorld:(id)arg1;	// IMP=0x0000000000274d74
- (void)removeScriptMessageHandlerForName:(id)arg1 contentWorld:(id)arg2;	// IMP=0x0000000000274cea
- (void)removeScriptMessageHandlerForName:(id)arg1;	// IMP=0x0000000000274c60
- (void)addScriptMessageHandlerWithReply:(id)arg1 contentWorld:(id)arg2 name:(id)arg3;	// IMP=0x0000000000274aa6
- (void)addScriptMessageHandler:(id)arg1 contentWorld:(id)arg2 name:(id)arg3;	// IMP=0x0000000000274955
- (void)addScriptMessageHandler:(id)arg1 name:(id)arg2;	// IMP=0x000000000027480d
- (void)_addScriptMessageHandler:(void *)arg1;	// IMP=0x0000000000274762
- (void)removeAllContentRuleLists;	// IMP=0x0000000000274754
- (void)removeContentRuleList:(id)arg1;	// IMP=0x000000000027473e
- (void)addContentRuleList:(id)arg1;	// IMP=0x00000000002746b4
- (void)removeAllUserScripts;	// IMP=0x00000000002746a6
- (void)addUserScript:(id)arg1;	// IMP=0x0000000000274692
@property(readonly, copy, nonatomic) NSArray *userScripts;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000274672
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000027466c
- (void)dealloc;	// IMP=0x000000000027460e
- (id)init;	// IMP=0x00000000002745af
- (void)_removeAllScriptMessageHandlersAssociatedWithUserContentWorld:(id)arg1;	// IMP=0x0000000000275222
- (void)_removeScriptMessageHandlerForName:(id)arg1 userContentWorld:(id)arg2;	// IMP=0x0000000000275194
- (void)_addScriptMessageHandler:(id)arg1 name:(id)arg2 contentWorld:(id)arg3;	// IMP=0x000000000027514c
- (void)_addScriptMessageHandler:(id)arg1 name:(id)arg2 userContentWorld:(id)arg3;	// IMP=0x0000000000274fd6
- (void)_removeAllUserStyleSheetsAssociatedWithContentWorld:(id)arg1;	// IMP=0x0000000000274fc4
- (void)_removeAllUserStyleSheets;	// IMP=0x0000000000274fb6
- (void)_removeUserStyleSheet:(id)arg1;	// IMP=0x0000000000274fa4
- (void)_addUserStyleSheet:(id)arg1;	// IMP=0x0000000000274f92
@property(readonly, copy, nonatomic) NSArray *_userStyleSheets;
- (void)_removeAllUserContentFilters;	// IMP=0x0000000000274f76
- (void)_removeUserContentFilter:(id)arg1;	// IMP=0x0000000000274ef4
- (void)_addContentRuleList:(id)arg1 extensionBaseURL:(id)arg2;	// IMP=0x0000000000274e67
- (void)_addUserContentFilter:(id)arg1;	// IMP=0x0000000000274dd9
- (void)_addUserScriptImmediately:(id)arg1;	// IMP=0x0000000000274dc2
- (void)_removeAllUserScriptsAssociatedWithContentWorld:(id)arg1;	// IMP=0x0000000000274db0
- (void)_removeUserScript:(id)arg1;	// IMP=0x0000000000274d9e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

