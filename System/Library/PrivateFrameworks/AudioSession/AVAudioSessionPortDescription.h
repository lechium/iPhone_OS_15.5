//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioSessionDataSourceDescription, NSArray, NSString;

@interface AVAudioSessionPortDescription : NSObject
{
    void *_impl;	// 8 = 0x8
}

+ (id)privateCreateArray:(id)arg1 owningSession:(id)arg2;	// IMP=0x0000000000004a60
- (id)initWithPortType:(id)arg1 owningSession:(id)arg2;	// IMP=0x0000000000004c2c
- (void)configureChannelsAndDataSources:(id)arg1;	// IMP=0x00000000000042f6
- (void)setSupportsSpatialAudio:(_Bool)arg1;	// IMP=0x00000000000042d7
- (id)initWithRawPortDescription:(id)arg1 owningSession:(id)arg2;	// IMP=0x0000000000003210
- (id)privateGetID;	// IMP=0x00000000000031fe
- (struct PortDescriptionImpl *)privateGetImplementation;	// IMP=0x00000000000031f4
- (_Bool)setPreferredDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000030fd
- (id)description;	// IMP=0x0000000000002f76
@property(readonly, nonatomic) NSString *UID;
@property(readonly, nonatomic) AVAudioSessionDataSourceDescription *preferredDataSource;
@property(readonly, nonatomic) AVAudioSessionDataSourceDescription *selectedDataSource;
- (unsigned long long)endpointType;	// IMP=0x0000000000002c5c
- (_Bool)isLowLatencyAirPlay;	// IMP=0x0000000000002c4f
- (_Bool)isHeadphones;	// IMP=0x0000000000002c42
- (_Bool)isLiveListenSupported;	// IMP=0x0000000000002c35
@property(readonly, getter=isSpatialAudioEnabled) _Bool spatialAudioEnabled;
@property(readonly) _Bool hasHardwareVoiceCallProcessing;
@property(readonly, nonatomic) NSArray *dataSources;
@property(readonly, nonatomic) NSArray *channels;
@property(readonly, nonatomic) NSString *portName;
@property(readonly, nonatomic) NSString *portType;
- (unsigned long long)hash;	// IMP=0x0000000000002b11
- (_Bool)isEqualToPort:(id)arg1 compareStrict:(_Bool)arg2;	// IMP=0x000000000000270f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000268e
- (void)dealloc;	// IMP=0x0000000000002638
- (id)initWithSession:(id)arg1;	// IMP=0x0000000000002577

@end

