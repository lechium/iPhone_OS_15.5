//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLLocation, NSString;

@interface NTKAstronomyComplicationDataSource
{
    NSString *_token;	// 8 = 0x8
    CLLocation *_currentLocation;	// 16 = 0x10
    CLLocation *_anyLocation;	// 24 = 0x18
    unsigned long long _vista;	// 32 = 0x20
    _Bool _listeningForNotifications;	// 40 = 0x28
}

+ (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;	// IMP=0x0000000000241bbe
+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;	// IMP=0x0000000000241bad
- (void).cxx_destruct;	// IMP=0x0000000000241c43
- (void)_invalidate;	// IMP=0x0000000000241c06
- (void)resume;	// IMP=0x0000000000241b7f
- (void)pause;	// IMP=0x0000000000241b6d
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000241aff
- (id)currentSwitcherTemplate;	// IMP=0x0000000000241aaa
- (unsigned long long)timelineAnimationBehavior;	// IMP=0x0000000000241aa2
- (id)_currentTimelineEntryWithIdealizedDate:(_Bool)arg1;	// IMP=0x00000000002419aa
- (void)becomeInactive;	// IMP=0x000000000024192b
- (void)becomeActive;	// IMP=0x00000000002417c1
- (void)_handleLocationUpdate:(id)arg1 anyLocation:(id)arg2;	// IMP=0x0000000000241723
- (id)complicationApplicationIdentifier;	// IMP=0x00000000002416d3
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000024163e
- (_Bool)supportsTapAction;	// IMP=0x0000000000241604
- (Class)richComplicationDisplayViewClassForDevice:(id)arg1;	// IMP=0x0000000000241545
- (_Bool)alwaysShowIdealizedTemplateInSwitcher;	// IMP=0x000000000024153d
- (void)_stopObserving;	// IMP=0x000000000024149e
- (void)_startObserving;	// IMP=0x00000000002413d1
- (void)dealloc;	// IMP=0x0000000000241393
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;	// IMP=0x000000000024127c

@end
