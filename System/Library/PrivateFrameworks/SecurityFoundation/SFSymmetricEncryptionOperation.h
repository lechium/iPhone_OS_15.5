//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/_SFEncryptionOperation-Protocol.h>

@class NSString, _SFSymmetricKeySpecifier;

@interface SFSymmetricEncryptionOperation : NSObject <_SFEncryptionOperation>
{
    id _symmetricEncryptionOperationInternal;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000011af9
+ (id)_defaultEncryptionOperation;	// IMP=0x0000000000011ae7
+ (long long)_defaultEncryptionMode;	// IMP=0x0000000000011adf
- (void).cxx_destruct;	// IMP=0x0000000000011dc3
@property(copy, nonatomic) _SFSymmetricKeySpecifier *encryptionKeySpecifier;
@property(nonatomic) long long mode;
- (id)encrypt:(id)arg1 withKey:(id)arg2 ivGenerator:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000011d4c
- (id)decrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000011d44
- (id)encrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000011d3c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011ceb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011ce5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011cb6
- (id)initWithKeySpecifier:(id)arg1 mode:(long long)arg2;	// IMP=0x0000000000011bbf
- (id)initWithKeySpecifier:(id)arg1;	// IMP=0x0000000000011b5d
- (id)init;	// IMP=0x0000000000011b01

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

