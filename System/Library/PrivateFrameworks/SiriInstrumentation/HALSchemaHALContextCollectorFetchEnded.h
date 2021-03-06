//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface HALSchemaHALContextCollectorFetchEnded
{
    unsigned int _numDeviceContextsFetched;	// 8 = 0x8
    CDStruct_ec4f4247 _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int numDeviceContextsFetched; // @synthesize numDeviceContextsFetched=_numDeviceContextsFetched;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001909f2
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000190934
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000190805
- (unsigned long long)hash;	// IMP=0x00000000001907db
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000190736
- (void)writeTo:(id)arg1;	// IMP=0x000000000019070b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001906fe
- (void)deleteNumDeviceContextsFetched;	// IMP=0x00000000001906d4
@property(nonatomic) _Bool hasNumDeviceContextsFetched;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000346edc

@end

