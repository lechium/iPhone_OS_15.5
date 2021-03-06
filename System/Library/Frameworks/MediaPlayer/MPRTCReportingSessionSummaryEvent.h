//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface MPRTCReportingSessionSummaryEvent
{
    _Bool _hadBlockingTracklistLoad;	// 8 = 0x8
    NSError *_assetLoadError;	// 16 = 0x10
    double _assetLoadDuration;	// 24 = 0x18
    long long _blockingSecureKeyLoadCount;	// 32 = 0x20
    double _blockingSecureKeyLoadDuration;	// 40 = 0x28
    double _maximumSecureKeyLoadDuration;	// 48 = 0x30
    long long _secureKeyLoadCount;	// 56 = 0x38
    NSError *_secureKeyError;	// 64 = 0x40
    NSError *_tracklistLoadError;	// 72 = 0x48
    double _tracklistLoadDuration;	// 80 = 0x50
    NSError *_playbackEndError;	// 88 = 0x58
    long long _endReasonType;	// 96 = 0x60
    long long _startupState;	// 104 = 0x68
    long long _interfaceTypeChangeCount;	// 112 = 0x70
    long long _startInterfaceType;	// 120 = 0x78
    NSNumber *_perceivedTotalStartupTime;	// 128 = 0x80
    NSString *_siriSessionIdentifier;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000001b2bf1
@property(copy, nonatomic) NSString *siriSessionIdentifier; // @synthesize siriSessionIdentifier=_siriSessionIdentifier;
@property(copy, nonatomic) NSNumber *perceivedTotalStartupTime; // @synthesize perceivedTotalStartupTime=_perceivedTotalStartupTime;
@property(nonatomic) long long startInterfaceType; // @synthesize startInterfaceType=_startInterfaceType;
@property(nonatomic) long long interfaceTypeChangeCount; // @synthesize interfaceTypeChangeCount=_interfaceTypeChangeCount;
@property(nonatomic) long long startupState; // @synthesize startupState=_startupState;
@property(nonatomic) long long endReasonType; // @synthesize endReasonType=_endReasonType;
@property(copy, nonatomic) NSError *playbackEndError; // @synthesize playbackEndError=_playbackEndError;
@property(nonatomic) _Bool hadBlockingTracklistLoad; // @synthesize hadBlockingTracklistLoad=_hadBlockingTracklistLoad;
@property(nonatomic) double tracklistLoadDuration; // @synthesize tracklistLoadDuration=_tracklistLoadDuration;
@property(copy, nonatomic) NSError *tracklistLoadError; // @synthesize tracklistLoadError=_tracklistLoadError;
@property(copy, nonatomic) NSError *secureKeyError; // @synthesize secureKeyError=_secureKeyError;
@property(nonatomic) long long secureKeyLoadCount; // @synthesize secureKeyLoadCount=_secureKeyLoadCount;
@property(nonatomic) double maximumSecureKeyLoadDuration; // @synthesize maximumSecureKeyLoadDuration=_maximumSecureKeyLoadDuration;
@property(nonatomic) double blockingSecureKeyLoadDuration; // @synthesize blockingSecureKeyLoadDuration=_blockingSecureKeyLoadDuration;
@property(nonatomic) long long blockingSecureKeyLoadCount; // @synthesize blockingSecureKeyLoadCount=_blockingSecureKeyLoadCount;
@property(nonatomic) double assetLoadDuration; // @synthesize assetLoadDuration=_assetLoadDuration;
@property(copy, nonatomic) NSError *assetLoadError; // @synthesize assetLoadError=_assetLoadError;
- (id)newRTCReportingPayloadDictionary;	// IMP=0x00000000001b2521
- (unsigned short)rtcReportingCategory;	// IMP=0x00000000001b2516

@end

