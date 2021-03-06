//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDXPCConnection, CKEntitlements, NSDate, NSDictionary, NSString;
@protocol CKXPCProcessScopedClient;

@interface CKDProcessScopedClientProxy : NSObject
{
    _Bool _sandboxed;	// 8 = 0x8
    _Bool _isClientMainBundleAppleExecutable;	// 9 = 0x9
    int _pid;	// 12 = 0xc
    unsigned int _clientSDKVersion;	// 16 = 0x10
    NSString *_processBinaryName;	// 24 = 0x18
    NSString *_procName;	// 32 = 0x20
    NSDate *_connectionDate;	// 40 = 0x28
    CKDXPCConnection *_clientConnection;	// 48 = 0x30
    CKEntitlements *_clientEntitlements;	// 56 = 0x38
    id <CKXPCProcessScopedClient> _processScopedClientProxyCreator;	// 64 = 0x40
    NSDictionary *_connectionEntitlements;	// 72 = 0x48
    long long _hasValidatedEntitlementsTernary;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000001f77b
@property(nonatomic) long long hasValidatedEntitlementsTernary; // @synthesize hasValidatedEntitlementsTernary=_hasValidatedEntitlementsTernary;
@property(retain, nonatomic) NSDictionary *connectionEntitlements; // @synthesize connectionEntitlements=_connectionEntitlements;
@property(retain) id <CKXPCProcessScopedClient> processScopedClientProxyCreator; // @synthesize processScopedClientProxyCreator=_processScopedClientProxyCreator;
@property(nonatomic) _Bool isClientMainBundleAppleExecutable; // @synthesize isClientMainBundleAppleExecutable=_isClientMainBundleAppleExecutable;
@property(readonly, nonatomic) CKEntitlements *clientEntitlements; // @synthesize clientEntitlements=_clientEntitlements;
@property(nonatomic) unsigned int clientSDKVersion; // @synthesize clientSDKVersion=_clientSDKVersion;
@property(nonatomic) __weak CKDXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(retain, nonatomic) NSDate *connectionDate; // @synthesize connectionDate=_connectionDate;
@property(nonatomic, getter=isSandboxed) _Bool sandboxed; // @synthesize sandboxed=_sandboxed;
@property(readonly, nonatomic) NSString *procName; // @synthesize procName=_procName;
@property(readonly, nonatomic) NSString *processBinaryName; // @synthesize processBinaryName=_processBinaryName;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (_Bool)canOpenFileAtURL:(id)arg1;	// IMP=0x000000000001f533
- (_Bool)hasValidatedEntitlements;	// IMP=0x000000000001f30e
- (void)noteSystemIsAvailable;	// IMP=0x000000000001f2d1
- (id)issueSandboxExtensionForItem:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001ed2d
- (void)handleSignificantIssueBehavior:(unsigned long long)arg1 reason:(id)arg2;	// IMP=0x000000000001ec66
- (id)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001e6c6
- (void)_getProcessScopedClientProxyCreatorSynchronous:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001e26e
- (void)getProcessScopedClientProxySynchronous:(_Bool)arg1 errorHandler:(CDUnknownBlockType)arg2 clientProxyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001e0d4
- (void)tearDown;	// IMP=0x000000000001e0ce
- (_Bool)processIsAttached;	// IMP=0x000000000001e0b5
- (id)initWithClientConnection:(id)arg1;	// IMP=0x000000000001dbfe
- (id)description;	// IMP=0x000000000001dbec
- (id)CKPropertiesDescription;	// IMP=0x000000000001dab8

@end

