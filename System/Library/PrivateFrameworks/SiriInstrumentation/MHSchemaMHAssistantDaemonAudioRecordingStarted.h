//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface MHSchemaMHAssistantDaemonAudioRecordingStarted
{
    int _audioInputRoute;	// 8 = 0x8
    int _source;	// 12 = 0xc
    NSString *_audioInterfaceVendorId;	// 16 = 0x10
    NSString *_audioInterfaceProductId;	// 24 = 0x18
    struct {
        unsigned int audioInputRoute:1;
        unsigned int source:1;
    } _has;	// 32 = 0x20
    _Bool _hasAudioInterfaceVendorId;	// 36 = 0x24
    _Bool _hasAudioInterfaceProductId;	// 37 = 0x25
}

- (void).cxx_destruct;	// IMP=0x00000000001da0c7
@property(nonatomic) _Bool hasAudioInterfaceProductId; // @synthesize hasAudioInterfaceProductId=_hasAudioInterfaceProductId;
@property(nonatomic) _Bool hasAudioInterfaceVendorId; // @synthesize hasAudioInterfaceVendorId=_hasAudioInterfaceVendorId;
@property(copy, nonatomic) NSString *audioInterfaceProductId; // @synthesize audioInterfaceProductId=_audioInterfaceProductId;
@property(copy, nonatomic) NSString *audioInterfaceVendorId; // @synthesize audioInterfaceVendorId=_audioInterfaceVendorId;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) int audioInputRoute; // @synthesize audioInputRoute=_audioInputRoute;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001d9e12
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001d9d54
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001d99dc
- (unsigned long long)hash;	// IMP=0x00000000001d9940
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d9618
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d9523
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d9516
- (void)deleteAudioInterfaceProductId;	// IMP=0x00000000001d9502
- (void)deleteAudioInterfaceVendorId;	// IMP=0x00000000001d94d9
- (void)deleteSource;	// IMP=0x00000000001d949a
@property(nonatomic) _Bool hasSource;
- (void)deleteAudioInputRoute;	// IMP=0x00000000001d9427
@property(nonatomic) _Bool hasAudioInputRoute;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034bceb

@end
