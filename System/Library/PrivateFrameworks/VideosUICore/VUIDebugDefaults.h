//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VUIDebugDefaults : NSObject
{
    _Bool _debugUIEnabled;	// 8 = 0x8
    _Bool _metricsLoggingEnabled;	// 9 = 0x9
    _Bool _metricsExpandedLoggingEnabled;	// 10 = 0xa
    _Bool _metricsLogLocationAndImpressions;	// 11 = 0xb
    _Bool _metricsPageRenderLoggingEnabled;	// 12 = 0xc
    _Bool _enableDemoMode;	// 13 = 0xd
    _Bool _gdprFirstTimeFlowEnabled;	// 14 = 0xe
    _Bool _gdprWhatsNewFlowEnabled;	// 15 = 0xf
    _Bool _debugRefreshEventLogEnabled;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000001508
@property(nonatomic) _Bool debugRefreshEventLogEnabled; // @synthesize debugRefreshEventLogEnabled=_debugRefreshEventLogEnabled;
@property(nonatomic) _Bool gdprWhatsNewFlowEnabled; // @synthesize gdprWhatsNewFlowEnabled=_gdprWhatsNewFlowEnabled;
@property(nonatomic) _Bool gdprFirstTimeFlowEnabled; // @synthesize gdprFirstTimeFlowEnabled=_gdprFirstTimeFlowEnabled;
@property(nonatomic) _Bool enableDemoMode; // @synthesize enableDemoMode=_enableDemoMode;
@property(nonatomic) _Bool metricsPageRenderLoggingEnabled; // @synthesize metricsPageRenderLoggingEnabled=_metricsPageRenderLoggingEnabled;
@property(nonatomic) _Bool metricsLogLocationAndImpressions; // @synthesize metricsLogLocationAndImpressions=_metricsLogLocationAndImpressions;
@property(nonatomic) _Bool metricsExpandedLoggingEnabled; // @synthesize metricsExpandedLoggingEnabled=_metricsExpandedLoggingEnabled;
@property(nonatomic) _Bool metricsLoggingEnabled; // @synthesize metricsLoggingEnabled=_metricsLoggingEnabled;
@property(nonatomic) _Bool debugUIEnabled; // @synthesize debugUIEnabled=_debugUIEnabled;
- (id)init;	// IMP=0x000000000000155d

@end

