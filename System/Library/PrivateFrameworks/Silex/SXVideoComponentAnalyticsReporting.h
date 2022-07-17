//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXAnalyticsReporting-Protocol.h>

@class NSString, SXVideoComponent;
@protocol SXAnalyticsReporting;

@interface SXVideoComponentAnalyticsReporting : NSObject <SXAnalyticsReporting>
{
    SXVideoComponent *_component;	// 8 = 0x8
    id <SXAnalyticsReporting> _analyticsReporting;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004f11e
@property(readonly, nonatomic) __weak id <SXAnalyticsReporting> analyticsReporting; // @synthesize analyticsReporting=_analyticsReporting;
@property(readonly, nonatomic) SXVideoComponent *component; // @synthesize component=_component;
- (void)reportEvent:(id)arg1;	// IMP=0x000000000004eea2
- (id)initWithComponent:(id)arg1 analyticsProviding:(id)arg2;	// IMP=0x000000000004ee09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
