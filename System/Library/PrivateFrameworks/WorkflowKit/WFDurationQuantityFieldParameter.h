//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WFDurationQuantityFieldParameter
{
}

+ (id)stateForDuration:(double)arg1 possibleUnits:(id)arg2;	// IMP=0x00000000002d4569
+ (unsigned long long)calendarUnitFromUnitString:(id)arg1;	// IMP=0x00000000002d4462
+ (_Bool)unitStringIsDurationUnit:(id)arg1;	// IMP=0x00000000002d4387
+ (unsigned long long)possibleCalendarUnitsForUnits:(id)arg1;	// IMP=0x00000000002d4172
- (void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 prompt:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002d4044
- (id)defaultSerializedRepresentation;	// IMP=0x00000000002d3ea1
- (id)stateForDuration:(double)arg1;	// IMP=0x00000000002d3e2d
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3;	// IMP=0x00000000002d3c68
- (_Bool)parameterStateIsValid:(id)arg1;	// IMP=0x00000000002d3b4e
@property(nonatomic) unsigned long long possibleCalendarUnits;
- (id)initWithDefinition:(id)arg1;	// IMP=0x00000000002d38c0

@end
