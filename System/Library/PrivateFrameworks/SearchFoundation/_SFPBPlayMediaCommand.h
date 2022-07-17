//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBPlayMediaCommand-Protocol.h>

@class NSData, NSString, _SFPBMediaMetadata;

@interface _SFPBPlayMediaCommand : PBCodable <_SFPBPlayMediaCommand, NSSecureCoding>
{
    int _playbackLocation;	// 8 = 0x8
    _SFPBMediaMetadata *_mediaMetadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009c983
@property(nonatomic) int playbackLocation; // @synthesize playbackLocation=_playbackLocation;
@property(retain, nonatomic) _SFPBMediaMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000009c7f2
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000009c734
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000009c50a
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009c326
- (void)writeTo:(id)arg1;	// IMP=0x000000000009c29e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000009c291
- (id)initWithFacade:(id)arg1;	// IMP=0x000000000001e515

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
