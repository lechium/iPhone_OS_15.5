//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>

@class CKVItemInfo, NSSet;

@interface CKVSkitSearchHit : NSObject <NSCopying>
{
    float _score;	// 8 = 0x8
    CKVItemInfo *_itemInfo;	// 16 = 0x10
    NSSet *_fields;	// 24 = 0x18
    long long _rank;	// 32 = 0x20
    long long _docId;	// 40 = 0x28
    unsigned long long _matchCount;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000008b8e8
@property(readonly, nonatomic) unsigned long long matchCount; // @synthesize matchCount=_matchCount;
@property(readonly, nonatomic) float score; // @synthesize score=_score;
@property(readonly, nonatomic) long long docId; // @synthesize docId=_docId;
@property(readonly, nonatomic) long long rank; // @synthesize rank=_rank;
@property(readonly, nonatomic) NSSet *fields; // @synthesize fields=_fields;
@property(readonly, nonatomic) CKVItemInfo *itemInfo; // @synthesize itemInfo=_itemInfo;
- (unsigned long long)hash;	// IMP=0x000000000008b774
- (_Bool)isEqualToSearchHit:(id)arg1;	// IMP=0x000000000008b63d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008b5d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008b535
- (id)description;	// IMP=0x000000000008b3e5
- (id)init;	// IMP=0x000000000008b39d
- (id)initWithItemInfo:(id)arg1 fields:(id)arg2 rank:(long long)arg3 docId:(long long)arg4 score:(float)arg5 matchCount:(unsigned long long)arg6;	// IMP=0x000000000008b1bc

@end

