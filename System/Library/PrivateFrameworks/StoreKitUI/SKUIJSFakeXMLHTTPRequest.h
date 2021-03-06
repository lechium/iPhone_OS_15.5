//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

#import <StoreKitUI/SKUIJSFakeXMLHTTPRequest-Protocol.h>

@class IKJSXMLDocument, NSData, NSDictionary, NSHTTPURLResponse, NSString;

__attribute__((visibility("hidden")))
@interface SKUIJSFakeXMLHTTPRequest : IKJSObject <SKUIJSFakeXMLHTTPRequest>
{
    NSData *_data;	// 8 = 0x8
    NSDictionary *_performanceMetrics;	// 16 = 0x10
    NSHTTPURLResponse *_response;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000380024
@property(readonly, retain) NSString *statusText;
@property(readonly) unsigned int status;
@property(readonly) unsigned int responseType;
@property(readonly) IKJSXMLDocument *responseXML;
@property(readonly) NSString *responseText;
@property(readonly) id response;
@property(readonly) unsigned int readyState;
@property(readonly) NSDictionary *metrics;
- (id)getResponseHeader:(id)arg1;	// IMP=0x000000000037fda5
- (id)getAllResponseHeaders;	// IMP=0x000000000037fcb8
- (id)initWithAppContext:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4;	// IMP=0x000000000037fbe1

@end

