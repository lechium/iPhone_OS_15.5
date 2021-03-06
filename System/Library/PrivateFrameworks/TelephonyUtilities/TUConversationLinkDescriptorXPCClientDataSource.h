//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUConversationLinkDescriptorDataSource-Protocol.h>
#import <TelephonyUtilities/TUConversationLinkDescriptorXPCClient-Protocol.h>

@class NSString, NSXPCConnection;
@protocol TUConversationLinkDescriptorDataSourceDelegate;

@interface TUConversationLinkDescriptorXPCClientDataSource : NSObject <TUConversationLinkDescriptorXPCClient, TUConversationLinkDescriptorDataSource>
{
    struct os_unfair_lock_s _accessorLock;	// 8 = 0x8
    id <TUConversationLinkDescriptorDataSourceDelegate> _conversationLinkDescriptorDataSourceDelegate;	// 16 = 0x10
    NSXPCConnection *_xpcConnection;	// 24 = 0x18
}

+ (id)serverXPCInterface;	// IMP=0x0000000000004a0b
+ (id)clientXPCInterface;	// IMP=0x000000000000499f
+ (void)setSynchronousServer:(id)arg1;	// IMP=0x0000000000004953
+ (id)synchronousServer;	// IMP=0x000000000000493a
+ (void)setAsynchronousServer:(id)arg1;	// IMP=0x00000000000048ee
+ (id)asynchronousServer;	// IMP=0x00000000000048d5
- (void).cxx_destruct;	// IMP=0x0000000000007b93
@property(readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
- (void)conversationLinkDescriptorsDidChange;	// IMP=0x0000000000007b3e
- (void)setName:(id)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000796a
- (unsigned long long)setName:(id)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000076e3
- (void)setInvitedHandles:(id)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000750f
- (unsigned long long)setInvitedHandles:(id)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000007288
- (void)setExpirationDate:(id)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000070b4
- (unsigned long long)setExpirationDate:(id)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000006e2d
- (void)setActivated:(_Bool)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000006c79
- (unsigned long long)setActivated:(_Bool)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000006a10
- (void)removeConversationLinkDescriptorsWithPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006865
- (unsigned long long)removeConversationLinkDescriptorsWithPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000006610
- (void)conversationLinkDescriptorsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000006462
- (id)conversationLinkDescriptorsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000000619a
- (void)conversationLinkDescriptorCountWithPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005fef
- (unsigned long long)conversationLinkDescriptorCountWithPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005d9a
- (void)addOrUpdateConversationLinkDescriptors:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005bf3
- (_Bool)addOrUpdateConversationLinkDescriptors:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000059a7
- (void)addConversationLinkDescriptors:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000057e9
- (_Bool)addConversationLinkDescriptors:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000054eb
@property(retain, nonatomic) id <TUConversationLinkDescriptorDataSourceDelegate> conversationLinkDescriptorDataSourceDelegate; // @synthesize conversationLinkDescriptorDataSourceDelegate=_conversationLinkDescriptorDataSourceDelegate;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)synchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000505e
- (id)asynchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004fb3
- (void)dealloc;	// IMP=0x0000000000004893
- (id)init;	// IMP=0x0000000000004858

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

