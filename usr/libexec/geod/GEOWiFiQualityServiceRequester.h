//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServiceRequester.h>

@class GEOApplicationAuditToken, GEOWiFiQualityServiceRequest;

@interface GEOWiFiQualityServiceRequester : GEOServiceRequester
{
    GEOWiFiQualityServiceRequest *_request;	// 8 = 0x8
    GEOApplicationAuditToken *_token;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000003cbf2
- (id)_validateResponse:(id)arg1;	// IMP=0x001000000003cb79
- (void)cancel;	// IMP=0x001000000003cb5c
- (void)startWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003c919
- (id)initWithRequest:(id)arg1 auditToken:(id)arg2;	// IMP=0x001000000003c877

@end
