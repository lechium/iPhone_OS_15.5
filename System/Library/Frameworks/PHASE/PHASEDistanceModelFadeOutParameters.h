//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PHASEDistanceModelFadeOutParameters : NSObject
{
    double _cullDistance;	// 8 = 0x8
}

+ (id)new;	// IMP=0x00000000001c0b3a
@property(readonly, nonatomic) double cullDistance; // @synthesize cullDistance=_cullDistance;
- (id)initWithCullDistance:(double)arg1;	// IMP=0x00000000001c0b64
- (id)initWithMaximumDistance:(double)arg1 fadeOutLength:(double)arg2 curveType:(long long)arg3;	// IMP=0x00000000001c0b52
- (id)init;	// IMP=0x00000000001c0afc
- (void)setMaximumDistance:(double)arg1;	// IMP=0x00000000001c0af1
@property(readonly, nonatomic) double maximumDistance; // @dynamic maximumDistance;

@end
