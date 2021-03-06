//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface WFREPBRunRequestResponse : PBCodable <NSCopying>
{
    NSData *_errorData;	// 8 = 0x8
    NSMutableArray *_outputDatas;	// 16 = 0x10
    NSString *_runRequestIdentifier;	// 24 = 0x18
    NSMutableArray *_variablesDatas;	// 32 = 0x20
}

+ (Class)outputDataType;	// IMP=0x00000000002d00b9
+ (Class)variablesDataType;	// IMP=0x00000000002d00a8
- (void).cxx_destruct;	// IMP=0x00000000002cfe3f
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(retain, nonatomic) NSMutableArray *outputDatas; // @synthesize outputDatas=_outputDatas;
@property(retain, nonatomic) NSMutableArray *variablesDatas; // @synthesize variablesDatas=_variablesDatas;
@property(retain, nonatomic) NSString *runRequestIdentifier; // @synthesize runRequestIdentifier=_runRequestIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002cfb1f
- (unsigned long long)hash;	// IMP=0x00000000002cfa9b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002cf96f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002cf629
- (void)copyTo:(id)arg1;	// IMP=0x00000000002cf48a
- (void)writeTo:(id)arg1;	// IMP=0x00000000002cf216
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002cf209
- (id)dictionaryRepresentation;	// IMP=0x00000000002cf138
- (id)description;	// IMP=0x00000000002cf089
@property(readonly, nonatomic) _Bool hasErrorData;
- (id)outputDataAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002cf057
- (unsigned long long)outputDatasCount;	// IMP=0x00000000002cf03a
- (void)addOutputData:(id)arg1;	// IMP=0x00000000002cefd0
- (void)clearOutputDatas;	// IMP=0x00000000002cefb3
- (id)variablesDataAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002cef96
- (unsigned long long)variablesDatasCount;	// IMP=0x00000000002cef79
- (void)addVariablesData:(id)arg1;	// IMP=0x00000000002cef0f
- (void)clearVariablesDatas;	// IMP=0x00000000002ceef2

@end

