//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface DCClientHandler : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000002636
- (void)appAttestationIsSupportedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000024fb
- (void)appAttestationAssert:(id)arg1 keyId:(id)arg2 clientDataHash:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000002435
- (void)appAttestationAttestKey:(id)arg1 keyId:(id)arg2 clientDataHash:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000236f
- (void)appAttestationCreateKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000022e1
- (id)_stringValueForEntitlement:(id)arg1;	// IMP=0x001000000000227d
- (id)_generateAppIDFromCurrentConnection;	// IMP=0x001000000000200e
- (_Bool)_isSupported;	// IMP=0x0010000000001fcb
- (void)isSupportedDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001f7d
- (void)baaSignatureForData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001d6b
- (void)baaSignaturesForData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001ae3
- (void)fetchOpaqueBlobWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000018fc
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000000018a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

