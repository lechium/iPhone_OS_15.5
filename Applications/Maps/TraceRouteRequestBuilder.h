//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface TraceRouteRequestBuilder : NSObject
{
    NSURL *_traceURL;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000591950
@property(readonly, nonatomic) NSURL *traceURL; // @synthesize traceURL=_traceURL;
- (id)buildDirectionsRequestDetails;	// IMP=0x00100000005918bf
- (id)initWithTraceURL:(id)arg1;	// IMP=0x0010000000591795

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
// Error: Property attributes should begin with the type ('T') attribute, property name: hash
// Property attributes: (null)

@property(readonly) Class superclass;

@end

