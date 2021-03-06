//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCBasebandCongestionDetector, AVCRateControlFeedbackController, AVCStatisticsCollector, VCNetworkFeedbackController, VCRateControlMediaController;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantOneToOneConfig
{
    unsigned long long _idsParticipantID;	// 16 = 0x10
    int _deviceRole;	// 24 = 0x18
    AVCRateControlFeedbackController *_feedbackController;	// 32 = 0x20
    AVCStatisticsCollector *_statisticsCollector;	// 40 = 0x28
    AVCBasebandCongestionDetector *_basebandCongestionDetector;	// 48 = 0x30
    void *_audioMediaControlInfoGenerator;	// 56 = 0x38
    void *_videoMediaControlInfoGenerator;	// 64 = 0x40
    VCRateControlMediaController *_mediaController;	// 72 = 0x48
    struct tagHANDLE *_mediaQueue;	// 80 = 0x50
    struct tagVCMediaQueue *_vcMediaQueue;	// 88 = 0x58
    VCNetworkFeedbackController *_networkFeedbackController;	// 96 = 0x60
    _Bool _negotiatedVideoEnabled;	// 104 = 0x68
    _Bool _negotiatedScreenEnabled;	// 105 = 0x69
    _Bool _initUsingWifiTiers;	// 106 = 0x6a
    int _operatingMode;	// 108 = 0x6c
}

@property(nonatomic) _Bool initUsingWifiTiers; // @synthesize initUsingWifiTiers=_initUsingWifiTiers;
@property(nonatomic) _Bool negotiatedScreenEnabled; // @synthesize negotiatedScreenEnabled=_negotiatedScreenEnabled;
@property(nonatomic) _Bool negotiatedVideoEnabled; // @synthesize negotiatedVideoEnabled=_negotiatedVideoEnabled;
@property(nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property(retain, nonatomic) VCNetworkFeedbackController *networkFeedbackController; // @synthesize networkFeedbackController=_networkFeedbackController;
@property(nonatomic) struct tagVCMediaQueue *vcMediaQueue; // @synthesize vcMediaQueue=_vcMediaQueue;
@property(nonatomic) struct tagHANDLE *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
@property(retain, nonatomic) VCRateControlMediaController *mediaController; // @synthesize mediaController=_mediaController;
@property(nonatomic) void *videoMediaControlInfoGenerator; // @synthesize videoMediaControlInfoGenerator=_videoMediaControlInfoGenerator;
@property(nonatomic) void *audioMediaControlInfoGenerator; // @synthesize audioMediaControlInfoGenerator=_audioMediaControlInfoGenerator;
@property(retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // @synthesize basebandCongestionDetector=_basebandCongestionDetector;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(retain, nonatomic) AVCRateControlFeedbackController *feedbackController; // @synthesize feedbackController=_feedbackController;
@property(nonatomic) int deviceRole; // @synthesize deviceRole=_deviceRole;
@property(nonatomic) unsigned long long idsParticipantID; // @synthesize idsParticipantID=_idsParticipantID;
- (void)dealloc;	// IMP=0x0000000000229105
- (id)init;	// IMP=0x000000000022909e

@end

