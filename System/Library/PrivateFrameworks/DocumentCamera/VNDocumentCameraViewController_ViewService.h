//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DocumentCamera/BKSAccelerometerDelegate-Protocol.h>
#import <DocumentCamera/DCDocumentCameraPublicViewController-Protocol.h>

@class BKSAccelerometer, DCDocumentCameraRemoteViewController, DCDocumentCameraViewServiceSession, NSString;
@protocol DCDocumentCameraViewServiceViewController;

__attribute__((visibility("hidden")))
@interface VNDocumentCameraViewController_ViewService <BKSAccelerometerDelegate, DCDocumentCameraPublicViewController>
{
    DCDocumentCameraViewServiceSession *_viewServiceSession;	// 8 = 0x8
    BKSAccelerometer *_accelerometer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000035afe
@property(retain, nonatomic) BKSAccelerometer *accelerometer; // @synthesize accelerometer=_accelerometer;
@property(retain, nonatomic) DCDocumentCameraViewServiceSession *viewServiceSession; // @synthesize viewServiceSession=_viewServiceSession;
- (void)didFinishWithDocumentInfoCollection:(id)arg1;	// IMP=0x0000000000035987
- (void)didCancel:(id)arg1;	// IMP=0x0000000000035778
- (void)dismiss;	// IMP=0x00000000000356f8
- (void)viewServicePreferredSizeDidChange:(struct CGSize)arg1;	// IMP=0x00000000000356e6
@property(readonly, nonatomic, getter=remoteViewController) DCDocumentCameraRemoteViewController *remoteViewController;
@property(readonly, nonatomic, getter=viewServiceViewController) id <DCDocumentCameraViewServiceViewController> viewServiceViewController;
- (id)castedChildViewController;	// IMP=0x00000000000355e2
- (void)viewDidLoad;	// IMP=0x0000000000035011
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2;	// IMP=0x0000000000034fc0
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;	// IMP=0x0000000000034fba
- (void)dealloc;	// IMP=0x0000000000034ee9
- (id)init;	// IMP=0x0000000000034eb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
