//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBImageValue-Protocol.h>

@class NSData, NSString, _INPBValueMetadata;

@interface _INPBImageValue : PBCodable <_INPBImageValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int height:1;
        unsigned int renderingMode:1;
        unsigned int type:1;
        unsigned int width:1;
    } _has;	// 8 = 0x8
    int _renderingMode;	// 12 = 0xc
    int _type;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
    double _height;	// 32 = 0x20
    NSString *_proxyServiceIdentifier;	// 40 = 0x28
    NSString *_uri;	// 48 = 0x30
    _INPBValueMetadata *_valueMetadata;	// 56 = 0x38
    double _width;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002ce5d4
- (void).cxx_destruct;	// IMP=0x00000000002ce150
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int renderingMode; // @synthesize renderingMode=_renderingMode;
@property(copy, nonatomic) NSString *proxyServiceIdentifier; // @synthesize proxyServiceIdentifier=_proxyServiceIdentifier;
@property(nonatomic) double height; // @synthesize height=_height;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (id)dictionaryRepresentation;	// IMP=0x00000000002cdc98
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002cd2e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002cd0fe
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002cd06c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002ccf6d
- (void)writeTo:(id)arg1;	// IMP=0x00000000002ccd6f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002ccd62
@property(nonatomic) _Bool hasWidth;
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(readonly, nonatomic) _Bool hasUri;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000002ccbd8
- (id)typeAsString:(int)arg1;	// IMP=0x00000000002ccb4b
@property(nonatomic) _Bool hasType;
- (int)StringAsRenderingMode:(id)arg1;	// IMP=0x00000000002cca59
- (id)renderingModeAsString:(int)arg1;	// IMP=0x00000000002cc9f3
@property(nonatomic) _Bool hasRenderingMode;
@property(readonly, nonatomic) _Bool hasProxyServiceIdentifier;
@property(nonatomic) _Bool hasHeight;
@property(readonly, nonatomic) _Bool hasData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

