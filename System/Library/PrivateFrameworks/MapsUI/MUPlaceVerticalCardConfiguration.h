//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MUPlaceVerticalCardConfiguration : NSObject
{
    _Bool _showSeparators;	// 8 = 0x8
    struct NSDirectionalEdgeInsets _bottomSeparatorInset;	// 16 = 0x10
}

+ (id)separatorConfiguration;	// IMP=0x000000000000198e
+ (id)plainConfiguration;	// IMP=0x0000000000001959
@property(nonatomic) struct NSDirectionalEdgeInsets bottomSeparatorInset; // @synthesize bottomSeparatorInset=_bottomSeparatorInset;
@property(nonatomic) _Bool showSeparators; // @synthesize showSeparators=_showSeparators;

@end

