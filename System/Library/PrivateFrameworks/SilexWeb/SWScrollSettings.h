//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SWScrollSettings : NSObject
{
    _Bool _scrollEnabled;	// 8 = 0x8
    _Bool _scrollsToTop;	// 9 = 0x9
    _Bool _showsVerticalScrollIndicator;	// 10 = 0xa
}

@property(readonly, nonatomic) _Bool showsVerticalScrollIndicator; // @synthesize showsVerticalScrollIndicator=_showsVerticalScrollIndicator;
@property(readonly, nonatomic) _Bool scrollsToTop; // @synthesize scrollsToTop=_scrollsToTop;
@property(readonly, nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
- (id)initWithScrollEnabled:(_Bool)arg1 scrollsToTop:(_Bool)arg2 showsVerticalScrollIndicator:(_Bool)arg3;	// IMP=0x0000000000004cb5

@end
