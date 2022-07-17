//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenTimeCore/STCoreAnalyticsEvent-Protocol.h>

@class NSDictionary, NSString;

@interface STViewAllActivityCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>
{
    _Bool _userIsManaged;	// 8 = 0x8
    _Bool _userIsRemote;	// 9 = 0x9
    long long _daysSinceLastView;	// 16 = 0x10
    long long _userAgeGroup;	// 24 = 0x18
}

+ (id)description;	// IMP=0x0000000000062488
@property(readonly) _Bool userIsRemote; // @synthesize userIsRemote=_userIsRemote;
@property(readonly) _Bool userIsManaged; // @synthesize userIsManaged=_userIsManaged;
@property(readonly) long long userAgeGroup; // @synthesize userAgeGroup=_userAgeGroup;
@property(readonly) long long daysSinceLastView; // @synthesize daysSinceLastView=_daysSinceLastView;
@property(readonly, copy) NSDictionary *payload;
@property(readonly, copy) NSString *name;
- (id)initWithDaysSinceLastView:(long long)arg1 userAgeGroup:(long long)arg2 userIsManaged:(_Bool)arg3 userIsRemote:(_Bool)arg4;	// IMP=0x0000000000062422

// Remaining properties
@property(readonly, copy) NSString *description;

@end
