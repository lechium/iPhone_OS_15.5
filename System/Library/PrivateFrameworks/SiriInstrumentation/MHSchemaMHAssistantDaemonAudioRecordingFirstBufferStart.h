//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface MHSchemaMHAssistantDaemonAudioRecordingFirstBufferStart
{
    unsigned long long _firstBufferStartTimeOffsetInNs;	// 8 = 0x8
    NSString *_audioInterfaceVendorId;	// 16 = 0x10
    NSString *_audioInterfaceProductName;	// 24 = 0x18
    struct {
        unsigned int firstBufferStartTimeOffsetInNs:1;
    } _has;	// 32 = 0x20
    _Bool _hasAudioInterfaceVendorId;	// 36 = 0x24
    _Bool _hasAudioInterfaceProductName;	// 37 = 0x25
}

- (void).cxx_destruct;	// IMP=0x00000000001d45e2
@property(nonatomic) _Bool hasAudioInterfaceProductName; // @synthesize hasAudioInterfaceProductName=_hasAudioInterfaceProductName;
@property(nonatomic) _Bool hasAudioInterfaceVendorId; // @synthesize hasAudioInterfaceVendorId=_hasAudioInterfaceVendorId;
@property(copy, nonatomic) NSString *audioInterfaceProductName; // @synthesize audioInterfaceProductName=_audioInterfaceProductName;
@property(copy, nonatomic) NSString *audioInterfaceVendorId; // @synthesize audioInterfaceVendorId=_audioInterfaceVendorId;
@property(nonatomic) unsigned long long firstBufferStartTimeOffsetInNs; // @synthesize firstBufferStartTimeOffsetInNs=_firstBufferStartTimeOffsetInNs;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001d4393
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001d42d5
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001d40ce
- (unsigned long long)hash;	// IMP=0x00000000001d4051
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d3d6e
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d3c9a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d3c8d
- (void)deleteAudioInterfaceProductName;	// IMP=0x00000000001d3c79
- (void)deleteAudioInterfaceVendorId;	// IMP=0x00000000001d3c50
- (void)deleteFirstBufferStartTimeOffsetInNs;	// IMP=0x00000000001d3c11
@property(nonatomic) _Bool hasFirstBufferStartTimeOffsetInNs;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034b652

@end
