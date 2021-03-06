//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>

@class NSData, NSString;

@interface TRIClientTreatmentArtifact : NSObject <NSCopying>
{
    NSData *_encodedTreatmentDefinition;	// 8 = 0x8
    NSString *_encodedTreatmentDefinitionSignature;	// 16 = 0x10
    NSData *_publicCertificate;	// 24 = 0x18
}

+ (id)artifactWithEncodedTreatmentDefinition:(id)arg1 encodedTreatmentDefinitionSignature:(id)arg2 publicCertificate:(id)arg3;	// IMP=0x000000000000781f
- (void).cxx_destruct;	// IMP=0x0000000000007cab
@property(readonly, nonatomic) NSData *publicCertificate; // @synthesize publicCertificate=_publicCertificate;
@property(readonly, nonatomic) NSString *encodedTreatmentDefinitionSignature; // @synthesize encodedTreatmentDefinitionSignature=_encodedTreatmentDefinitionSignature;
@property(readonly, nonatomic) NSData *encodedTreatmentDefinition; // @synthesize encodedTreatmentDefinition=_encodedTreatmentDefinition;
- (id)init;	// IMP=0x0000000000007c87
- (id)description;	// IMP=0x0000000000007c3f
- (unsigned long long)hash;	// IMP=0x0000000000007be0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007b78
- (_Bool)isEqualToArtifact:(id)arg1;	// IMP=0x00000000000079b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000079ac
- (id)copyWithReplacementPublicCertificate:(id)arg1;	// IMP=0x0000000000007957
- (id)copyWithReplacementEncodedTreatmentDefinitionSignature:(id)arg1;	// IMP=0x0000000000007902
- (id)copyWithReplacementEncodedTreatmentDefinition:(id)arg1;	// IMP=0x00000000000078ad
- (id)initWithEncodedTreatmentDefinition:(id)arg1 encodedTreatmentDefinitionSignature:(id)arg2 publicCertificate:(id)arg3;	// IMP=0x00000000000075f7
- (_Bool)isValidWithTreatmentId:(id)arg1;	// IMP=0x0000000000050ae6

@end

