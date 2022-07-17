//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface OBAnalyticsManager : NSObject
{
    _Bool _shouldStashMetrics;	// 8 = 0x8
    NSMutableArray *_events;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x000000000002ffc4
- (void).cxx_destruct;	// IMP=0x000000000003079a
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property _Bool shouldStashMetrics; // @synthesize shouldStashMetrics=_shouldStashMetrics;
- (void)logTapOnPrivacyLinkWithIdentifier:(id)arg1;	// IMP=0x000000000003064e
- (void)logPresentationOfPrivacyLinkWithIdentifier:(id)arg1;	// IMP=0x0000000000030531
- (void)logPresentationOfPrivacySplashWithIdentifier:(id)arg1;	// IMP=0x0000000000030414
- (void)logPresentationOfPrivacyUnifiedAbout;	// IMP=0x0000000000030397
- (void)commit;	// IMP=0x0000000000030197
- (void)addEvent:(id)arg1 withPayload:(id)arg2;	// IMP=0x00000000000300e1
- (void)addEvent:(id)arg1;	// IMP=0x000000000003006f
- (id)init;	// IMP=0x0000000000030019

@end
