//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/NSCopying-Protocol.h>

@interface MapsSuggestionsETARequirements : NSObject <NSCopying>
{
    double _maxAge;	// 8 = 0x8
    double _maxDistance;	// 16 = 0x10
    double _minAccuracy;	// 24 = 0x18
}

@property(readonly, nonatomic) double minAccuracy; // @synthesize minAccuracy=_minAccuracy;
@property(readonly, nonatomic) double maxDistance; // @synthesize maxDistance=_maxDistance;
@property(readonly, nonatomic) double maxAge; // @synthesize maxAge=_maxAge;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000037159
- (id)initWithMaxAge:(double)arg1 maxDistance:(double)arg2 minAccuracy:(double)arg3;	// IMP=0x0000000000036f3c

@end
