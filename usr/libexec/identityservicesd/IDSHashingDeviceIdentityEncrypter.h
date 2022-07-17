//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSMPFullDeviceIdentityContainerEncrypter, IDSMessageHashChecker, NSString;

@interface IDSHashingDeviceIdentityEncrypter : NSObject
{
    IDSMPFullDeviceIdentityContainerEncrypter *_fullDeviceIdentityContainerEncrypter;	// 8 = 0x8
    IDSMessageHashChecker *_messageHashChecker;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001179b0
@property(readonly, nonatomic) IDSMessageHashChecker *messageHashChecker; // @synthesize messageHashChecker=_messageHashChecker;
@property(readonly, nonatomic) IDSMPFullDeviceIdentityContainerEncrypter *fullDeviceIdentityContainerEncrypter; // @synthesize fullDeviceIdentityContainerEncrypter=_fullDeviceIdentityContainerEncrypter;
- (id)decryptData:(id)arg1 withPublicDeviceIdentityContainer:(id)arg2 usingIdentifier:(id)arg3 isRetry:(_Bool)arg4;	// IMP=0x00100000001174e0
- (id)decryptData:(id)arg1 withPublicDeviceIdentityContainer:(id)arg2 error:(id *)arg3 usingIdentifier:(id)arg4 isRetry:(_Bool)arg5;	// IMP=0x0010000000117350
- (id)_checkMessageHashForData:(id)arg1 identifier:(id)arg2 isRetry:(_Bool)arg3 delayedCommitBlock:(CDUnknownBlockType *)arg4;	// IMP=0x0010000000117200
- (id)encryptData:(id)arg1 withEncryptedAttributes:(id)arg2 withPublicDeviceIdentityContainer:(id)arg3 usingIdentifier:(id)arg4 error:(id *)arg5;	// IMP=0x00100000001170e0
- (id)encryptData:(id)arg1 withEncryptedAttributes:(id)arg2 withPublicDeviceIdentityContainer:(id)arg3 usedIdentifier:(id *)arg4 error:(id *)arg5;	// IMP=0x0010000000116fe0
- (id)initWithDeviceIdentityContainerEncrypter:(id)arg1 messageHashChecker:(id)arg2;	// IMP=0x0010000000116ef0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
