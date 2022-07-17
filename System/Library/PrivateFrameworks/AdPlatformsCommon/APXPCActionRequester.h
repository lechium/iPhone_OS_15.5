//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AdPlatformsCommon/APXPCActionRequesterProtocol-Protocol.h>

@class APXPCRemoteConnection, NSString, NSUUID, Protocol;

@interface APXPCActionRequester : NSObject <APXPCActionRequesterProtocol>
{
    Protocol *_exportedInterface;	// 8 = 0x8
    id _exportedObject;	// 16 = 0x10
    id _remoteObjectProxy;	// 24 = 0x18
    APXPCRemoteConnection *_connection;	// 32 = 0x20
    NSUUID *_delegateID;	// 40 = 0x28
}

+ (id)unfairLock;	// IMP=0x0000000000001be8
+ (id)machService;	// IMP=0x000000000000196c
+ (_Bool)canShareConnection;	// IMP=0x000000000000185a
- (void).cxx_destruct;	// IMP=0x0000000000001f4b
@property(retain, nonatomic) NSUUID *delegateID; // @synthesize delegateID=_delegateID;
@property(retain, nonatomic) APXPCRemoteConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) id remoteObjectProxy; // @synthesize remoteObjectProxy=_remoteObjectProxy;
@property(readonly, nonatomic) id exportedObject; // @synthesize exportedObject=_exportedObject;
@property(readonly, nonatomic) Protocol *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000001e36
- (id)xpcConnection;	// IMP=0x0000000000001d62
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000001cb8
- (id)init;	// IMP=0x0000000000001c52
- (void)finished;	// IMP=0x0000000000001b5d
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001ada
- (void)extendCollectionClassesForExportedInterface:(id)arg1;	// IMP=0x0000000000001a84
- (void)extendCollectionClassesForRemoteInterface:(id)arg1;	// IMP=0x0000000000001a7e
- (void)connectionInvalidated;	// IMP=0x0000000000001748
- (void)connectionInterrupted;	// IMP=0x0000000000001636
- (id)remoteObjectInterface;	// IMP=0x0000000000001524

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
