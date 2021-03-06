//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBMediaArtworkImage-Protocol.h>

@class NSData, NSString;

@interface _SFPBMediaArtworkImage : PBCodable <_SFPBMediaArtworkImage, NSSecureCoding>
{
    int _mediaEntityType;	// 8 = 0x8
    NSString *_persistentID;	// 16 = 0x10
    NSString *_spotlightIdentifier;	// 24 = 0x18
    NSString *_universalLibraryID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000627c2
@property(copy, nonatomic) NSString *universalLibraryID; // @synthesize universalLibraryID=_universalLibraryID;
@property(nonatomic) int mediaEntityType; // @synthesize mediaEntityType=_mediaEntityType;
@property(copy, nonatomic) NSString *spotlightIdentifier; // @synthesize spotlightIdentifier=_spotlightIdentifier;
@property(copy, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000006253e
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000062480
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000621a8
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000061d10
- (void)writeTo:(id)arg1;	// IMP=0x0000000000061c13
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000061c06
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001d4d8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

