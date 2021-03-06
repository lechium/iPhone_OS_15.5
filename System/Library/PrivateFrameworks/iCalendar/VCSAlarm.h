//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VCSDate;

@interface VCSAlarm
{
    unsigned long long _alarmType;	// 8 = 0x8
    NSString *_summary;	// 16 = 0x10
    NSString *_body;	// 24 = 0x18
    unsigned long long _triggerType;	// 32 = 0x20
    VCSDate *_triggerDate;	// 40 = 0x28
    double _triggerDuration;	// 48 = 0x30
}

+ (id)_componentsWithISO8601DurationString:(id)arg1;	// IMP=0x000000000000276c
- (void).cxx_destruct;	// IMP=0x0000000000002a41
@property(readonly, nonatomic) double triggerDuration; // @synthesize triggerDuration=_triggerDuration;
@property(readonly, nonatomic) VCSDate *triggerDate; // @synthesize triggerDate=_triggerDate;
@property(readonly, nonatomic) unsigned long long triggerType; // @synthesize triggerType=_triggerType;
@property(readonly, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(readonly, nonatomic) unsigned long long alarmType; // @synthesize alarmType=_alarmType;
- (id)dictify;	// IMP=0x0000000000002521
- (void)ensureRelativeAlarmWithStartDate:(id)arg1;	// IMP=0x0000000000002417
- (unsigned long long)entityType;	// IMP=0x000000000000240c
- (id)initWithLine:(id)arg1 parseState:(id)arg2 property:(const CDStruct_8fc448ea *)arg3;	// IMP=0x0000000000001fd4

@end

