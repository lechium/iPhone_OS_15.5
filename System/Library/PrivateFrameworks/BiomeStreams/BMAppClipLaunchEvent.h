//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSString, NSURL;

@interface BMAppClipLaunchEvent <BMStoreData, BMProtoBufWrapper>
{
    NSString *_URLHash;	// 8 = 0x8
    NSString *_clipBundleID;	// 16 = 0x10
    NSString *_appBundleID;	// 24 = 0x18
    NSString *_webAppBundleID;	// 32 = 0x20
    NSString *_launchReason;	// 40 = 0x28
    NSURL *_fullURL;	// 48 = 0x30
    NSURL *_referrerURL;	// 56 = 0x38
    NSString *_referrerBundleID;	// 64 = 0x40
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000005eb89
- (void).cxx_destruct;	// IMP=0x000000000005fa66
@property(readonly, copy, nonatomic) NSString *referrerBundleID; // @synthesize referrerBundleID=_referrerBundleID;
@property(readonly, copy, nonatomic) NSURL *referrerURL; // @synthesize referrerURL=_referrerURL;
@property(readonly, copy, nonatomic) NSURL *fullURL; // @synthesize fullURL=_fullURL;
@property(readonly, copy, nonatomic) NSString *launchReason; // @synthesize launchReason=_launchReason;
@property(readonly, copy, nonatomic) NSString *webAppBundleID; // @synthesize webAppBundleID=_webAppBundleID;
@property(readonly, copy, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
@property(readonly, copy, nonatomic) NSString *clipBundleID; // @synthesize clipBundleID=_clipBundleID;
@property(readonly, copy, nonatomic) NSString *URLHash; // @synthesize URLHash=_URLHash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005f322
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x000000000005ef66
- (id)initWithProtoData:(id)arg1;	// IMP=0x000000000005eeca
- (id)initWithProto:(id)arg1;	// IMP=0x000000000005ec6c
- (id)encodeAsProto;	// IMP=0x000000000005ec1c
- (id)serialize;	// IMP=0x000000000005eb77
@property(readonly, nonatomic) unsigned int dataVersion;
@property(readonly, copy) NSString *description;
- (id)initWithURLHash:(id)arg1 clipBundleID:(id)arg2 appBundleID:(id)arg3 webAppBundleID:(id)arg4 launchReason:(id)arg5 fullURL:(id)arg6 referrerURL:(id)arg7 referrerBundleID:(id)arg8;	// IMP=0x000000000005e7f9
- (id)init;	// IMP=0x000000000005e7f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

