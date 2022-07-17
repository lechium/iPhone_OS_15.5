//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXAnalyticsReporting-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SXVideoAnalyticsRouter : NSObject <SXAnalyticsReporting>
{
    _Bool _hasReroutedInitiatedPlaybackEvent;	// 8 = 0x8
    unsigned long long _currentPlaybackLocation;	// 16 = 0x10
    unsigned long long _initiatedPlaybackLocation;	// 24 = 0x18
    NSMutableDictionary *_reporters;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000d8de4
@property(nonatomic) _Bool hasReroutedInitiatedPlaybackEvent; // @synthesize hasReroutedInitiatedPlaybackEvent=_hasReroutedInitiatedPlaybackEvent;
@property(readonly, nonatomic) NSMutableDictionary *reporters; // @synthesize reporters=_reporters;
@property(readonly, nonatomic) unsigned long long initiatedPlaybackLocation; // @synthesize initiatedPlaybackLocation=_initiatedPlaybackLocation;
@property(nonatomic) unsigned long long currentPlaybackLocation; // @synthesize currentPlaybackLocation=_currentPlaybackLocation;
- (id)analyticsReporterForEvent:(id)arg1;	// IMP=0x00000000000d8c87
- (void)reportEvent:(id)arg1;	// IMP=0x00000000000d8c1b
- (id)reporterForPlaybackLocation:(unsigned long long)arg1;	// IMP=0x00000000000d8b94
- (void)setAnalyticsReporter:(id)arg1 forPlaybackLocation:(unsigned long long)arg2;	// IMP=0x00000000000d8aed
- (id)initWithInitiatedPlaybackLocation:(unsigned long long)arg1 analyticsReporter:(id)arg2;	// IMP=0x00000000000d8a44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
