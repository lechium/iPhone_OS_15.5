//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/_HMCameraStreamControlDelegate-Protocol.h>

@class HMCameraStream, HMFUnfairLock, NSString, _HMCameraStreamControl;
@protocol HMCameraStreamControlDelegate;

@interface HMCameraStreamControl <_HMCameraStreamControlDelegate>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    id <HMCameraStreamControlDelegate> _delegate;	// 16 = 0x10
    _HMCameraStreamControl *_streamControl;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000e21f
@property(readonly) _HMCameraStreamControl *streamControl; // @synthesize streamControl=_streamControl;
- (void)cameraStreamControl:(id)arg1 didStopStream:(id)arg2;	// IMP=0x000000000000e18f
- (void)cameraStreamControlDidStartStream:(id)arg1;	// IMP=0x000000000000e132
- (void)stopStream;	// IMP=0x000000000000e0f5
- (void)startStreamWithPreferences:(id)arg1;	// IMP=0x000000000000e083
- (void)startStream;	// IMP=0x000000000000e044
@property(readonly, nonatomic) HMCameraStream *cameraStream;
@property(readonly, nonatomic) unsigned long long streamState;
@property(nonatomic) __weak id <HMCameraStreamControlDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithStreamControl:(id)arg1;	// IMP=0x000000000000dcf1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
