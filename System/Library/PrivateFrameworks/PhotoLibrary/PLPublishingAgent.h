//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibrary/PLDataArrayInputStreamProgressDelegate-Protocol.h>

@class NSData, NSMutableArray, NSString, PLVideoRemaker;
@protocol PLPublishingAgentDelegate;

@interface PLPublishingAgent : NSObject <PLDataArrayInputStreamProgressDelegate>
{
    id _userInfo;	// 8 = 0x8
    id _delegate;	// 16 = 0x10
    NSString *_mediaPath;	// 24 = 0x18
    NSData *_mediaData;	// 32 = 0x20
    NSString *_mimeType;	// 40 = 0x28
    _Bool _deleteAfterPublishing;	// 48 = 0x30
    double _changeRate;	// 56 = 0x38
    long long _currentValue;	// 64 = 0x40
    double _estimatedTimeRemaining;	// 72 = 0x48
    long long _maxValue;	// 80 = 0x50
    long long _normalizedCurrentValue;	// 88 = 0x58
    long long _normalizedMaxValue;	// 96 = 0x60
    float _percentComplete;	// 104 = 0x68
    float _remakingPercentComplete;	// 108 = 0x6c
    float _progressMultiplier;	// 112 = 0x70
    NSMutableArray *_snapshotTimes;	// 120 = 0x78
    NSMutableArray *_snapshotValues;	// 128 = 0x80
    _Bool _ownerIsCamera;	// 136 = 0x88
    _Bool _needsRemaking;	// 137 = 0x89
    double _startTime;	// 144 = 0x90
    double _endTime;	// 152 = 0x98
    long long _approximateHDUploadSize;	// 160 = 0xa0
    long long _approximateSDUploadSize;	// 168 = 0xa8
    _Bool _mediaIsHDVideo;	// 176 = 0xb0
    _Bool _enableHDUpload;	// 177 = 0xb1
    _Bool _needsTrimming;	// 178 = 0xb2
    _Bool _allowsHDOver3GUpload;	// 179 = 0xb3
    int _selectedOption;	// 180 = 0xb4
    PLVideoRemaker *_remaker;	// 184 = 0xb8
    int _remakerMode;	// 192 = 0xc0
    SEL _completionSelector;	// 200 = 0xc8
    unsigned int _remakingWasCancelled:1;	// 208 = 0xd0
    unsigned int _remaking:1;	// 208 = 0xd0
    unsigned int _publishing:1;	// 208 = 0xd0
    _Bool _shouldCancelPublish;	// 209 = 0xd1
}

+ (_Bool)canUploadHDVideoOverCellular;	// IMP=0x0000000000029567
+ (id)publishingAgentForBundleNamed:(id)arg1 toPublishMedia:(id)arg2;	// IMP=0x0000000000029481
@property(nonatomic) _Bool shouldCancelPublish; // @synthesize shouldCancelPublish=_shouldCancelPublish;
@property(nonatomic) _Bool allowsHDOver3GUpload; // @synthesize allowsHDOver3GUpload=_allowsHDOver3GUpload;
@property(nonatomic) float progressMultiplier; // @synthesize progressMultiplier=_progressMultiplier;
@property(nonatomic) int selectedOption; // @synthesize selectedOption=_selectedOption;
@property(nonatomic) int remakerMode; // @synthesize remakerMode=_remakerMode;
@property(nonatomic) _Bool needsTrimming; // @synthesize needsTrimming=_needsTrimming;
@property(nonatomic) _Bool enableHDUpload; // @synthesize enableHDUpload=_enableHDUpload;
@property(nonatomic) _Bool mediaIsHDVideo; // @synthesize mediaIsHDVideo=_mediaIsHDVideo;
@property(nonatomic) long long approximateSDUploadSize; // @synthesize approximateSDUploadSize=_approximateSDUploadSize;
@property(nonatomic) long long approximateHDUploadSize; // @synthesize approximateHDUploadSize=_approximateHDUploadSize;
@property(nonatomic) _Bool ownerIsCamera; // @synthesize ownerIsCamera=_ownerIsCamera;
@property(nonatomic) id <PLPublishingAgentDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showAlertWithError:(id)arg1;	// IMP=0x0000000000028ecd
- (int)_remakerModeForSelectedOption;	// IMP=0x0000000000028e8f
- (id)progressViewMessageDuringRemake;	// IMP=0x0000000000028e76
- (void)videoRemaker:(id)arg1 progressDidChange:(float)arg2;	// IMP=0x0000000000028e6b
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;	// IMP=0x0000000000028def
- (void)_remakerDidFinish:(id)arg1;	// IMP=0x0000000000028cb2
- (void)videoRemakerDidBeginRemaking:(id)arg1;	// IMP=0x0000000000028c5f
- (void)_transcodeVideo:(id)arg1;	// IMP=0x0000000000028b87
- (void)_cancelRemaking:(id)arg1;	// IMP=0x0000000000028b40
- (_Bool)isRemaking;	// IMP=0x0000000000028b30
- (void)cancelRemaking;	// IMP=0x0000000000028b1c
- (float)remakingPercentComplete;	// IMP=0x0000000000028b0c
- (float)percentComplete;	// IMP=0x0000000000028af7
- (double)estimatedTimeRemaining;	// IMP=0x0000000000028aec
- (void)_updateStatisticsFromSnapshots;	// IMP=0x000000000002893e
- (void)snapshot;	// IMP=0x0000000000028802
- (void)setTotalBytesWritten:(long long)arg1 totalBytes:(long long)arg2;	// IMP=0x00000000000287f4
- (void)dataArrayInputStreamBytesWereRead:(id)arg1;	// IMP=0x00000000000287b0
- (double)maximumVideoDuration;	// IMP=0x00000000000287a2
- (_Bool)allowsViewingOnHost;	// IMP=0x000000000002879a
- (_Bool)allowsTellingFriend;	// IMP=0x0000000000028792
- (id)tellAFriendBody;	// IMP=0x000000000002878a
- (id)tellAFriendSubject;	// IMP=0x000000000002874c
- (id)tellAFriendURL;	// IMP=0x000000000002873f
- (_Bool)isVideoMedia;	// IMP=0x0000000000028714
- (id)mediaTitle;	// IMP=0x0000000000028707
- (id)mediaURL;	// IMP=0x00000000000286fa
- (void)willDismiss;	// IMP=0x00000000000286e8
- (void)dismiss;	// IMP=0x0000000000028699
- (void)presentModalSheetInViewController:(id)arg1;	// IMP=0x00000000000285f2
- (id)serviceName;	// IMP=0x00000000000285e5
- (void)publish;	// IMP=0x00000000000285cc
- (void)_agentIsReadyToPublish:(id)arg1;	// IMP=0x0000000000028583
- (void)doneButtonClicked;	// IMP=0x00000000000284c4
- (void)cancelButtonClicked;	// IMP=0x0000000000028493
- (id)navigationController;	// IMP=0x000000000002848b
- (void)resignPublishingSheetResponders;	// IMP=0x0000000000028485
- (void)_setApproximateVideoUploadSizes;	// IMP=0x00000000000283a0
- (void)setTrimStartTime:(double)arg1 andEndTime:(double)arg2;	// IMP=0x000000000002838a
- (void)setPublishing:(_Bool)arg1;	// IMP=0x0000000000028338
- (_Bool)isPublishing;	// IMP=0x0000000000028327
- (void)setUserInfo:(id)arg1;	// IMP=0x00000000000282f9
- (id)userInfo;	// IMP=0x00000000000282ef
- (void)setMediaData:(id)arg1;	// IMP=0x00000000000282c1
- (id)mediaData;	// IMP=0x00000000000282b7
- (_Bool)deleteMediaFileAfterPublishing;	// IMP=0x00000000000282ae
- (void)setDeleteMediaFileAfterPublishing:(_Bool)arg1;	// IMP=0x00000000000282a5
- (void)setMediaPath:(id)arg1;	// IMP=0x0000000000028277
- (id)mediaPath;	// IMP=0x000000000002826d
- (void)_setUpPublishingParams;	// IMP=0x0000000000028143
- (void)dealloc;	// IMP=0x0000000000028097
- (id)initWithMedia:(id)arg1;	// IMP=0x0000000000027fd9
- (void)_stopNetworkObservation;	// IMP=0x0000000000027f56
- (void)_startNetworkObservation;	// IMP=0x0000000000027ecc
- (void)_networkReachabilityDidChange:(id)arg1;	// IMP=0x0000000000027e19
@property(readonly, nonatomic) _Bool allowsCellularAccessForRequests;

@end

