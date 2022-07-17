//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, TPPolicyVersion;

@interface TPPolicyDocument : NSObject
{
    TPPolicyVersion *_version;	// 8 = 0x8
    NSData *_protobuf;	// 16 = 0x10
}

+ (_Bool)isEqualKeyViewMapping:(id)arg1 other:(id)arg2;	// IMP=0x0000000000018cb6
+ (id)redactionWithEncrypter:(id)arg1 modelToCategory:(id)arg2 categoriesByView:(id)arg3 introducersByCategory:(id)arg4 keyViewMapping:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000018b51
+ (id)policyDocWithHash:(id)arg1 data:(id)arg2;	// IMP=0x0000000000018ae1
+ (void)addKeyViewMapping:(id)arg1 toPB:(id)arg2;	// IMP=0x0000000000018992
+ (void)addRedactions:(id)arg1 toPB:(id)arg2;	// IMP=0x0000000000018724
+ (void)addIntroducersByCategory:(id)arg1 toPB:(id)arg2;	// IMP=0x0000000000018466
+ (void)addCategoriesByView:(id)arg1 toPB:(id)arg2;	// IMP=0x00000000000181a8
+ (void)addModelToCategory:(id)arg1 toPB:(id)arg2;	// IMP=0x0000000000017eda
+ (id)redactionsFromPb:(id)arg1;	// IMP=0x0000000000017cbc
+ (id)introducersByCategoryFromPb:(id)arg1;	// IMP=0x0000000000017a69
+ (id)categoriesByViewFromPb:(id)arg1;	// IMP=0x0000000000017816
+ (id)modelToCategoryFromPb:(id)arg1;	// IMP=0x00000000000175b8
- (void).cxx_destruct;	// IMP=0x0000000000017590
@property(readonly, nonatomic) NSData *protobuf; // @synthesize protobuf=_protobuf;
@property(readonly, nonatomic) TPPolicyVersion *version; // @synthesize version=_version;
- (unsigned long long)hash;	// IMP=0x000000000001750e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000174a7
- (id)cloneWithVersionNumber:(unsigned long long)arg1 prependingCategoriesByView:(id)arg2 prependingKeyViewMapping:(id)arg3;	// IMP=0x0000000000016f34
- (id)cloneWithVersionNumber:(unsigned long long)arg1;	// IMP=0x0000000000016f1d
- (_Bool)isEqualToPolicyDocument:(id)arg1;	// IMP=0x0000000000016e80
- (id)description;	// IMP=0x0000000000016e14
@property(readonly) NSArray *keyViewMapping;
- (id)policyWithSecrets:(id)arg1 decrypter:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001659c
- (id)encodeProtobuf;	// IMP=0x0000000000016533
- (id)initWithVersion:(unsigned long long)arg1 modelToCategory:(id)arg2 categoriesByView:(id)arg3 introducersByCategory:(id)arg4 redactions:(id)arg5 keyViewMapping:(id)arg6 userControllableViewList:(id)arg7 piggybackViews:(id)arg8 priorityViews:(id)arg9 inheritedExcludedViews:(id)arg10 hashAlgo:(long long)arg11;	// IMP=0x0000000000016224
- (id)initWithHash:(id)arg1 data:(id)arg2;	// IMP=0x0000000000016086

@end
