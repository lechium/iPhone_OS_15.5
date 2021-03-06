//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VisualVoicemail/NSCopying-Protocol.h>

@class NSString, VMAudioMessage, VMTranscriptMessage;

@interface VMVoicemailMessage : PBCodable <NSCopying>
{
    double _date;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    VMAudioMessage *_audio;	// 24 = 0x18
    NSString *_callbackDestinationID;	// 32 = 0x20
    NSString *_dataURL;	// 40 = 0x28
    unsigned int _flags;	// 48 = 0x30
    unsigned int _identifier;	// 52 = 0x34
    unsigned int _protocolVersion;	// 56 = 0x38
    NSString *_receiverLabelID;	// 64 = 0x40
    NSString *_receiverDestinationID;	// 72 = 0x48
    unsigned int _remoteUID;	// 80 = 0x50
    NSString *_senderDestinationID;	// 88 = 0x58
    VMTranscriptMessage *_transcript;	// 96 = 0x60
    NSString *_transcriptionURL;	// 104 = 0x68
    struct {
        unsigned int date:1;
        unsigned int duration:1;
        unsigned int flags:1;
        unsigned int identifier:1;
        unsigned int protocolVersion:1;
        unsigned int remoteUID:1;
    } _has;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000004c48
@property(retain, nonatomic) NSString *receiverLabelID; // @synthesize receiverLabelID=_receiverLabelID;
@property(retain, nonatomic) NSString *receiverDestinationID; // @synthesize receiverDestinationID=_receiverDestinationID;
@property(nonatomic) unsigned int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) VMAudioMessage *audio; // @synthesize audio=_audio;
@property(retain, nonatomic) VMTranscriptMessage *transcript; // @synthesize transcript=_transcript;
@property(retain, nonatomic) NSString *transcriptionURL; // @synthesize transcriptionURL=_transcriptionURL;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSString *dataURL; // @synthesize dataURL=_dataURL;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *callbackDestinationID; // @synthesize callbackDestinationID=_callbackDestinationID;
@property(retain, nonatomic) NSString *senderDestinationID; // @synthesize senderDestinationID=_senderDestinationID;
@property(nonatomic) double date; // @synthesize date=_date;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int remoteUID; // @synthesize remoteUID=_remoteUID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000048b4
- (unsigned long long)hash;	// IMP=0x00000000000044f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000041be
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003f51
- (void)copyTo:(id)arg1;	// IMP=0x0000000000003d77
- (void)writeTo:(id)arg1;	// IMP=0x0000000000003ba1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000003b94
- (id)dictionaryRepresentation;	// IMP=0x00000000000031c5
- (id)description;	// IMP=0x0000000000003116
@property(readonly, nonatomic) _Bool hasReceiverLabelID;
@property(readonly, nonatomic) _Bool hasReceiverDestinationID;
@property(nonatomic) _Bool hasProtocolVersion;
@property(readonly, nonatomic) _Bool hasAudio;
@property(readonly, nonatomic) _Bool hasTranscript;
@property(readonly, nonatomic) _Bool hasTranscriptionURL;
@property(nonatomic) _Bool hasFlags;
@property(readonly, nonatomic) _Bool hasDataURL;
@property(nonatomic) _Bool hasDuration;
@property(readonly, nonatomic) _Bool hasCallbackDestinationID;
@property(readonly, nonatomic) _Bool hasSenderDestinationID;
@property(nonatomic) _Bool hasDate;
@property(nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasRemoteUID;

@end

