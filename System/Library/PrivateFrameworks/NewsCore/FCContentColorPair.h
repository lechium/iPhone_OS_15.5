//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCColor;

@interface FCContentColorPair : NSObject
{
    FCColor *_lightColor;	// 8 = 0x8
    FCColor *_darkColor;	// 16 = 0x10
}

+ (id)colorPairWithDictionary:(id)arg1;	// IMP=0x0000000000030f0a
- (void).cxx_destruct;	// IMP=0x0000000000002d8d
@property(readonly, copy, nonatomic) FCColor *darkColor; // @synthesize darkColor=_darkColor;
@property(readonly, copy, nonatomic) FCColor *lightColor; // @synthesize lightColor=_lightColor;
- (id)initWithLightColor:(id)arg1 darkColor:(id)arg2;	// IMP=0x0000000000002cc0

@end

