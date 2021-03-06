//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface RCPScreenRecorder : NSObject
{
    NSMutableArray *_snapshots;	// 8 = 0x8
    _Bool _recording;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_snapshotQueue;	// 24 = 0x18
    double _maxDuration;	// 32 = 0x20
}

+ (id)takeScreenshot:(double)arg1;	// IMP=0x0000000000009401
+ (id)takeScreenshot;	// IMP=0x000000000000938d
- (void).cxx_destruct;	// IMP=0x0000000000009a4f
@property(nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
- (void)snapshot;	// IMP=0x000000000000976e
@property(readonly, nonatomic) NSArray *snapshots;
- (void)stopRecording;	// IMP=0x00000000000095fd
@property(readonly, nonatomic, getter=isRecording) _Bool recording;
- (void)startRecording;	// IMP=0x0000000000009409

@end

