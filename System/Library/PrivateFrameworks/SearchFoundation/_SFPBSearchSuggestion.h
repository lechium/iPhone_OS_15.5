//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBSearchSuggestion-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBGraphicalFloat;

@interface _SFPBSearchSuggestion : PBCodable <_SFPBSearchSuggestion, NSSecureCoding>
{
    _Bool _previouslyEngaged;	// 8 = 0x8
    int _type;	// 12 = 0xc
    NSString *_identifier;	// 16 = 0x10
    NSString *_suggestion;	// 24 = 0x18
    NSString *_query;	// 32 = 0x20
    _SFPBGraphicalFloat *_score;	// 40 = 0x28
    NSArray *_duplicateSuggestions;	// 48 = 0x30
    NSString *_topicIdentifier;	// 56 = 0x38
    NSString *_bundleIdentifier;	// 64 = 0x40
    NSString *_fbr;	// 72 = 0x48
    NSString *_scopedSearchApplicationBundleIdentifier;	// 80 = 0x50
    NSString *_utteranceText;	// 88 = 0x58
    NSString *_detailText;	// 96 = 0x60
    NSDictionary *_serverFeatures;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000017ffb6
@property(copy, nonatomic) NSDictionary *serverFeatures; // @synthesize serverFeatures=_serverFeatures;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *utteranceText; // @synthesize utteranceText=_utteranceText;
@property(copy, nonatomic) NSString *scopedSearchApplicationBundleIdentifier; // @synthesize scopedSearchApplicationBundleIdentifier=_scopedSearchApplicationBundleIdentifier;
@property(copy, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property(nonatomic) _Bool previouslyEngaged; // @synthesize previouslyEngaged=_previouslyEngaged;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *topicIdentifier; // @synthesize topicIdentifier=_topicIdentifier;
@property(copy, nonatomic) NSArray *duplicateSuggestions; // @synthesize duplicateSuggestions=_duplicateSuggestions;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) _SFPBGraphicalFloat *score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *suggestion; // @synthesize suggestion=_suggestion;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000017f47e
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000017f3c0
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000017e8d6
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017da44
- (void)writeTo:(id)arg1;	// IMP=0x000000000017d49e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000017d491
- (void)setServerFeatures:(double)arg1 forKey:(id)arg2;	// IMP=0x000000000017d3d4
- (_Bool)getServerFeatures:(double *)arg1 forKey:(id)arg2;	// IMP=0x000000000017d36d
- (id)duplicateSuggestionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000017d1d4
- (unsigned long long)duplicateSuggestionsCount;	// IMP=0x000000000017d1b7
- (void)addDuplicateSuggestions:(id)arg1;	// IMP=0x000000000017d13d
- (void)clearDuplicateSuggestions;	// IMP=0x000000000017d120
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001cf42b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

