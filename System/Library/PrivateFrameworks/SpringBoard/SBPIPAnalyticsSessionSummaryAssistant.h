//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBPIPAnalyticsSessionSummaryAssistant
{
    double _stashedDuration;	// 64 = 0x40
    double _stashedTimestamp;	// 72 = 0x48
    long long _numberOfStashEvents;	// 80 = 0x50
    _Bool _restoredFullScreen;	// 88 = 0x58
    _Bool _startedAutomatically;	// 89 = 0x59
    _Bool _appStoppedSession;	// 90 = 0x5a
}

- (void)invalidate;	// IMP=0x00000000004ad3b5
- (id)_generateMutableAnalyticsPayload;	// IMP=0x00000000004ad153
- (void)noteBecameUnstashedAtTime:(double)arg1;	// IMP=0x00000000004ad10d
- (void)noteBecameStashedAtTime:(double)arg1;	// IMP=0x00000000004ad0ee
- (void)noteAppStoppedSession:(_Bool)arg1;	// IMP=0x00000000004ad0de
- (void)noteRestoredFullScreen:(_Bool)arg1;	// IMP=0x00000000004ad0ce
- (void)noteStartedAutomatically:(_Bool)arg1;	// IMP=0x00000000004ad0be
- (id)analyticsIdentifier;	// IMP=0x00000000004ad0b1
- (id)initWithBundleIdentifier:(id)arg1 contentType:(long long)arg2 isAutoPIPEnabled:(_Bool)arg3 invalidationBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000004ad068

@end

