//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PHAssetPhotoCommentProperties
{
    _Bool _hasUserLiked;	// 16 = 0x10
    unsigned long long _commentCount;	// 24 = 0x18
    unsigned long long _likeCount;	// 32 = 0x20
}

+ (id)propertiesToFetch;	// IMP=0x0000000000104734
+ (_Bool)isToMany;	// IMP=0x000000000010472c
+ (id)keyPathToPrimaryObject;	// IMP=0x0000000000104724
+ (id)keyPathFromPrimaryObject;	// IMP=0x000000000010471c
+ (id)entityName;	// IMP=0x000000000010470f
+ (id)propertySetName;	// IMP=0x0000000000104702
@property(readonly, nonatomic) _Bool hasUserLiked; // @synthesize hasUserLiked=_hasUserLiked;
@property(readonly, nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(readonly, nonatomic) unsigned long long commentCount; // @synthesize commentCount=_commentCount;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;	// IMP=0x00000000001043a8

@end

