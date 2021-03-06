//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RCPRecorderConfig;

@interface RCPEventStreamRecorder
{
    RCPRecorderConfig *_config;	// 8 = 0x8
    long long _state;	// 16 = 0x10
}

+ (id)recorderWithConfiguration:(id)arg1;	// IMP=0x0000000000014534
- (void).cxx_destruct;	// IMP=0x00000000000148ac
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) RCPRecorderConfig *config; // @synthesize config=_config;
- (void)enqueueEvent:(id)arg1;	// IMP=0x000000000001461e
- (void)stopRecording;	// IMP=0x00000000000145e4
- (void)startRecording;	// IMP=0x0000000000014590
@property(readonly, nonatomic, getter=isRecording) _Bool recording;

@end

