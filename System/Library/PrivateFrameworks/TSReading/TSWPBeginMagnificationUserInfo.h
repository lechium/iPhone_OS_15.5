//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSWPRep;

@interface TSWPBeginMagnificationUserInfo : NSObject
{
    TSWPRep *_target;	// 8 = 0x8
    struct CGPoint _magnificationPoint;	// 16 = 0x10
    struct CGPoint _offset;	// 32 = 0x20
    _Bool _animated;	// 48 = 0x30
}

@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) struct CGPoint magnificationPoint; // @synthesize magnificationPoint=_magnificationPoint;
@property(nonatomic) TSWPRep *target; // @synthesize target=_target;

@end

