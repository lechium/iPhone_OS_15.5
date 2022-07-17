//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface HDXPCAlarmEvent : NSObject
{
    _Bool _isUserVisible;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSDate *_fireDate;	// 24 = 0x18
}

+ (id)_eventWithName:(id)arg1;	// IMP=0x000000000000b5f4
- (void).cxx_destruct;	// IMP=0x000000000000b8d7
@property(readonly, nonatomic) _Bool isUserVisible; // @synthesize isUserVisible=_isUserVisible;
@property(readonly, copy, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x000000000000b829
- (unsigned long long)hash;	// IMP=0x000000000000b7e5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000b737
- (id)initWithName:(id)arg1 fireDate:(id)arg2 isUserVisible:(_Bool)arg3;	// IMP=0x000000000000b678

@end
