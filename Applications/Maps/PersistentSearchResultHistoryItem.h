//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class SearchResult;

__attribute__((visibility("hidden")))
@interface PersistentSearchResultHistoryItem : PBCodable
{
    SearchResult *_searchResult;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000093e013
@property(retain, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000093df94
- (unsigned long long)hash;	// IMP=0x001000000093df77
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000093dedd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000093de65
- (void)copyTo:(id)arg1;	// IMP=0x001000000093de3b
- (void)writeTo:(id)arg1;	// IMP=0x001000000093de17
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000093de0a
- (id)dictionaryRepresentation;	// IMP=0x001000000093dbab
- (id)description;	// IMP=0x001000000093dafc
@property(readonly, nonatomic) _Bool hasSearchResult;

@end
