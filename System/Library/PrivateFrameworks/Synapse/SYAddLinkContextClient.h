//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SYAddLinkContextClient : NSObject
{
    NSXPCConnection *__connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *__clientQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000040b6
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue; // @synthesize _clientQueue=__clientQueue;
@property(retain, nonatomic) NSXPCConnection *_connection; // @synthesize _connection=__connection;
- (void)createConnectionWithEndpoint:(id)arg1;	// IMP=0x0000000000003ee1
- (void)_invalidateConnection;	// IMP=0x0000000000003dde
- (void)_configureConnectionAndResume;	// IMP=0x0000000000003a1f
- (void)_createConnectionIfNeeded;	// IMP=0x0000000000003928
- (void)userEditDidAddContentItems:(id)arg1;	// IMP=0x000000000000330f
- (void)userDidRemoveContentItems:(id)arg1;	// IMP=0x0000000000002cf6
- (void)userWillAddLinkWithActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002801
- (void)dealloc;	// IMP=0x0000000000002787
- (id)init;	// IMP=0x0000000000002703

@end

