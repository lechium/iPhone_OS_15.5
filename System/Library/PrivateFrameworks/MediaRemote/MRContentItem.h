//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class MRArtwork, MRContentItemMetadata, NSArray, NSData, NSDictionary, NSString, _MRContentItemProtobuf;

@interface MRContentItem : NSObject <NSCopying>
{
    MRContentItemMetadata *_metadata;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_info;	// 24 = 0x18
    NSArray *_availableLanguageOptions;	// 32 = 0x20
    NSArray *_currentLanguageOptions;	// 40 = 0x28
    NSArray *_sections;	// 48 = 0x30
    NSString *_parentIdentifier;	// 56 = 0x38
    NSString *_ancestorIdentifier;	// 64 = 0x40
    NSString *_associatedParticipantIdentifier;	// 72 = 0x48
    NSString *_queueIdentifier;	// 80 = 0x50
    NSString *_requestIdentifier;	// 88 = 0x58
    MRArtwork *_artwork;	// 96 = 0x60
}

+ (id)mergeContentItems:(id)arg1;	// IMP=0x0000000000190740
+ (id)extractedIdentifierFromNowPlayingInfo:(id)arg1;	// IMP=0x00000000001905cc
- (void).cxx_destruct;	// IMP=0x0000000000191adb
@property(retain, nonatomic) MRArtwork *artwork; // @synthesize artwork=_artwork;
@property(copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(copy, nonatomic) NSString *queueIdentifier; // @synthesize queueIdentifier=_queueIdentifier;
@property(copy, nonatomic) NSString *associatedParticipantIdentifier; // @synthesize associatedParticipantIdentifier=_associatedParticipantIdentifier;
@property(copy, nonatomic) NSString *ancestorIdentifier; // @synthesize ancestorIdentifier=_ancestorIdentifier;
@property(copy, nonatomic) NSString *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(copy, nonatomic) NSArray *currentLanguageOptions; // @synthesize currentLanguageOptions=_currentLanguageOptions;
@property(copy, nonatomic) NSArray *availableLanguageOptions; // @synthesize availableLanguageOptions=_availableLanguageOptions;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000191443
- (id)description;	// IMP=0x00000000001913b8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000190a04
@property(readonly, nonatomic) MRContentItem *skeleton;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000018ffdb
- (void)setNowPlayingInfo:(id)arg1 policy:(unsigned char)arg2 request:(id)arg3;	// IMP=0x000000000018d170
@property(readonly, copy, nonatomic) NSDictionary *nowPlayingInfo;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, nonatomic) _MRContentItemProtobuf *protobuf;
@property(copy, nonatomic) MRContentItemMetadata *metadata;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000189d76
- (id)initWithProtobuf:(id)arg1;	// IMP=0x000000000018997f
- (id)initWithNowPlayingInfo:(id)arg1;	// IMP=0x000000000018987d
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000001897ea

@end
