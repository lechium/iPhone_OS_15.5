//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface CLSCalendarEventsCacheDay : NSObject
{
    long long _day;	// 8 = 0x8
    NSMutableSet *_events;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008ba71
@property(readonly, nonatomic) NSMutableSet *events; // @synthesize events=_events;
@property(nonatomic) long long day; // @synthesize day=_day;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008b9cb
- (unsigned long long)hash;	// IMP=0x000000000008b9c1
- (id)debugDescription;	// IMP=0x000000000008b944
- (id)initWithDay:(long long)arg1;	// IMP=0x000000000008b8d3

@end

