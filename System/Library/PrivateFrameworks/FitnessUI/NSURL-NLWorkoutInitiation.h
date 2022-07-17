//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (NLWorkoutInitiation)
+ (_Bool)_fiui_isValidWorkoutScheme:(id)arg1;	// IMP=0x0000000000053139
+ (id)fiui_workoutPickerURL;	// IMP=0x00000000000530e1
+ (id)fiui_startBackdatedWorkoutURLWithDate:(id)arg1 workoutIdentifier:(id)arg2 workoutType:(unsigned long long)arg3 isIndoor:(_Bool)arg4 swimmingLocationType:(long long)arg5 showPicker:(_Bool)arg6;	// IMP=0x0000000000052c31
+ (id)fiui_pauseWorkoutURLWithIdentifier:(id)arg1;	// IMP=0x0000000000052c15
+ (id)fiui_endWorkoutURLWithIdentifier:(id)arg1;	// IMP=0x0000000000052bf9
+ (id)_launchURLWithHostname:(id)arg1 workoutIdentifier:(id)arg2;	// IMP=0x0000000000052ae7
+ (id)fiui_workoutPickerURLComponents;	// IMP=0x0000000000052a96
+ (id)fiui_workoutInitiationURLWithWorkout:(id)arg1 presentConfiguration:(_Bool)arg2 skipCountdown:(_Bool)arg3;	// IMP=0x000000000005222b
+ (id)_fiui_supportedQueryItemNames;	// IMP=0x0000000000052177
+ (id)fiui_URLEnergyUnit;	// IMP=0x000000000005215e
+ (id)fiui_URLDistanceUnit;	// IMP=0x0000000000052145
+ (id)fiui_URLTimeUnit;	// IMP=0x000000000005212c
+ (id)_fiui_supportedSchemes;	// IMP=0x000000000005203c
- (double)fiui_goalValue;	// IMP=0x0000000000053f80
- (unsigned long long)fiui_goalType;	// IMP=0x0000000000053ebf
- (_Bool)fiui_presentGoalConfiguration;	// IMP=0x0000000000053dfe
- (id)fiui_activityType;	// IMP=0x00000000000538d4
- (_Bool)fiui_isValidMachineWorkoutLaunchURL;	// IMP=0x0000000000053806
- (_Bool)fiui_isValidStartWorkoutURL;	// IMP=0x00000000000533f5
- (_Bool)fiui_isStartBackdatedWorkoutURL;	// IMP=0x0000000000053332
- (_Bool)fiui_isPauseWorkoutURL;	// IMP=0x000000000005326f
- (_Bool)fiui_isEndWorkoutURL;	// IMP=0x00000000000531ac
@end
