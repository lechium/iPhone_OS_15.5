//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface MPModelGenericObjectKind
{
    NSDictionary *_relationshipKinds;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000020b729
+ (id)kindWithRelationshipKinds:(id)arg1;	// IMP=0x000000000020b46d
+ (id)identityKind;	// IMP=0x000000000020b43b
- (void).cxx_destruct;	// IMP=0x000000000020b428
@property(readonly, nonatomic) NSDictionary *relationshipKinds; // @synthesize relationshipKinds=_relationshipKinds;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000020b39a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000020b29e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000020b223
- (unsigned long long)hash;	// IMP=0x000000000020b1cd
- (id)humanDescription;	// IMP=0x000000000020b0a7

@end

