//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PKPassAuxiliaryRegistrationDecryptionCSRMetadata, PKPassAuxiliaryRegistrationSignatureCSRMetadata;

@interface PKPassAuxiliaryRegistrationRequirements : NSObject <NSSecureCoding>
{
    PKPassAuxiliaryRegistrationSignatureCSRMetadata *_deviceSignatureCSRMetadata;	// 8 = 0x8
    PKPassAuxiliaryRegistrationDecryptionCSRMetadata *_deviceDecryptionCSRMetadata;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d3fe6
- (void).cxx_destruct;	// IMP=0x00000000000d414a
@property(readonly, nonatomic) PKPassAuxiliaryRegistrationDecryptionCSRMetadata *deviceDecryptionCSRMetadata; // @synthesize deviceDecryptionCSRMetadata=_deviceDecryptionCSRMetadata;
@property(readonly, nonatomic) PKPassAuxiliaryRegistrationSignatureCSRMetadata *deviceSignatureCSRMetadata; // @synthesize deviceSignatureCSRMetadata=_deviceSignatureCSRMetadata;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d40c8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d3fee
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000d3ec0

@end
