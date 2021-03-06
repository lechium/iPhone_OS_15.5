//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface WFREPBSingleActionExecution : PBCodable <NSCopying>
{
    NSString *_actionIdentifier;	// 8 = 0x8
    NSMutableArray *_inputs;	// 16 = 0x10
    NSMutableArray *_processedParameters;	// 24 = 0x18
    NSData *_serializedParameters;	// 32 = 0x20
    NSMutableArray *_variables;	// 40 = 0x28
}

+ (Class)inputType;	// IMP=0x000000000012ac52
+ (Class)processedParametersType;	// IMP=0x000000000012ac41
+ (Class)variablesType;	// IMP=0x000000000012ac30
- (void).cxx_destruct;	// IMP=0x000000000012a903
@property(retain, nonatomic) NSMutableArray *inputs; // @synthesize inputs=_inputs;
@property(retain, nonatomic) NSData *serializedParameters; // @synthesize serializedParameters=_serializedParameters;
@property(retain, nonatomic) NSMutableArray *processedParameters; // @synthesize processedParameters=_processedParameters;
@property(retain, nonatomic) NSMutableArray *variables; // @synthesize variables=_variables;
@property(retain, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000012a4cb
- (unsigned long long)hash;	// IMP=0x000000000012a428
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012a2c8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000129e5d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000129c2e
- (void)writeTo:(id)arg1;	// IMP=0x00000000001298e4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001298d7
- (id)dictionaryRepresentation;	// IMP=0x00000000001292c7
- (id)description;	// IMP=0x0000000000129218
- (id)inputAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001291fb
- (unsigned long long)inputsCount;	// IMP=0x00000000001291de
- (void)addInput:(id)arg1;	// IMP=0x0000000000129174
- (void)clearInputs;	// IMP=0x0000000000129157
@property(readonly, nonatomic) _Bool hasSerializedParameters;
- (id)processedParametersAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000129125
- (unsigned long long)processedParametersCount;	// IMP=0x0000000000129108
- (void)addProcessedParameters:(id)arg1;	// IMP=0x000000000012909e
- (void)clearProcessedParameters;	// IMP=0x0000000000129081
- (id)variablesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000129064
- (unsigned long long)variablesCount;	// IMP=0x0000000000129047
- (void)addVariables:(id)arg1;	// IMP=0x0000000000128fdd
- (void)clearVariables;	// IMP=0x0000000000128fc0

@end

