//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class STAlarm;

@interface STCreateAlarmAction
{
    STAlarm *_alarm;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000077e4
- (void).cxx_destruct;	// IMP=0x0000000000007904
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007869
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000077ec
- (id)alarm;	// IMP=0x00000000000077cf
- (id)_initWithAlarm:(id)arg1;	// IMP=0x00000000000076e6

@end

