//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBOR, NSArray, NSData, NSDictionary, NSString;

@interface COSE : NSObject
{
    CBOR *_cborObj;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSDictionary *_protectedHeadererDictionary;	// 24 = 0x18
    NSData *_content;	// 32 = 0x20
    long long _algorithmIdentifier;	// 40 = 0x28
    NSArray *_criticalHeaderParameters;	// 48 = 0x30
    NSString *_contentType;	// 56 = 0x38
    NSData *_keyIdentifier;	// 64 = 0x40
    NSData *_initializationVector;	// 72 = 0x48
    NSData *_partialInitializationVector;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000023e49
@property(readonly, nonatomic) NSData *partialInitializationVector; // @synthesize partialInitializationVector=_partialInitializationVector;
@property(readonly, nonatomic) NSData *initializationVector; // @synthesize initializationVector=_initializationVector;
@property(readonly, nonatomic) NSData *keyIdentifier; // @synthesize keyIdentifier=_keyIdentifier;
@property(readonly, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) NSArray *criticalHeaderParameters; // @synthesize criticalHeaderParameters=_criticalHeaderParameters;
@property(readonly, nonatomic) long long algorithmIdentifier; // @synthesize algorithmIdentifier=_algorithmIdentifier;
@property(readonly, nonatomic) NSData *content; // @synthesize content=_content;
@property(readonly, nonatomic) NSDictionary *protectedHeadererDictionary; // @synthesize protectedHeadererDictionary=_protectedHeadererDictionary;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) CBOR *tag;
@property(readonly, nonatomic) NSDictionary *unprotectedHeaderParameters;
@property(readonly, nonatomic) NSData *protectedHeaderParameters;
- (id)initWithCBOR:(id)arg1;	// IMP=0x00000000000225b2
- (id)initWithData:(id)arg1 type:(long long)arg2;	// IMP=0x000000000002244a
- (id)initWithData:(id)arg1;	// IMP=0x00000000000223f0

@end

