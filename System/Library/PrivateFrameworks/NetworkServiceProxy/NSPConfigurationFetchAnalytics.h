//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NSPConfigurationFetchAnalytics
{
    NSString *_configFetchURL;	// 8 = 0x8
    long long _httpCode;	// 16 = 0x10
    long long _nsurlErrorCode;	// 24 = 0x18
    NSString *_requestedServerUUID;	// 32 = 0x20
    double _latency;	// 40 = 0x28
    NSString *_reason;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000002c99b
@property(nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) double latency; // @synthesize latency=_latency;
@property(retain, nonatomic) NSString *requestedServerUUID; // @synthesize requestedServerUUID=_requestedServerUUID;
@property(nonatomic) long long nsurlErrorCode; // @synthesize nsurlErrorCode=_nsurlErrorCode;
@property(nonatomic) long long httpCode; // @synthesize httpCode=_httpCode;
@property(retain, nonatomic) NSString *configFetchURL; // @synthesize configFetchURL=_configFetchURL;
- (id)analyticsDict;	// IMP=0x000000000002c6fb
- (id)configFetchURLToIndex;	// IMP=0x000000000002c48b
- (id)eventName;	// IMP=0x000000000002c47e

@end
