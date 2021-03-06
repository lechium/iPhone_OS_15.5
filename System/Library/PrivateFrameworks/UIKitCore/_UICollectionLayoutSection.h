//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting-Protocol.h>

@class NSArray, NSIndexSet, _UICollectionLayoutGroup;

@interface _UICollectionLayoutSection : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting>
{
    _UICollectionLayoutGroup *_layoutGroup;	// 8 = 0x8
    struct NSDirectionalEdgeInsets _contentInsets;	// 16 = 0x10
    double _interGroupSpacing;	// 48 = 0x30
    long long _orthogonalScrollingBehavior;	// 56 = 0x38
    NSArray *_boundarySupplementaryItems;	// 64 = 0x40
    _Bool _supplementariesFollowContentInsets;	// 72 = 0x48
    CDUnknownBlockType _visibleItemsTransformer;	// 80 = 0x50
    NSArray *_decorationItems;	// 88 = 0x58
    NSArray *_supplementaryItems;	// 96 = 0x60
    NSIndexSet *_pinnedSupplementaryItemIndexes;	// 104 = 0x68
}

+ (id)layoutSectionWithLayoutGroup:(id)arg1;	// IMP=0x00000000011e486f
- (void).cxx_destruct;	// IMP=0x00000000011e4cdb
@property(copy, nonatomic) NSIndexSet *pinnedSupplementaryItemIndexes; // @synthesize pinnedSupplementaryItemIndexes=_pinnedSupplementaryItemIndexes;
@property(copy, nonatomic) NSArray *supplementaryItems; // @synthesize supplementaryItems=_supplementaryItems;
@property(copy, nonatomic) NSArray *decorationItems; // @synthesize decorationItems=_decorationItems;
@property(copy, nonatomic) CDUnknownBlockType visibleItemsTransformer; // @synthesize visibleItemsTransformer=_visibleItemsTransformer;
@property(nonatomic) _Bool supplementariesFollowContentInsets; // @synthesize supplementariesFollowContentInsets=_supplementariesFollowContentInsets;
@property(copy, nonatomic) NSArray *boundarySupplementaryItems; // @synthesize boundarySupplementaryItems=_boundarySupplementaryItems;
@property(nonatomic) long long orthogonalScrollingBehavior; // @synthesize orthogonalScrollingBehavior=_orthogonalScrollingBehavior;
@property(nonatomic) double interGroupSpacing; // @synthesize interGroupSpacing=_interGroupSpacing;
@property(nonatomic) struct NSDirectionalEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (id)_apiRepresentation;	// IMP=0x00000000011e49ad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011e492d
- (id)initWithLayoutGroup:(id)arg1;	// IMP=0x00000000011e47c5
- (id)initWithLayoutGroup:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets)arg2 interGroupSpacing:(double)arg3 orthogonalScrollingBehavior:(long long)arg4 boundarySupplementaryItems:(id)arg5 supplementariesFollowContentInsets:(_Bool)arg6 visibleItemsTransformer:(CDUnknownBlockType)arg7 decorationItems:(id)arg8 supplementaryItems:(id)arg9 pinnedSupplementaryItemIndexes:(id)arg10;	// IMP=0x00000000011e4655

@end

