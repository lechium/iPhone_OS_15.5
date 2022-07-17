//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting-Protocol.h>

@class _UICollectionLayoutSpacing;

@interface _UICollectionLayoutEdgeSpacing : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting>
{
    _UICollectionLayoutSpacing *_leading;	// 8 = 0x8
    _UICollectionLayoutSpacing *_top;	// 16 = 0x10
    _UICollectionLayoutSpacing *_trailing;	// 24 = 0x18
    _UICollectionLayoutSpacing *_bottom;	// 32 = 0x20
}

+ (id)spacingForLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4;	// IMP=0x00000000011e7c98
+ (id)fixedSpacing:(double)arg1;	// IMP=0x00000000011e7c29
+ (id)flexibleSpacing:(double)arg1;	// IMP=0x00000000011e7bba
+ (id)defaultSpacing;	// IMP=0x00000000011e7b48
- (void).cxx_destruct;	// IMP=0x00000000011e7eb3
- (id)_apiRepresentation;	// IMP=0x00000000011e7dcf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011e7d7a
@property(readonly, nonatomic) _UICollectionLayoutSpacing *bottom;
@property(readonly, nonatomic) _UICollectionLayoutSpacing *trailing;
@property(readonly, nonatomic) _UICollectionLayoutSpacing *top;
@property(readonly, nonatomic) _UICollectionLayoutSpacing *leading;
- (id)initWithLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4;	// IMP=0x00000000011e7a66

@end
