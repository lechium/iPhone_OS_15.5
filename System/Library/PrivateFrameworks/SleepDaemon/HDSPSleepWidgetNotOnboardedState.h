//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HDSPSleepWidgetNotOnboardedState
{
}

- (void)sleepScheduleModelDidChange:(id)arg1;	// IMP=0x00000000000220ab
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1;	// IMP=0x00000000000220a5
- (void)sleepModeDidChange:(long long)arg1 isUserRequested:(_Bool)arg2;	// IMP=0x000000000002209f
- (_Bool)widgetStateHasTimeComponent;	// IMP=0x0000000000022097
- (_Bool)reloadsWidgetOnTimeChange;	// IMP=0x000000000002208f
- (_Bool)reloadsWidgetOnModelChange;	// IMP=0x0000000000022087
- (long long)widgetState;	// IMP=0x000000000002207c
- (id)stateName;	// IMP=0x000000000002206f

@end
