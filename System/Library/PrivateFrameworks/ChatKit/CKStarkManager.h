//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/CPInterfaceControllerDelegate-Protocol.h>
#import <ChatKit/CPTemplateApplicationSceneDelegate-Protocol.h>
#import <ChatKit/UISceneDelegate-Protocol.h>

@class CKStarkConversationController, NSString;

@interface CKStarkManager : NSObject <CPTemplateApplicationSceneDelegate, CPInterfaceControllerDelegate, UISceneDelegate>
{
    CKStarkConversationController *_conversationController;	// 8 = 0x8
}

+ (void)activateForConversation:(id)arg1;	// IMP=0x0000000000170f4f
+ (void)activateForRecipient:(id)arg1;	// IMP=0x0000000000170da4
+ (void)_activateSiriWithContext:(id)arg1;	// IMP=0x0000000000170cdb
+ (id)_directActionSource;	// IMP=0x0000000000170cb0
+ (_Bool)isCarPlayConnected;	// IMP=0x0000000000170ca4
- (void).cxx_destruct;	// IMP=0x0000000000171709
@property(retain, nonatomic) CKStarkConversationController *conversationController; // @synthesize conversationController=_conversationController;
- (void)openSMSURL:(id)arg1;	// IMP=0x0000000000171383
- (void)openURL:(id)arg1 sourceApplication:(id)arg2;	// IMP=0x00000000001711ad
- (void)scene:(id)arg1 openURLContexts:(id)arg2;	// IMP=0x00000000001710ee
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x000000000017107d
- (void)templateApplicationScene:(id)arg1 didDisconnectInterfaceController:(id)arg2;	// IMP=0x0000000000170c54
- (void)templateApplicationScene:(id)arg1 didConnectInterfaceController:(id)arg2;	// IMP=0x0000000000170bc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
