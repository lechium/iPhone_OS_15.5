//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface DMFUpdateDeclarationsRequest
{
    NSString *_organizationIdentifier;	// 8 = 0x8
    NSString *_syncToken;	// 16 = 0x10
    NSArray *_upsertDeclarations;	// 24 = 0x18
    NSArray *_removeDeclarations;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003b92b
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x000000000003b923
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x000000000003b91b
+ (id)permittedPlatforms;	// IMP=0x000000000003b90e
- (void).cxx_destruct;	// IMP=0x000000000003bec6
@property(copy, nonatomic) NSArray *removeDeclarations; // @synthesize removeDeclarations=_removeDeclarations;
@property(copy, nonatomic) NSArray *upsertDeclarations; // @synthesize upsertDeclarations=_upsertDeclarations;
@property(copy, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003bcf8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003b933

@end

