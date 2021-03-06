//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFCameraTimelapseVideoDownloader-Protocol.h>

@class HMCameraProfile;

@interface HFCameraTimelapseHomeKitVideoDownloader : NSObject <HFCameraTimelapseVideoDownloader>
{
    HMCameraProfile *_cameraProfile;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001f3d1d
@property(nonatomic) __weak HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
- (id)_fetchOperationForClip:(id)arg1 withClipManager:(id)arg2;	// IMP=0x00000000001f3b46
- (id)_downloadOperationForTimelapseClip:(id)arg1;	// IMP=0x00000000001f37ac
- (id)downloadOperationForTimelapseClip:(id)arg1;	// IMP=0x00000000001f375c
- (id)priorityDownloadOperationForTimelapseClip:(id)arg1;	// IMP=0x00000000001f3709
- (id)initWithCameraProfile:(id)arg1;	// IMP=0x00000000001f36a5

@end

