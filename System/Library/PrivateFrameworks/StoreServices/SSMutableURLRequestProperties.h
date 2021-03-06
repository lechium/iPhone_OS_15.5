//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSDictionary, NSInputStream, NSString, NSURL;

@interface SSMutableURLRequestProperties
{
}

@property(copy) NSArray *URLs; // @dynamic URLs;
@property(copy) CDUnknownBlockType URLBagURLBlock; // @dynamic URLBagURLBlock;
@property long long URLBagType; // @dynamic URLBagType;
@property(copy) NSData *clientAuditTokenData; // @dynamic clientAuditTokenData;
@property(copy) NSString *clientAuditBundleIdentifier; // @dynamic clientAuditBundleIdentifier;
@property _Bool shouldSetCookies; // @dynamic shouldSetCookies;
@property _Bool shouldSendSecureToken; // @dynamic shouldSendSecureToken;
@property _Bool shouldProcessProtocol; // @dynamic shouldProcessProtocol;
@property _Bool shouldDecodeResponse; // @dynamic shouldDecodeResponse;
@property _Bool shouldAddKBSyncData; // @dynamic shouldAddKBSyncData;
@property _Bool requiresHTTPS; // @dynamic requiresHTTPS;
@property _Bool requiresExternal; // @dynamic requiresExternal;
@property _Bool requiresExtendedValidationCertificates; // @dynamic requiresExtendedValidationCertificates;
@property _Bool requiresCellularDataNetwork; // @dynamic requiresCellularDataNetwork;
- (void)setMultiPartFormDataWithDictionary:(id)arg1;	// IMP=0x00000000000a4edb
@property(getter=isLargeDownload) _Bool largeDownload; // @dynamic largeDownload;
@property long long KBSyncType; // @dynamic KBSyncType;
@property(retain) NSInputStream *HTTPBodyStream; // @dynamic HTTPBodyStream;
@property _Bool allowsBootstrapCellularData; // @dynamic allowsBootstrapCellularData;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;	// IMP=0x00000000000a4b9e
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;	// IMP=0x00000000000a4a4a
@property(copy) NSArray *userAgentComponents; // @dynamic userAgentComponents;
@property(retain) NSURL *URL; // @dynamic URL;
@property(copy) NSString *URLBagKey; // @dynamic URLBagKey;
@property double timeoutInterval; // @dynamic timeoutInterval;
@property _Bool shouldDisableReversePushSampling; // @dynamic shouldDisableReversePushSampling;
@property _Bool shouldDisableReversePush; // @dynamic shouldDisableReversePush;
@property _Bool shouldDisableCellularFallback; // @dynamic shouldDisableCellularFallback;
@property _Bool shouldDisableCellular; // @dynamic shouldDisableCellular;
@property(copy) NSDictionary *requestParameters; // @dynamic requestParameters;
@property unsigned long long networkServiceType; // @dynamic networkServiceType;
@property long long machineDataStyle; // @dynamic machineDataStyle;
@property(getter=isITunesStoreRequest) _Bool ITunesStoreRequest; // @dynamic ITunesStoreRequest;
@property(copy) NSString *HTTPMethod; // @dynamic HTTPMethod;
@property(copy) NSDictionary *HTTPHeaders; // @dynamic HTTPHeaders;
@property(copy) NSData *HTTPBody; // @dynamic HTTPBody;
@property long long expectedContentLength; // @dynamic expectedContentLength;
@property(copy) NSString *clientIdentifier; // @dynamic clientIdentifier;
@property unsigned long long cachePolicy; // @dynamic cachePolicy;
@property long long allowedRetryCount; // @dynamic allowedRetryCount;
@property(copy) NSDictionary *additionalMetrics; // @dynamic additionalMetrics;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a3f16

@end

