//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HFTemperatureStatusItem
{
}

+ (unsigned long long)abstractCurrentModeInResponse:(id)arg1;	// IMP=0x000000000029347c
+ (unsigned long long)abstractTargetModeInResponse:(id)arg1;	// IMP=0x0000000000293404
+ (id)titleStringForState:(long long)arg1;	// IMP=0x0000000000293385
+ (_Bool)shouldShowAverageForRange:(id)arg1;	// IMP=0x000000000029305d
+ (_Bool)isPercentRange;	// IMP=0x0000000000293055
+ (id)customValueFormatter;	// IMP=0x0000000000292fdf
+ (CDUnknownBlockType)displayValueComparator;	// IMP=0x0000000000292bee
+ (id)unknownValueDescriptionString;	// IMP=0x0000000000292bd5
+ (id)targetModeCharacteristicTypes;	// IMP=0x0000000000292ba3
+ (id)currentModeCharacteristicTypes;	// IMP=0x0000000000292b71
+ (id)maximumTargetValueCharacteristicType;	// IMP=0x0000000000292b5d
+ (id)minimumTargetValueCharacteristicType;	// IMP=0x0000000000292b49
+ (id)targetValueCharacteristicType;	// IMP=0x0000000000292b35
+ (id)currentValueCharacteristicType;	// IMP=0x0000000000292b21
+ (id)sensorServiceTypes;	// IMP=0x0000000000292afa
+ (id)controllableServiceTypes;	// IMP=0x0000000000292ac8
+ (unsigned long long)statusItemCategory;	// IMP=0x0000000000292abd
- (id)title;	// IMP=0x0000000000292aa4

@end
