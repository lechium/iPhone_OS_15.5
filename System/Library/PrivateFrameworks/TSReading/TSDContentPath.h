//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TSDContentPath : NSObject
{
    NSArray *_contentLocations;	// 8 = 0x8
}

+ (id)contentPathWithLocations:(id)arg1;	// IMP=0x000000000021f0b8
@property(copy, nonatomic) NSArray *contentLocations; // @synthesize contentLocations=_contentLocations;
- (id)i_contentLocations;	// IMP=0x000000000021f409
- (id)contentLocationAtTime:(double)arg1 withTimingFunction:(id)arg2;	// IMP=0x000000000021f12b
- (void)dealloc;	// IMP=0x000000000021f0f0

@end
