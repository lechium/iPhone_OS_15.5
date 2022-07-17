//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, PSICollectionResult, PSIDate;

@interface PLCollectionSearchResult
{
    PSICollectionResult *_collectionResult;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003b94b8
@property(readonly, nonatomic) PSICollectionResult *collectionResult; // @synthesize collectionResult=_collectionResult;
@property(readonly, nonatomic) unsigned long long collectionType;
@property(readonly, nonatomic) PSIDate *endDate;
@property(readonly, nonatomic) PSIDate *startDate;
@property(readonly, nonatomic) NSDate *sortDate;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *uuid;
- (unsigned long long)assetCount;	// IMP=0x00000000003b93bf
- (id)keyAssetUUID;	// IMP=0x00000000003b93a2
- (id)initWithGroupResult:(id)arg1 collectionResult:(id)arg2;	// IMP=0x00000000003b932a
- (unsigned long long)type;	// IMP=0x00000000003b931f

@end
