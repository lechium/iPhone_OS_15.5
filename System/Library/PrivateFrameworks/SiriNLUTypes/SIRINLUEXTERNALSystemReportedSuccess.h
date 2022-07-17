//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class SIRINLUEXTERNALUUID, SIRINLUEXTERNALUsoGraph;

@interface SIRINLUEXTERNALSystemReportedSuccess : PBCodable <NSCopying>
{
    SIRINLUEXTERNALUsoGraph *_task;	// 8 = 0x8
    SIRINLUEXTERNALUUID *_taskId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003f51a
@property(retain, nonatomic) SIRINLUEXTERNALUsoGraph *task; // @synthesize task=_task;
@property(retain, nonatomic) SIRINLUEXTERNALUUID *taskId; // @synthesize taskId=_taskId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003f43f
- (unsigned long long)hash;	// IMP=0x000000000003f3f2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003f32a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003f28c
- (void)copyTo:(id)arg1;	// IMP=0x000000000003f229
- (void)writeTo:(id)arg1;	// IMP=0x000000000003f1cc
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003f1bf
- (id)dictionaryRepresentation;	// IMP=0x000000000003eed5
- (id)description;	// IMP=0x000000000003ee26
@property(readonly, nonatomic) _Bool hasTask;
@property(readonly, nonatomic) _Bool hasTaskId;

@end
