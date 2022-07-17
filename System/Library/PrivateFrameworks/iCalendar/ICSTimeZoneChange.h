//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ICSTimeZoneChange : NSObject
{
    double _interval;	// 8 = 0x8
    long long _tzOffsetTo;	// 16 = 0x10
}

- (long long)compare:(id)arg1;	// IMP=0x00000000000279ca
- (id)description;	// IMP=0x00000000000278b9
- (_Bool)isCloseTo:(id)arg1;	// IMP=0x0000000000027830
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000277a7
- (long long)tzOffsetTo;	// IMP=0x000000000002779d
- (double)interval;	// IMP=0x0000000000027792
- (id)initWithTimeInterval:(double)arg1 tzOffsetTo:(long long)arg2;	// IMP=0x000000000002774b

@end
