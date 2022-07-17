//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXGSpriteReference;

@interface PXGDecorationReference : NSObject
{
    PXGSpriteReference *_decoratedSpriteReference;	// 8 = 0x8
    long long _decorationType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006f1700
@property(readonly, nonatomic) long long decorationType; // @synthesize decorationType=_decorationType;
@property(readonly, nonatomic) PXGSpriteReference *decoratedSpriteReference; // @synthesize decoratedSpriteReference=_decoratedSpriteReference;
- (id)init;	// IMP=0x00000000006f1672
- (id)initWithDecoratedSpriteReference:(id)arg1 decorationType:(long long)arg2;	// IMP=0x00000000006f15fc

@end
