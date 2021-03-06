//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface BMPBCommunicationSafetyResultEvent : PBCodable <NSCopying>
{
    double _absoluteTimestamp;	// 8 = 0x8
    NSString *_childId;	// 16 = 0x10
    int _communicationSafetyResultContentType;	// 24 = 0x18
    int _communicationSafetyResultEventDirection;	// 28 = 0x1c
    int _communicationSafetyResultEventType;	// 32 = 0x20
    NSMutableArray *_contactHandles;	// 40 = 0x28
    NSString *_contentId;	// 48 = 0x30
    NSString *_contentURL;	// 56 = 0x38
    NSString *_conversationId;	// 64 = 0x40
    NSString *_conversationURL;	// 72 = 0x48
    NSString *_deviceId;	// 80 = 0x50
    NSData *_imageData;	// 88 = 0x58
    NSString *_senderHandle;	// 96 = 0x60
    NSString *_sourceBundleId;	// 104 = 0x68
    struct {
        unsigned int absoluteTimestamp:1;
        unsigned int communicationSafetyResultContentType:1;
        unsigned int communicationSafetyResultEventDirection:1;
        unsigned int communicationSafetyResultEventType:1;
    } _has;	// 112 = 0x70
}

+ (Class)contactHandlesType;	// IMP=0x00000000000c4038
- (void).cxx_destruct;	// IMP=0x00000000000c5dfa
@property(retain, nonatomic) NSString *conversationURL; // @synthesize conversationURL=_conversationURL;
@property(retain, nonatomic) NSString *contentURL; // @synthesize contentURL=_contentURL;
@property(retain, nonatomic) NSString *senderHandle; // @synthesize senderHandle=_senderHandle;
@property(retain, nonatomic) NSString *sourceBundleId; // @synthesize sourceBundleId=_sourceBundleId;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) NSMutableArray *contactHandles; // @synthesize contactHandles=_contactHandles;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *childId; // @synthesize childId=_childId;
@property(nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000c5940
- (unsigned long long)hash;	// IMP=0x00000000000c5695
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c5366
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c4f97
- (void)copyTo:(id)arg1;	// IMP=0x00000000000c4d34
- (void)writeTo:(id)arg1;	// IMP=0x00000000000c4a69
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000c4a5c
- (id)dictionaryRepresentation;	// IMP=0x00000000000c418b
- (id)description;	// IMP=0x00000000000c40dc
@property(readonly, nonatomic) _Bool hasConversationURL;
@property(readonly, nonatomic) _Bool hasContentURL;
@property(readonly, nonatomic) _Bool hasSenderHandle;
@property(readonly, nonatomic) _Bool hasSourceBundleId;
@property(readonly, nonatomic) _Bool hasImageData;
@property(readonly, nonatomic) _Bool hasConversationId;
@property(readonly, nonatomic) _Bool hasContentId;
- (id)contactHandlesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000c401b
- (unsigned long long)contactHandlesCount;	// IMP=0x00000000000c3ffe
- (void)addContactHandles:(id)arg1;	// IMP=0x00000000000c3f94
- (void)clearContactHandles;	// IMP=0x00000000000c3f77
- (int)StringAsCommunicationSafetyResultContentType:(id)arg1;	// IMP=0x00000000000c3ee5
- (id)communicationSafetyResultContentTypeAsString:(int)arg1;	// IMP=0x00000000000c3e7f
@property(nonatomic) _Bool hasCommunicationSafetyResultContentType;
@property(nonatomic) int communicationSafetyResultContentType; // @synthesize communicationSafetyResultContentType=_communicationSafetyResultContentType;
- (int)StringAsCommunicationSafetyResultEventType:(id)arg1;	// IMP=0x00000000000c3d68
- (id)communicationSafetyResultEventTypeAsString:(int)arg1;	// IMP=0x00000000000c3ce9
@property(nonatomic) _Bool hasCommunicationSafetyResultEventType;
@property(nonatomic) int communicationSafetyResultEventType; // @synthesize communicationSafetyResultEventType=_communicationSafetyResultEventType;
- (int)StringAsCommunicationSafetyResultEventDirection:(id)arg1;	// IMP=0x00000000000c3bed
- (id)communicationSafetyResultEventDirectionAsString:(int)arg1;	// IMP=0x00000000000c3b87
@property(nonatomic) _Bool hasCommunicationSafetyResultEventDirection;
@property(nonatomic) int communicationSafetyResultEventDirection; // @synthesize communicationSafetyResultEventDirection=_communicationSafetyResultEventDirection;
@property(readonly, nonatomic) _Bool hasDeviceId;
@property(readonly, nonatomic) _Bool hasChildId;
@property(nonatomic) _Bool hasAbsoluteTimestamp;

@end

