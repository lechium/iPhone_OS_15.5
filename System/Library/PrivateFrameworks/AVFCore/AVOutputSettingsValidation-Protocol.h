//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAudioOutputSettings, AVVideoOutputSettings;

@protocol AVOutputSettingsValidation
- (_Bool)validateVideoOutputSettings:(AVVideoOutputSettings *)arg1 reason:(id *)arg2;
- (_Bool)validateAudioOutputSettings:(AVAudioOutputSettings *)arg1 reason:(id *)arg2;
@end
