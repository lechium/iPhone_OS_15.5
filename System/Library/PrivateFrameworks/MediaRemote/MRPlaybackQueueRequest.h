//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>
#import <MediaRemote/NSSecureCoding-Protocol.h>

@class MRPlayerPath, NSArray, NSData, NSDictionary, NSString, _MRPlaybackQueueRequestProtobuf;

@interface MRPlaybackQueueRequest : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _includeMetadata;	// 8 = 0x8
    _Bool _includeLyrics;	// 9 = 0x9
    _Bool _includeSections;	// 10 = 0xa
    _Bool _includeInfo;	// 11 = 0xb
    _Bool _includeLanguageOptions;	// 12 = 0xc
    _Bool _includeParticipants;	// 13 = 0xd
    _Bool _hasLocation;	// 14 = 0xe
    _Bool _hasLength;	// 15 = 0xf
    _Bool _hasIncludeMetadata;	// 16 = 0x10
    _Bool _hasArtworkWidth;	// 17 = 0x11
    _Bool _hasArtworkHeight;	// 18 = 0x12
    _Bool _hasIncludeLyrics;	// 19 = 0x13
    _Bool _hasIncludeSections;	// 20 = 0x14
    _Bool _hasIncludeInfo;	// 21 = 0x15
    _Bool _hasIncludeLanguageOptions;	// 22 = 0x16
    _Bool _hasIncludeParticipants;	// 23 = 0x17
    _Bool _returnContentItemAssetsInUserCompletion;	// 24 = 0x18
    _Bool _hasReturnContentItemAssetsInUserCompletion;	// 25 = 0x19
    _Bool _legacyNowPlayingInfoRequest;	// 26 = 0x1a
    _Bool _hasLegacyNowPlayingInfoRequest;	// 27 = 0x1b
    _Bool _hasCachingPolicy;	// 28 = 0x1c
    unsigned int _cachingPolicy;	// 32 = 0x20
    double _artworkWidth;	// 40 = 0x28
    double _artworkHeight;	// 48 = 0x30
    NSString *_requestIdentifier;	// 56 = 0x38
    NSString *_label;	// 64 = 0x40
    MRPlayerPath *_playerPath;	// 72 = 0x48
    NSArray *_contentItemIdentifiers;	// 80 = 0x50
    long long _location;	// 88 = 0x58
    long long _length;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000014d7c8
+ (double)defaultArtwortHeight;	// IMP=0x000000000014bfe1
+ (double)defaultArtworkWidth;	// IMP=0x000000000014bfd3
+ (id)requestWithCurrentState:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000014b6f4
+ (id)defaultPlaybackQueueRequestWithRange:(struct _NSRange)arg1;	// IMP=0x000000000014b685
+ (id)defaultPlaybackQueueRequest;	// IMP=0x000000000014b66c
- (void).cxx_destruct;	// IMP=0x000000000014e163
@property(nonatomic) _Bool hasCachingPolicy; // @synthesize hasCachingPolicy=_hasCachingPolicy;
@property(nonatomic) unsigned int cachingPolicy; // @synthesize cachingPolicy=_cachingPolicy;
@property(nonatomic) _Bool hasLegacyNowPlayingInfoRequest; // @synthesize hasLegacyNowPlayingInfoRequest=_hasLegacyNowPlayingInfoRequest;
@property(nonatomic, getter=isLegacyNowPlayingInfoRequest) _Bool legacyNowPlayingInfoRequest; // @synthesize legacyNowPlayingInfoRequest=_legacyNowPlayingInfoRequest;
@property(nonatomic) _Bool hasReturnContentItemAssetsInUserCompletion; // @synthesize hasReturnContentItemAssetsInUserCompletion=_hasReturnContentItemAssetsInUserCompletion;
@property(nonatomic) _Bool returnContentItemAssetsInUserCompletion; // @synthesize returnContentItemAssetsInUserCompletion=_returnContentItemAssetsInUserCompletion;
@property(nonatomic) _Bool hasIncludeParticipants; // @synthesize hasIncludeParticipants=_hasIncludeParticipants;
@property(nonatomic) _Bool hasIncludeLanguageOptions; // @synthesize hasIncludeLanguageOptions=_hasIncludeLanguageOptions;
@property(nonatomic) _Bool hasIncludeInfo; // @synthesize hasIncludeInfo=_hasIncludeInfo;
@property(nonatomic) _Bool hasIncludeSections; // @synthesize hasIncludeSections=_hasIncludeSections;
@property(nonatomic) _Bool hasIncludeLyrics; // @synthesize hasIncludeLyrics=_hasIncludeLyrics;
@property(nonatomic) _Bool hasArtworkHeight; // @synthesize hasArtworkHeight=_hasArtworkHeight;
@property(nonatomic) _Bool hasArtworkWidth; // @synthesize hasArtworkWidth=_hasArtworkWidth;
@property(nonatomic) _Bool hasIncludeMetadata; // @synthesize hasIncludeMetadata=_hasIncludeMetadata;
@property(nonatomic) _Bool hasLength; // @synthesize hasLength=_hasLength;
@property(nonatomic) long long length; // @synthesize length=_length;
@property(nonatomic) _Bool hasLocation; // @synthesize hasLocation=_hasLocation;
@property(nonatomic) long long location; // @synthesize location=_location;
@property(copy, nonatomic) NSArray *contentItemIdentifiers; // @synthesize contentItemIdentifiers=_contentItemIdentifiers;
@property(retain, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(nonatomic) double artworkHeight; // @synthesize artworkHeight=_artworkHeight;
@property(nonatomic) double artworkWidth; // @synthesize artworkWidth=_artworkWidth;
@property(nonatomic) _Bool includeParticipants; // @synthesize includeParticipants=_includeParticipants;
@property(nonatomic) _Bool includeLanguageOptions; // @synthesize includeLanguageOptions=_includeLanguageOptions;
@property(nonatomic) _Bool includeInfo; // @synthesize includeInfo=_includeInfo;
@property(nonatomic) _Bool includeSections; // @synthesize includeSections=_includeSections;
@property(nonatomic) _Bool includeLyrics; // @synthesize includeLyrics=_includeLyrics;
@property(nonatomic) _Bool includeMetadata; // @synthesize includeMetadata=_includeMetadata;
- (void)performRequestForDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000014de05
- (_Bool)exactMatch:(id)arg1;	// IMP=0x000000000014dca8
- (_Bool)match:(id)arg1;	// IMP=0x000000000014db50
- (id)requestByRemovingArtwork;	// IMP=0x000000000014db09
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000014d92a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000014d8b1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000014d7d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014d341
- (id)description;	// IMP=0x000000000014ceab
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014c5fb
@property(readonly, nonatomic) MRPlaybackQueueRequest *skeleton;
@property(readonly, nonatomic) _Bool containsNonDefaultAssets;
@property(readonly, nonatomic) _Bool shouldRequestItemNotConsideringMetadata;
@property(readonly, nonatomic) _Bool shouldRequestItem;
@property(readonly, nonatomic) _Bool rangeContainsNowPlayingItem;
@property(readonly, nonatomic) _Bool includeArtwork;
@property(readonly, nonatomic) _Bool hasRange;
@property(readonly, nonatomic) struct _NSRange range;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) _MRPlaybackQueueRequestProtobuf *protobuf;
- (id)initWithData:(id)arg1;	// IMP=0x000000000014bb87
- (id)initWithProtobuf:(id)arg1;	// IMP=0x000000000014b8dc
- (id)initFromTransactionName:(unsigned long long)arg1;	// IMP=0x000000000014b82c
- (id)initWithIdentifiers:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000014b7fa
- (id)initWithIdentifiers:(id)arg1;	// IMP=0x000000000014b787
- (id)initWithRange:(struct _NSRange)arg1;	// IMP=0x000000000014b755

@end
