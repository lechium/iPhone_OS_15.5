//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface IDSMPPublicAccountIdentity
{
}

+ (id)publicAccountIdentitywithDataRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c2ec8
- (id)dataRepresentationWithError:(id *)arg1;	// IMP=0x00000000000c2ec0
- (_Bool)verifySignature:(id)arg1 ofData:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000c2eb8
@property(readonly, nonatomic) NSData *publicName;

@end

