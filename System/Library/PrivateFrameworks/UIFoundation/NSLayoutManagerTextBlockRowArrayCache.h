//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NSLayoutManagerTextBlockRowArrayCache : NSObject
{
    struct _NSRange _rowCharRange;	// 8 = 0x8
    double _containerWidth;	// 24 = 0x18
    NSArray *_rowArray;	// 32 = 0x20
    _Bool _collapseBorders;	// 40 = 0x28
}

- (void)dealloc;	// IMP=0x000000000006f35e
- (id)initWithRowCharRange:(struct _NSRange)arg1 containerWidth:(double)arg2 rowArray:(id)arg3 collapseBorders:(_Bool)arg4;	// IMP=0x000000000006f2e3

@end

