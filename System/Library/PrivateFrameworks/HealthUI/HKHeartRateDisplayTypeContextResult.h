//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKStatistics;

@interface HKHeartRateDisplayTypeContextResult : NSObject
{
    long long _context;	// 8 = 0x8
    HKStatistics *_statistics;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000040d4
@property(retain, nonatomic) HKStatistics *statistics; // @synthesize statistics=_statistics;
@property(nonatomic) long long context; // @synthesize context=_context;
- (id)debugDescription;	// IMP=0x0000000000004019
- (id)initWithContext:(long long)arg1 statistics:(id)arg2;	// IMP=0x0000000000003f92

@end

