//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AppInstall, AppInstallDownloadResponse, AppInstallInfo, AppPackage, IXAppInstallCoordinator;

@interface AppInstallDownloadTask
{
    IXAppInstallCoordinator *_coordinator;	// 8 = 0x8
    _Bool _didLoadAssetSize;	// 16 = 0x10
    long long _installID;	// 24 = 0x18
    AppInstall *_install;	// 32 = 0x20
    AppInstallInfo *_installInfo;	// 40 = 0x28
    AppPackage *_package;	// 48 = 0x30
    AppInstallDownloadResponse *_downloadResponse;	// 56 = 0x38
}

+ (id)_streamingZipOptionsWithChunkedDigest:(id)arg1 quarantineOptions:(id)arg2;	// IMP=0x00400000000e0c75
+ (id)operationForInstallID:(long long)arg1 inSession:(id)arg2 withCoordinator:(id)arg3;	// IMP=0x00100000000e0158
- (void).cxx_destruct;	// IMP=0x00200000000e2241
@property(retain) AppInstallDownloadResponse *downloadResponse; // @synthesize downloadResponse=_downloadResponse;
- (id)_quarantineOptions;	// IMP=0x00100000000e2212
- (id)chainFairPlayDecryptionToConsumer:(id)arg1 withDPInfo:(id)arg2 digest:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000e2099
- (id)_dataConsumerError:(id *)arg1 promiseConsumer:(id *)arg2;	// IMP=0x00100000000e1ad4
- (id)_buildAssetRequestWithDataConsumer:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000e1263
- (_Bool)_allowsExpensiveNetwork;	// IMP=0x00100000000e10e6
- (_Bool)_allowsConstrainedNetwork;	// IMP=0x00100000000e0f69
- (_Bool)_allowsCellularNetwork;	// IMP=0x00100000000e0df2
- (void)main;	// IMP=0x00100000000e0c3c
- (id)prepareForDownload;	// IMP=0x00100000000e05fc
- (id)_initWithInstall:(id)arg1 package:(id)arg2 coordinator:(id)arg3;	// IMP=0x00100000000e049d

@end
