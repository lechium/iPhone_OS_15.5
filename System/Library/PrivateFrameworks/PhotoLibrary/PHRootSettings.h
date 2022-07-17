//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHImageManagerSettings, PHResourceDownloadSettings;

@interface PHRootSettings
{
    PHImageManagerSettings *_imageManagerSettings;	// 8 = 0x8
    PHResourceDownloadSettings *_resourceDownloadSettings;	// 16 = 0x10
}

+ (id)settingsControllerModule;	// IMP=0x0000000000018d3f
+ (id)sharedSettings;	// IMP=0x0000000000018cdc
- (void).cxx_destruct;	// IMP=0x0000000000018fe8
@property(readonly, nonatomic) PHResourceDownloadSettings *resourceDownloadSettings; // @synthesize resourceDownloadSettings=_resourceDownloadSettings;
@property(readonly, nonatomic) PHImageManagerSettings *imageManagerSettings; // @synthesize imageManagerSettings=_imageManagerSettings;
- (id)parentSettings;	// IMP=0x0000000000018fbe

@end
