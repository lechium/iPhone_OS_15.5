//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarDaemon/EKDefaultPropertiesLoading-Protocol.h>
#import <CalendarDaemon/NSSecureCoding-Protocol.h>

@class NSString, NSTimeZone;

@interface CADEventPredicate <EKDefaultPropertiesLoading, NSSecureCoding>
{
    _Bool _shouldLoadProposedTimesInRange;	// 32 = 0x20
    _Bool _shouldLoadDefaultProperties;	// 33 = 0x21
    _Bool _excludeAllDayEvents;	// 34 = 0x22
    _Bool _excludeTimedEvents;	// 35 = 0x23
    _Bool _excludeDeclined;	// 36 = 0x24
    _Bool _excludeProposed;	// 37 = 0x25
    _Bool _excludeDeclinedUnlessProposed;	// 38 = 0x26
}

+ (id)predicateWithStartDate:(id)arg1 title:(id)arg2 calendars:(id)arg3;	// IMP=0x000000000000231d
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5;	// IMP=0x000000000000224b
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(_Bool)arg5;	// IMP=0x0000000000002186
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;	// IMP=0x00000000000020d4
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000020cc
@property(nonatomic) _Bool excludeDeclinedUnlessProposed; // @synthesize excludeDeclinedUnlessProposed=_excludeDeclinedUnlessProposed;
@property(nonatomic) _Bool excludeProposed; // @synthesize excludeProposed=_excludeProposed;
@property(nonatomic) _Bool excludeDeclined; // @synthesize excludeDeclined=_excludeDeclined;
@property(nonatomic) _Bool excludeTimedEvents; // @synthesize excludeTimedEvents=_excludeTimedEvents;
@property(nonatomic) _Bool excludeAllDayEvents; // @synthesize excludeAllDayEvents=_excludeAllDayEvents;
@property(readonly, nonatomic) _Bool shouldLoadDefaultProperties; // @synthesize shouldLoadDefaultProperties=_shouldLoadDefaultProperties;
@property(readonly, nonatomic) _Bool shouldLoadProposedTimesInRange; // @synthesize shouldLoadProposedTimesInRange=_shouldLoadProposedTimesInRange;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002e19
- (id)predicateFormat;	// IMP=0x0000000000002b32
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002b27
- (id)defaultPropertiesToLoad;	// IMP=0x0000000000002b1d
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) NSString *eventUUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000028d0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000263f
- (id)initWithStartDate:(id)arg1 title:(id)arg2 calendars:(id)arg3;	// IMP=0x000000000000254e
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(_Bool)arg5;	// IMP=0x0000000000002529
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;	// IMP=0x0000000000002507
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5;	// IMP=0x00000000000023b0
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;	// IMP=0x0000000000003407

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
