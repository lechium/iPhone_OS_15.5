//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveExperiments/PREResponsesMetricsProtocol-Protocol.h>

@class NSString, PETEventTracker2;
@protocol PREExperimentResolverProtocol;

@interface PREResponsesMetricsPET : NSObject <PREResponsesMetricsProtocol>
{
    PETEventTracker2 *_tracker;	// 8 = 0x8
    id <PREExperimentResolverProtocol> _resolver;	// 16 = 0x10
    _Bool _isApricotDevice;	// 24 = 0x18
    NSString *_processName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000011352
- (id)tracker;	// IMP=0x0000000000011344
- (_Bool)isApricotDevice;	// IMP=0x000000000001133c
- (void)registerResponseViewed:(id)arg1;	// IMP=0x00000000000110b4
- (void)registerResponseTapped:(id)arg1;	// IMP=0x00000000000105d7
- (id)_responseListFromGeneratedEvent:(id)arg1;	// IMP=0x000000000000ffc9
- (void)registerResponsesGenerated:(id)arg1;	// IMP=0x000000000000fad4
- (id)initWithTracker:(id)arg1 experimentResolver:(id)arg2;	// IMP=0x000000000000f9db
- (id)initWithExperimentResolver:(id)arg1;	// IMP=0x000000000000f95a
- (id)init;	// IMP=0x000000000000f94c

@end

