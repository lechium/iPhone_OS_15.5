//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/ICEnvironmentMonitorObserver-Protocol.h>

@class MPCJinglePlayActivityReportingController, MPCReportingPlaybackObserver, NSString;

@interface MPCLyricsReportingController : NSObject <ICEnvironmentMonitorObserver>
{
    MPCJinglePlayActivityReportingController *_jinglePlayActivityReportingController;	// 8 = 0x8
    MPCReportingPlaybackObserver *_reportingPlaybackObserver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000039cde
@property(retain, nonatomic) MPCReportingPlaybackObserver *reportingPlaybackObserver; // @synthesize reportingPlaybackObserver=_reportingPlaybackObserver;
@property(retain, nonatomic) MPCJinglePlayActivityReportingController *jinglePlayActivityReportingController; // @synthesize jinglePlayActivityReportingController=_jinglePlayActivityReportingController;
- (void)recordLyricsViewEvent:(id)arg1;	// IMP=0x0000000000038f9f
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;	// IMP=0x0000000000038f02
- (id)init;	// IMP=0x0000000000038df0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

