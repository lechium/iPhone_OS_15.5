//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, SFIndexState;

@interface SFStartNetworkSearchFeedback
{
    NSString *_url;	// 56 = 0x38
    NSDictionary *_headers;	// 64 = 0x40
    unsigned long long _endpoint;	// 72 = 0x48
    NSString *_experimentId;	// 80 = 0x50
    NSString *_treatmentId;	// 88 = 0x58
    SFIndexState *_indexState;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001dfc74
- (void).cxx_destruct;	// IMP=0x00000000001dfc10
@property(retain, nonatomic) SFIndexState *indexState; // @synthesize indexState=_indexState;
@property(copy, nonatomic) NSString *treatmentId; // @synthesize treatmentId=_treatmentId;
@property(copy, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
@property(nonatomic) unsigned long long endpoint; // @synthesize endpoint=_endpoint;
@property(copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001dfa68
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001df8cd
- (id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 queryId:(unsigned long long)arg6 experimentId:(id)arg7 treatmentId:(id)arg8;	// IMP=0x00000000001df807
- (id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 queryId:(unsigned long long)arg6;	// IMP=0x00000000001df7b4
- (id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5;	// IMP=0x00000000001df6d0

@end
