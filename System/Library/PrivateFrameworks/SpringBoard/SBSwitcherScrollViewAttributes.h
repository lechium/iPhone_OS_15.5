//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/NSCopying-Protocol.h>
#import <SpringBoard/NSMutableCopying-Protocol.h>

@interface SBSwitcherScrollViewAttributes : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _scrollViewPagingEnabled;	// 8 = 0x8
    _Bool _interpolatesDuringSwipeToKill;	// 9 = 0x9
    double _decelerationRate;	// 16 = 0x10
    unsigned long long _scrollAxis;	// 24 = 0x18
    struct CGSize _contentSize;	// 32 = 0x20
    struct CGSize _interpageSpacingForPaging;	// 48 = 0x30
    struct CGPoint _pagingOrigin;	// 64 = 0x40
}

@property(nonatomic) _Bool interpolatesDuringSwipeToKill; // @synthesize interpolatesDuringSwipeToKill=_interpolatesDuringSwipeToKill;
@property(nonatomic) struct CGPoint pagingOrigin; // @synthesize pagingOrigin=_pagingOrigin;
@property(nonatomic) struct CGSize interpageSpacingForPaging; // @synthesize interpageSpacingForPaging=_interpageSpacingForPaging;
@property(nonatomic) unsigned long long scrollAxis; // @synthesize scrollAxis=_scrollAxis;
@property(nonatomic) _Bool scrollViewPagingEnabled; // @synthesize scrollViewPagingEnabled=_scrollViewPagingEnabled;
@property(nonatomic) double decelerationRate; // @synthesize decelerationRate=_decelerationRate;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (id)_copyWithClass:(Class)arg1;	// IMP=0x00000000006912a6
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000691278
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000069124a

@end
