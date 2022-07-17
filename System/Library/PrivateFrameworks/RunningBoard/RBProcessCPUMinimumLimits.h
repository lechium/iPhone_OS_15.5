//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RBProcessCPUMinimumLimits : NSObject
{
    unsigned long long _percentage;	// 8 = 0x8
    unsigned long long _duration;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) unsigned long long percentage; // @synthesize percentage=_percentage;
- (id)description;	// IMP=0x000000000001d7bb
- (unsigned long long)hash;	// IMP=0x000000000001d74d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d6e2
- (id)unionLimit:(id)arg1;	// IMP=0x000000000001d626
- (id)initWithPercentage:(unsigned long long)arg1 duration:(unsigned long long)arg2;	// IMP=0x000000000001d5de

@end
