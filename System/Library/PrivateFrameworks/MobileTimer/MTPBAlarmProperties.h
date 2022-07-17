//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MobileTimer/NSCopying-Protocol.h>

@class MTPBSound, NSString;

@interface MTPBAlarmProperties : PBCodable <NSCopying>
{
    double _bedtimeDismissedDate;	// 8 = 0x8
    double _bedtimeFiredDate;	// 16 = 0x10
    double _bedtimeSnoozeFireDate;	// 24 = 0x18
    double _dismissedDate;	// 32 = 0x20
    double _firedDate;	// 40 = 0x28
    double _keepOffUntilDate;	// 48 = 0x30
    double _lastModifiedDate;	// 56 = 0x38
    double _snoozeFireDate;	// 64 = 0x40
    NSString *_alarmID;	// 72 = 0x48
    unsigned int _bedtimeDismissedAction;	// 80 = 0x50
    unsigned int _bedtimeHour;	// 84 = 0x54
    unsigned int _bedtimeMinute;	// 88 = 0x58
    unsigned int _bedtimeReminderMinutes;	// 92 = 0x5c
    unsigned int _daySetting;	// 96 = 0x60
    unsigned int _dismissedAction;	// 100 = 0x64
    unsigned int _hour;	// 104 = 0x68
    unsigned int _minute;	// 108 = 0x6c
    unsigned int _onboardingVersion;	// 112 = 0x70
    unsigned int _playOptions;	// 116 = 0x74
    unsigned int _revision;	// 120 = 0x78
    unsigned int _sleepModeOptions;	// 124 = 0x7c
    MTPBSound *_sound;	// 128 = 0x80
    NSString *_title;	// 136 = 0x88
    _Bool _allowsSnooze;	// 144 = 0x90
    _Bool _isEnabled;	// 145 = 0x91
    _Bool _isSleepAlarm;	// 146 = 0x92
    _Bool _sleepMode;	// 147 = 0x93
    _Bool _sleepSchedule;	// 148 = 0x94
    _Bool _sleepTracking;	// 149 = 0x95
    _Bool _timeInBedTracking;	// 150 = 0x96
    struct {
        unsigned int bedtimeDismissedDate:1;
        unsigned int bedtimeFiredDate:1;
        unsigned int bedtimeSnoozeFireDate:1;
        unsigned int dismissedDate:1;
        unsigned int firedDate:1;
        unsigned int keepOffUntilDate:1;
        unsigned int lastModifiedDate:1;
        unsigned int snoozeFireDate:1;
        unsigned int bedtimeDismissedAction:1;
        unsigned int bedtimeHour:1;
        unsigned int bedtimeMinute:1;
        unsigned int bedtimeReminderMinutes:1;
        unsigned int daySetting:1;
        unsigned int dismissedAction:1;
        unsigned int hour:1;
        unsigned int minute:1;
        unsigned int onboardingVersion:1;
        unsigned int playOptions:1;
        unsigned int revision:1;
        unsigned int sleepModeOptions:1;
        unsigned int allowsSnooze:1;
        unsigned int isEnabled:1;
        unsigned int isSleepAlarm:1;
        unsigned int sleepMode:1;
        unsigned int sleepSchedule:1;
        unsigned int sleepTracking:1;
        unsigned int timeInBedTracking:1;
    } _has;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000009f66b
@property(nonatomic) double keepOffUntilDate; // @synthesize keepOffUntilDate=_keepOffUntilDate;
@property(nonatomic) unsigned int bedtimeDismissedAction; // @synthesize bedtimeDismissedAction=_bedtimeDismissedAction;
@property(nonatomic) double bedtimeDismissedDate; // @synthesize bedtimeDismissedDate=_bedtimeDismissedDate;
@property(nonatomic) double bedtimeFiredDate; // @synthesize bedtimeFiredDate=_bedtimeFiredDate;
@property(nonatomic) unsigned int dismissedAction; // @synthesize dismissedAction=_dismissedAction;
@property(nonatomic) _Bool timeInBedTracking; // @synthesize timeInBedTracking=_timeInBedTracking;
@property(nonatomic) unsigned int sleepModeOptions; // @synthesize sleepModeOptions=_sleepModeOptions;
@property(nonatomic) unsigned int onboardingVersion; // @synthesize onboardingVersion=_onboardingVersion;
@property(nonatomic) _Bool sleepSchedule; // @synthesize sleepSchedule=_sleepSchedule;
@property(nonatomic) _Bool sleepTracking; // @synthesize sleepTracking=_sleepTracking;
@property(nonatomic) _Bool sleepMode; // @synthesize sleepMode=_sleepMode;
@property(nonatomic) unsigned int playOptions; // @synthesize playOptions=_playOptions;
@property(nonatomic) double dismissedDate; // @synthesize dismissedDate=_dismissedDate;
@property(nonatomic) double firedDate; // @synthesize firedDate=_firedDate;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) double bedtimeSnoozeFireDate; // @synthesize bedtimeSnoozeFireDate=_bedtimeSnoozeFireDate;
@property(nonatomic) double snoozeFireDate; // @synthesize snoozeFireDate=_snoozeFireDate;
@property(nonatomic) double lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(nonatomic) unsigned int revision; // @synthesize revision=_revision;
@property(nonatomic) unsigned int bedtimeReminderMinutes; // @synthesize bedtimeReminderMinutes=_bedtimeReminderMinutes;
@property(nonatomic) unsigned int bedtimeMinute; // @synthesize bedtimeMinute=_bedtimeMinute;
@property(nonatomic) unsigned int bedtimeHour; // @synthesize bedtimeHour=_bedtimeHour;
@property(nonatomic) _Bool isSleepAlarm; // @synthesize isSleepAlarm=_isSleepAlarm;
@property(retain, nonatomic) MTPBSound *sound; // @synthesize sound=_sound;
@property(nonatomic) unsigned int daySetting; // @synthesize daySetting=_daySetting;
@property(nonatomic) _Bool allowsSnooze; // @synthesize allowsSnooze=_allowsSnooze;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int minute; // @synthesize minute=_minute;
@property(nonatomic) unsigned int hour; // @synthesize hour=_hour;
@property(retain, nonatomic) NSString *alarmID; // @synthesize alarmID=_alarmID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000009f061
- (unsigned long long)hash;	// IMP=0x000000000009e3e6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009dd57
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009d955
- (void)copyTo:(id)arg1;	// IMP=0x000000000009d591
- (void)writeTo:(id)arg1;	// IMP=0x000000000009d19d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000009d190
- (id)dictionaryRepresentation;	// IMP=0x000000000009b736
- (id)description;	// IMP=0x000000000009b687
@property(nonatomic) _Bool hasKeepOffUntilDate;
@property(nonatomic) _Bool hasBedtimeDismissedAction;
@property(nonatomic) _Bool hasBedtimeDismissedDate;
@property(nonatomic) _Bool hasBedtimeFiredDate;
@property(nonatomic) _Bool hasDismissedAction;
@property(nonatomic) _Bool hasTimeInBedTracking;
@property(nonatomic) _Bool hasSleepModeOptions;
@property(nonatomic) _Bool hasOnboardingVersion;
@property(nonatomic) _Bool hasSleepSchedule;
@property(nonatomic) _Bool hasSleepTracking;
@property(nonatomic) _Bool hasSleepMode;
@property(nonatomic) _Bool hasPlayOptions;
@property(nonatomic) _Bool hasDismissedDate;
@property(nonatomic) _Bool hasFiredDate;
@property(nonatomic) _Bool hasIsEnabled;
@property(nonatomic) _Bool hasBedtimeSnoozeFireDate;
@property(nonatomic) _Bool hasSnoozeFireDate;
@property(nonatomic) _Bool hasLastModifiedDate;
@property(nonatomic) _Bool hasRevision;
@property(nonatomic) _Bool hasBedtimeReminderMinutes;
@property(nonatomic) _Bool hasBedtimeMinute;
@property(nonatomic) _Bool hasBedtimeHour;
@property(nonatomic) _Bool hasIsSleepAlarm;
@property(readonly, nonatomic) _Bool hasSound;
@property(nonatomic) _Bool hasDaySetting;
@property(nonatomic) _Bool hasAllowsSnooze;
@property(readonly, nonatomic) _Bool hasTitle;
@property(nonatomic) _Bool hasMinute;
@property(nonatomic) _Bool hasHour;
@property(readonly, nonatomic) _Bool hasAlarmID;

@end
