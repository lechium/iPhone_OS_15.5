//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SIMToolkitUI/STKSound-Protocol.h>

@class NSString, TLAlert;

__attribute__((visibility("hidden")))
@interface STKToneAlertSound <STKSound>
{
    TLAlert *_alert;	// 32 = 0x20
    long long _alertType;	// 40 = 0x28
    _Bool _finishedSoundNormally;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000139ab
- (void)_reallyStopSound;	// IMP=0x00000000000138d5
- (void)_reallyPlaySound;	// IMP=0x00000000000135c6
- (id)initWithType:(long long)arg1 duration:(double)arg2;	// IMP=0x0000000000013582

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

