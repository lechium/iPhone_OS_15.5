//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString, _MRCommandOptionsProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRReceivedCommandAppOptionsProtobuf;

@interface _MRReceivedCommandProtobuf : PBCodable <NSCopying>
{
    long long _destinationAppProcessID;	// 8 = 0x8
    _MRReceivedCommandAppOptionsProtobuf *_appOptions;	// 16 = 0x10
    int _command;	// 24 = 0x18
    NSString *_destinationAppDisplayID;	// 32 = 0x20
    _MRCommandOptionsProtobuf *_options;	// 40 = 0x28
    int _originUID;	// 48 = 0x30
    _MRNowPlayingPlayerPathProtobuf *_playerPath;	// 56 = 0x38
    NSString *_remoteControlInterfaceID;	// 64 = 0x40
    NSString *_senderAppDisplayID;	// 72 = 0x48
    struct {
        unsigned int destinationAppProcessID:1;
        unsigned int command:1;
        unsigned int originUID:1;
    } _has;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000002a612
@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
@property(retain, nonatomic) _MRReceivedCommandAppOptionsProtobuf *appOptions; // @synthesize appOptions=_appOptions;
@property(retain, nonatomic) NSString *remoteControlInterfaceID; // @synthesize remoteControlInterfaceID=_remoteControlInterfaceID;
@property(nonatomic) long long destinationAppProcessID; // @synthesize destinationAppProcessID=_destinationAppProcessID;
@property(retain, nonatomic) NSString *destinationAppDisplayID; // @synthesize destinationAppDisplayID=_destinationAppDisplayID;
@property(retain, nonatomic) NSString *senderAppDisplayID; // @synthesize senderAppDisplayID=_senderAppDisplayID;
@property(nonatomic) int originUID; // @synthesize originUID=_originUID;
@property(retain, nonatomic) _MRCommandOptionsProtobuf *options; // @synthesize options=_options;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002a38e
- (unsigned long long)hash;	// IMP=0x000000000002a243
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002a00f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029e67
- (void)copyTo:(id)arg1;	// IMP=0x0000000000029d25
- (void)writeTo:(id)arg1;	// IMP=0x0000000000029be9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000029bdc
- (id)dictionaryRepresentation;	// IMP=0x0000000000028f9c
- (id)description;	// IMP=0x0000000000028eed
@property(readonly, nonatomic) _Bool hasPlayerPath;
@property(readonly, nonatomic) _Bool hasAppOptions;
@property(readonly, nonatomic) _Bool hasRemoteControlInterfaceID;
@property(nonatomic) _Bool hasDestinationAppProcessID;
@property(readonly, nonatomic) _Bool hasDestinationAppDisplayID;
@property(readonly, nonatomic) _Bool hasSenderAppDisplayID;
@property(nonatomic) _Bool hasOriginUID;
@property(readonly, nonatomic) _Bool hasOptions;
- (int)StringAsCommand:(id)arg1;	// IMP=0x0000000000028634
- (id)commandAsString:(int)arg1;	// IMP=0x000000000002812c
@property(nonatomic) _Bool hasCommand;
@property(nonatomic) int command; // @synthesize command=_command;

@end
