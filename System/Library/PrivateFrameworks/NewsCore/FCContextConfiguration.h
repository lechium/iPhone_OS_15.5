//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSString;

@interface FCContextConfiguration : NSObject <NSCopying>
{
    _Bool _isProductionContentEnvironment;	// 8 = 0x8
    _Bool _isProductionPrivateDataEnvironment;	// 9 = 0x9
    long long _environment;	// 16 = 0x10
    NSString *_contentContainerIdentifier;	// 24 = 0x18
    NSString *_contentContainerCombinationIdentifier;	// 32 = 0x20
    NSString *_privateDataContainerIdentifier;	// 40 = 0x28
    NSString *_privateDataSecureContainerIdentifier;	// 48 = 0x30
    NSString *_privateDataContainerCombinationIdentifier;	// 56 = 0x38
}

+ (id)defaultConfiguration;	// IMP=0x00000000001c7988
- (void).cxx_destruct;	// IMP=0x00000000001c7bc5
@property(readonly, copy, nonatomic) NSString *privateDataContainerCombinationIdentifier; // @synthesize privateDataContainerCombinationIdentifier=_privateDataContainerCombinationIdentifier;
@property(readonly, copy, nonatomic) NSString *privateDataSecureContainerIdentifier; // @synthesize privateDataSecureContainerIdentifier=_privateDataSecureContainerIdentifier;
@property(readonly, copy, nonatomic) NSString *privateDataContainerIdentifier; // @synthesize privateDataContainerIdentifier=_privateDataContainerIdentifier;
@property(readonly, nonatomic) _Bool isProductionPrivateDataEnvironment; // @synthesize isProductionPrivateDataEnvironment=_isProductionPrivateDataEnvironment;
@property(readonly, nonatomic) _Bool isProductionContentEnvironment; // @synthesize isProductionContentEnvironment=_isProductionContentEnvironment;
@property(readonly, copy, nonatomic) NSString *contentContainerCombinationIdentifier; // @synthesize contentContainerCombinationIdentifier=_contentContainerCombinationIdentifier;
@property(readonly, copy, nonatomic) NSString *contentContainerIdentifier; // @synthesize contentContainerIdentifier=_contentContainerIdentifier;
@property(readonly, nonatomic) long long environment; // @synthesize environment=_environment;
- (id)initWithEnvironment:(long long)arg1;	// IMP=0x00000000001c74fb
- (id)initWithProductionContentEnvironment:(_Bool)arg1 productionPrivateDataEnvironment:(_Bool)arg2 contentContainerIdentifier:(id)arg3 privateDataContainerIdentifier:(id)arg4 privateDataSecureContainerIdentifier:(id)arg5 storeFrontID:(id)arg6 environment:(long long)arg7;	// IMP=0x00000000001c7130
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c7125
- (id)init;	// IMP=0x00000000001c6fe0

@end
