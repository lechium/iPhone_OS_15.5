//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSCopying-Protocol.h>

@class NSData;

@interface NSPPrivacyProxyBAAValidation : NSObject <NSCopying>
{
    NSData *_baaSignature;	// 8 = 0x8
    NSData *_intermediateCertificate;	// 16 = 0x10
    NSData *_leafCertificate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000040bed
@property(retain, nonatomic) NSData *intermediateCertificate; // @synthesize intermediateCertificate=_intermediateCertificate;
@property(retain, nonatomic) NSData *leafCertificate; // @synthesize leafCertificate=_leafCertificate;
@property(retain, nonatomic) NSData *baaSignature; // @synthesize baaSignature=_baaSignature;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000040b2e
- (unsigned long long)hash;	// IMP=0x0000000000040ad4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000409f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000040944
- (void)copyTo:(id)arg1;	// IMP=0x00000000000408ce
- (id)dictionaryRepresentation;	// IMP=0x0000000000040839
- (id)description;	// IMP=0x00000000000407cd

@end

