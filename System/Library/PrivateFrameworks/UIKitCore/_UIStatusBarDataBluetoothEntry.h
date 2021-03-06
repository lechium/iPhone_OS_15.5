//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarDataBatteryEntry;

@interface _UIStatusBarDataBluetoothEntry
{
    long long _state;	// 16 = 0x10
    _UIStatusBarDataBatteryEntry *_batteryEntry;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000e43812
- (void).cxx_destruct;	// IMP=0x0000000000e43cb6
@property(copy, nonatomic) _UIStatusBarDataBatteryEntry *batteryEntry; // @synthesize batteryEntry=_batteryEntry;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)_ui_descriptionBuilder;	// IMP=0x0000000000e43b58
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e4398f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000e438ba
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000e4381a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e43783
- (unsigned long long)hash;	// IMP=0x0000000000e43722

@end

