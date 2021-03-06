//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CSVTUIEndpointAnalyzerDelegate;

@interface CSVTUIEndpointAnalyzer : NSObject
{
    id <CSVTUIEndpointAnalyzerDelegate> _delegate;	// 8 = 0x8
    unsigned long long _activeChannel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000001db6
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property(nonatomic) __weak id <CSVTUIEndpointAnalyzerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setEndWaitTime:(double)arg1;	// IMP=0x0000000000001cfc
- (void)setStartWaitTime:(double)arg1;	// IMP=0x0000000000001c7d
- (double)trailingSilenceDurationAtEndpoint;	// IMP=0x0000000000001c74
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1;	// IMP=0x0000000000001bf5
- (void)stopEndpointer;	// IMP=0x0000000000001b76
- (void)recordingStoppedForReason:(long long)arg1;	// IMP=0x0000000000001af7
- (void)processAudioSamplesAsynchronously:(id)arg1;	// IMP=0x0000000000001a78
- (id)init;	// IMP=0x00000000000019c1

@end

