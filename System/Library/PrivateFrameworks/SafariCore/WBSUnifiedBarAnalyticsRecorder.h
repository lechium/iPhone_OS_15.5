//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol WBSUnifiedBarAnalyticsRecorderDelegate;

@interface WBSUnifiedBarAnalyticsRecorder : NSObject
{
    id <WBSUnifiedBarAnalyticsRecorderDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000043fe1
@property(nonatomic) __weak id <WBSUnifiedBarAnalyticsRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_reportAnalytics;	// IMP=0x0000000000043eb3
- (void)schedulePeriodicReport;	// IMP=0x0000000000043de3

@end

