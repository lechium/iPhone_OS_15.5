//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MOVStreamIO/MOVStreamWriterDeprecated-Protocol.h>
#import <MOVStreamIO/MOVStreamWriterDeprecationNominates-Protocol.h>
#import <MOVStreamIO/MOVStreamWriterStateContext-Protocol.h>
#import <MOVStreamIO/VideoEncoderInterfaceDelegate-Protocol.h>

@class AVAssetWriter, NSArray, NSError, NSString, NSURL;
@protocol MOVStreamCustomEncoderConfigDelegate, MOVStreamWriterDelegate, MOVStreamWriterState, OS_dispatch_queue;

@interface MOVStreamWriter : NSObject <VideoEncoderInterfaceDelegate, MOVStreamWriterStateContext, MOVStreamWriterDeprecated, MOVStreamWriterDeprecationNominates>
{
    NSObject<OS_dispatch_queue> *m_delegateCallbackQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *m_writingQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *m_processingQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_timeoutQueue;	// 32 = 0x20
    CDUnknownBlockType _timeoutBlock;	// 40 = 0x28
    NSURL *m_writeURL;	// 48 = 0x30
    AVAssetWriter *m_assetWriter;	// 56 = 0x38
    double m_expectedFrameRate;	// 64 = 0x40
    _Bool m_realtime;	// 72 = 0x48
    _Bool m_haveStartedSession;	// 73 = 0x49
    struct CGAffineTransform m_videoTransform;	// 80 = 0x50
    struct map<std::string, (anonymous namespace)::StreamRecordingData, std::less<std::string>, std::allocator<std::pair<const std::string, (anonymous namespace)::StreamRecordingData>>> m_streamDataMap;	// 128 = 0x80
    struct vector<std::string, std::allocator<std::string>> m_orderedStreamNames;	// 152 = 0x98
    struct map<std::string, (anonymous namespace)::MetadataRecordingData, std::less<std::string>, std::allocator<std::pair<const std::string, (anonymous namespace)::MetadataRecordingData>>> m_metadataDataMap;	// 176 = 0xb0
    struct vector<std::string, std::allocator<std::string>> m_orderedMetadataStreamNames;	// 200 = 0xc8
    struct map<std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>, std::less<std::string>, std::allocator<std::pair<const std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>>>> m_associatedMetadataDataMap;	// 224 = 0xe0
    struct map<std::string, CMTime, std::less<std::string>, std::allocator<std::pair<const std::string, CMTime>>> m_lastPtsForStream;	// 248 = 0xf8
    _Bool m_observingIsReady;	// 272 = 0x110
    id <MOVStreamWriterState> _state;	// 280 = 0x118
    unsigned long long _defaultWritingBufferCapacity;	// 288 = 0x120
    unsigned long long _defaultAudioWritingBufferCapacity;	// 296 = 0x128
    unsigned long long _defaultMetadataWritingBufferCapacity;	// 304 = 0x130
    _Bool legacyKeysMode;	// 312 = 0x138
    int _baseMediaTimeScale;	// 316 = 0x13c
    NSArray *movMetadataItems;	// 320 = 0x140
    NSError *criticalError;	// 328 = 0x148
    double _finishingTimeout;	// 336 = 0x150
    id <MOVStreamCustomEncoderConfigDelegate> _customEncoderConfigDelegate;	// 344 = 0x158
    id <MOVStreamWriterDelegate> _delegate;	// 352 = 0x160
}

+ (id)getMOVStreamIOMetadataItem;	// IMP=0x000000000001d5e7
+ (unsigned int)getPixelFormatFromStreamData:(struct StreamRecordingData *)arg1;	// IMP=0x0000000000021c94
- (id).cxx_construct;	// IMP=0x0000000000016468
- (void).cxx_destruct;	// IMP=0x0000000000016363
@property(retain) id <MOVStreamWriterState> state; // @synthesize state=_state;
@property __weak id <MOVStreamWriterDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <MOVStreamCustomEncoderConfigDelegate> customEncoderConfigDelegate; // @synthesize customEncoderConfigDelegate=_customEncoderConfigDelegate;
@property int baseMediaTimeScale; // @synthesize baseMediaTimeScale=_baseMediaTimeScale;
@property double finishingTimeout; // @synthesize finishingTimeout=_finishingTimeout;
@property(retain) NSError *criticalError; // @synthesize criticalError;
@property(retain) NSArray *movMetadataItems; // @synthesize movMetadataItems;
@property _Bool legacyKeysMode; // @synthesize legacyKeysMode;
- (void)informDelegateAboutMediaWrittenForStream:(id)arg1 mediaType:(long long)arg2;	// IMP=0x00000000000160e1
- (void)informDelegateAboutFinishingTimeout;	// IMP=0x0000000000015fcb
- (void)informDelegateAboutIsReady:(_Bool)arg1 forStream:(id)arg2;	// IMP=0x0000000000015e59
- (void)informDelegateAboutError:(id)arg1;	// IMP=0x0000000000015cfc
- (void)prepareToRecord;	// IMP=0x0000000000015ce8
- (void)addTrackForStreamWithIdentifier:(id)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 encoderConfig:(id)arg3;	// IMP=0x0000000000015cd5
- (_Bool)setVideoTransformFromOrientation:(int)arg1;	// IMP=0x0000000000015c59
@property unsigned long long fifoBufferCapacity;
- (unsigned long long)fifoBufferSizeForStream:(id)arg1;	// IMP=0x0000000000015b37
- (void)setupAssociatedMetadataInputsWithError:(id *)arg1;	// IMP=0x0000000000015324
- (void)setupMetadataInputsWithError:(id *)arg1;	// IMP=0x0000000000014a21
- (void)setupAssetWriterStreamInputsWithError:(id *)arg1;	// IMP=0x0000000000013304
- (int)encoderTypeForStream:(id)arg1;	// IMP=0x00000000000131c2
- (struct CGAffineTransform)getVideoTransformForStream:(id)arg1;	// IMP=0x0000000000013073
- (double)getExpectedFrameRateForStream:(id)arg1;	// IMP=0x0000000000012f43
- (void)writeMetadata:(id)arg1 forStreamId:(id)arg2;	// IMP=0x0000000000012c27
- (_Bool)writeVideoFrameStreamAttachmentsData:(id)arg1 toMetadataAdaptor:(id)arg2 ofStream:(id)arg3;	// IMP=0x00000000000129d0
- (void)writeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 andMetadata:(id)arg2 forStreamId:(id)arg3;	// IMP=0x0000000000012273
- (void)consumeSamplesOfVideoAudioStream:(id)arg1;	// IMP=0x0000000000011aed
- (void)consumeMetadatOfMetadataStream:(id)arg1;	// IMP=0x0000000000011396
- (void)checkForFinishing;	// IMP=0x00000000000111e1
- (void)processFinishRecording;	// IMP=0x0000000000010abd
- (void)deleteFileOnCancel;	// IMP=0x000000000001099d
- (void)processCancelRecording;	// IMP=0x000000000001077b
- (void)finishAVWriter;	// IMP=0x0000000000010596
- (void)processForceFinishRecording;	// IMP=0x000000000001040e
- (void)forceFinishRecording;	// IMP=0x0000000000010366
- (void)clearAllFifoQueues;	// IMP=0x000000000001007f
- (void)cancelRecording;	// IMP=0x000000000000ffd7
- (void)cancelTimeoutBlock;	// IMP=0x000000000000ffc2
- (void)resetTimeoutRefTime;	// IMP=0x000000000000ff8e
- (void)resubmitTimeoutBlock;	// IMP=0x000000000000fe22
- (void)startFinishingTimeoutTimer;	// IMP=0x000000000000fde7
- (void)finishAndDrainFifoFirst;	// IMP=0x000000000000fce8
- (void)finishRecording;	// IMP=0x000000000000fb9f
- (void)appendAudioBuffer:(struct opaqueCMSampleBuffer *)arg1 forStream:(id)arg2;	// IMP=0x000000000000f8b4
- (void)asyncWriteAssociatedMetadata:(id)arg1 metadataKey:(basic_string_5886a005)arg2 associatedStreamKey:(basic_string_5886a005)arg3;	// IMP=0x000000000000f1b9
- (void)appendMetadata:(id)arg1 associatedWith:(id)arg2 toStream:(id)arg3;	// IMP=0x000000000000eda0
- (void)queueMetadataGroup:(id)arg1 stream:(id)arg2;	// IMP=0x000000000000eaeb
- (void)appendMetadata:(id)arg1 withTimeStamp:(CDStruct_1b6d18a9)arg2 toStream:(id)arg3;	// IMP=0x000000000000e35d
- (void)appendTimeMetadataGroup:(id)arg1 toStream:(id)arg2;	// IMP=0x000000000000dfc1
- (unsigned int)encoder:(id)arg1 codecTypeOverrideForstreamId:(id)arg2;	// IMP=0x000000000000dddd
- (_Bool)encoder:(id)arg1 configureSessionOverride:(struct OpaqueVTCompressionSession *)arg2 streamId:(id)arg3;	// IMP=0x000000000000dc03
- (id)encoder:(id)arg1 overrideVideoEncoderSpecificationForstreamId:(id)arg2;	// IMP=0x000000000000da11
- (void)encoder:(id)arg1 encodingFailedForStream:(id)arg2;	// IMP=0x000000000000d8eb
- (void)encoder:(id)arg1 encodedSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 metadata:(id)arg3 presentationTime:(CDStruct_1b6d18a9)arg4 streamId:(id)arg5;	// IMP=0x000000000000d4d1
- (void)newSampleReady:(struct opaqueCMSampleBuffer *)arg1 metadata:(id)arg2 presentationTime:(CDStruct_1b6d18a9)arg3 streamKey:(basic_string_5886a005)arg4 streamId:(id)arg5 isAudioSample:(_Bool)arg6;	// IMP=0x000000000000d142
- (void)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 attachments:(id)arg2 streamId:(id)arg3;	// IMP=0x000000000000c7d1
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 attachments:(id)arg2 streamId:(id)arg3;	// IMP=0x000000000000c7be
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 attachmentMetadata:(id)arg2 streamId:(id)arg3;	// IMP=0x000000000000c1c4
- (void)appendPixelBuffer:(struct __CVBuffer *)arg1 presentationTime:(CDStruct_1b6d18a9)arg2 toStreamId:(id)arg3;	// IMP=0x000000000000b437
- (_Bool)marksOutputTracksAsEnabledForStream:(basic_string_5886a005)arg1;	// IMP=0x000000000000b2dc
- (int)attachmentSerializationModeForStream:(basic_string_5886a005)arg1 withDefaultMode:(int)arg2;	// IMP=0x000000000000b237
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000aeea
- (void)removeIsReadyObservers;	// IMP=0x000000000000adbe
- (void)addIsReadyObservers;	// IMP=0x000000000000ac6e
- (void)executePrepareToRecordWithMovieMetadata:(id)arg1;	// IMP=0x000000000000a6b2
- (void)prepareToRecordWithMovieMetadata:(id)arg1;	// IMP=0x000000000000a44a
- (_Bool)setTrackMetadata:(id)arg1 forMetadataStream:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000009fe9
- (_Bool)setTrackMetadata:(id)arg1 forMetadataStream:(id)arg2;	// IMP=0x0000000000009fd3
- (_Bool)setTrackMetadata:(id)arg1 forStream:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000009b72
- (_Bool)setTrackMetadata:(id)arg1 forStream:(id)arg2;	// IMP=0x0000000000009b5c
- (void)addAudioTrackForStreamWithIdentifier:(id)arg1 audioFormat:(id)arg2 additionalSettings:(id)arg3;	// IMP=0x00000000000099c7
- (void)addTrackForStreamWithIdentifier:(id)arg1 formatDescription:(const struct opaqueCMFormatDescription *)arg2 recordingConfiguration:(id)arg3;	// IMP=0x0000000000009095
- (void)addMetadataTrackAssociatedWith:(id)arg1 withIdentifier:(id)arg2 withFormatDescription:(struct opaqueCMFormatDescription *)arg3;	// IMP=0x0000000000008bee
- (void)addMetadataTrack:(id)arg1 formatDescription:(const struct opaqueCMFormatDescription *)arg2;	// IMP=0x00000000000088d3
- (void)addMetadataTrack:(id)arg1;	// IMP=0x00000000000088be
- (_Bool)checkIfFifoAreEmpty;	// IMP=0x00000000000087b9
- (_Bool)setRealTimeCapture:(_Bool)arg1;	// IMP=0x0000000000008788
- (_Bool)relateStream:(id)arg1 toStream:(id)arg2 relationSpecifier:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000846d
- (_Bool)relateStream:(id)arg1 toStream:(id)arg2 relationSpecifier:(id)arg3;	// IMP=0x0000000000008457
- (_Bool)setVideoTransform:(struct CGAffineTransform)arg1;	// IMP=0x0000000000008411
- (_Bool)setExpectedFrameRate:(double)arg1;	// IMP=0x00000000000083c6
- (void)setDelegate:(id)arg1 callbackQueue:(id)arg2;	// IMP=0x00000000000082c7
@property(readonly) long long status;
- (void)deleteMOVFile;	// IMP=0x00000000000081ae
- (_Bool)activateNewState:(id)arg1 byEvent:(id)arg2;	// IMP=0x0000000000007f60
- (unsigned long long)writingBufferUsageForMetadataStream:(id)arg1;	// IMP=0x0000000000007e5a
- (unsigned long long)writingBufferUsageForAudioStream:(id)arg1;	// IMP=0x0000000000007cf2
- (unsigned long long)writingBufferUsageForStream:(id)arg1;	// IMP=0x0000000000007b8a
- (unsigned long long)writingBufferCapacityForMetadataStream:(id)arg1;	// IMP=0x0000000000007a94
- (unsigned long long)writingBufferCapacityForAudioStream:(id)arg1;	// IMP=0x000000000000793c
- (unsigned long long)writingBufferCapacityForStream:(id)arg1;	// IMP=0x00000000000077e4
- (void)setWritingBufferCapacity:(unsigned long long)arg1 forMetadataStream:(id)arg2;	// IMP=0x0000000000007529
- (void)setWritingBufferCapacity:(unsigned long long)arg1 forAudioStream:(id)arg2;	// IMP=0x00000000000073cc
- (void)setWritingBufferCapacity:(unsigned long long)arg1 forStream:(id)arg2;	// IMP=0x0000000000006ffe
@property unsigned long long defaultMetadataWritingBufferCapacity;
@property unsigned long long defaultAudioWritingBufferCapacity;
@property unsigned long long defaultWritingBufferCapacity;
- (_Bool)isAudioStream:(struct StreamRecordingData *)arg1;	// IMP=0x0000000000006e1b
- (void)dealloc;	// IMP=0x0000000000006bf2
- (id)initWithURL:(id)arg1 andExpectedFrameRate:(double)arg2;	// IMP=0x00000000000068c7
- (void)writingSessionDidStartAtTime:(CDStruct_1b6d18a9)arg1 streamId:(id)arg2 mediaType:(long long)arg3 writerDelegate:(id)arg4 delegateCallbackQueue:(id)arg5;	// IMP=0x00000000000066ba
- (void)writerStatusChanged:(long long)arg1 writerDelegate:(id)arg2 delegateCallbackQueue:(id)arg3;	// IMP=0x0000000000006490
- (_Bool)fifoDropsEnabled:(struct StreamRecordingData *)arg1;	// IMP=0x000000000001d83a
- (unsigned int)getPixelFormatForStream:(id)arg1 fromMap:(void *)arg2;	// IMP=0x0000000000021bd8
- (_Bool)isCustomTrackMetadataCompatibleObject:(id)arg1;	// IMP=0x0000000000021b4d
- (const struct opaqueCMFormatDescription *)createMetadataFormatDescription:(id)arg1;	// IMP=0x0000000000021823
- (id)getTrackMetadataForExactBytesPerRow:(id)arg1 fromMap:(void *)arg2 error:(id *)arg3;	// IMP=0x000000000002142a
- (id)getTrackMetadataForTrackTypeInfo:(id)arg1 fromMap:(void *)arg2;	// IMP=0x0000000000021224
- (id)createRelationSpecifierMetadata:(id)arg1;	// IMP=0x0000000000021158
- (id)createRelatedToStreamMetadata:(id)arg1;	// IMP=0x000000000002108c
- (id)getTrackEncodedPixelFormatMetadataForStream:(id)arg1 fromMap:(void *)arg2;	// IMP=0x0000000000020f0f
- (id)getLegacyTrackEncodedPixelFormatMetadataForStream:(id)arg1 fromMap:(void *)arg2;	// IMP=0x0000000000020d23
- (id)getLegacyTrackInputPixelFormatMetadataForStream:(id)arg1 fromMap:(void *)arg2;	// IMP=0x0000000000020b37
- (id)getTrackInputPixelFormatMetadataForStream:(id)arg1 fromMap:(void *)arg2;	// IMP=0x00000000000209ba
- (id)getLegacyTrackMetadataForStream:(id)arg1;	// IMP=0x000000000002084d
- (id)getTrackMetadataForStream:(id)arg1;	// IMP=0x0000000000020781
- (id)getTrackMetadataForRawBayerRearrangeType:(id)arg1 fromMap:(void *)arg2;	// IMP=0x00000000000205e8
- (id)getLegacyTrackMetadataForAttachmentsSerializationMode:(id)arg1 fromMap:(void *)arg2;	// IMP=0x00000000000203c6
- (id)getTrackMetadataForAttachmentsSerializationMode:(id)arg1 fromMap:(void *)arg2;	// IMP=0x0000000000020212
- (id)customMetadataTrackMetadataForStream:(id)arg1 fromMap:(void *)arg2;	// IMP=0x000000000001fcd9
- (id)customTrackMetadataForStream:(id)arg1 fromMap:(void *)arg2;	// IMP=0x000000000001f8c0
- (int)attachmentSerializationModeForStream:(basic_string_5886a005)arg1 withDefaultMode:(int)arg2 fromMap:(void *)arg3;	// IMP=0x000000000001f81c
- (_Bool)marksOutputTracksAsEnabledForStream:(basic_string_5886a005)arg1 fromMap:(void *)arg2;	// IMP=0x000000000001f65e
- (id)getMetadataGroupForBuffer:(struct __CVBuffer *)arg1 stream:(id)arg2 presentationTime:(CDStruct_1b6d18a9)arg3 serializationMode:(int)arg4;	// IMP=0x000000000001f0a4
- (_Bool)isReadyForMoreDataForStreamId:(id)arg1 fromMap:(void *)arg2;	// IMP=0x000000000001edfd
- (id)getAudioMetadataForBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000000001ea70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
