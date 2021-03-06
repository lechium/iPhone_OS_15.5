//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ETSketchMessage, NSArray, NSMutableArray, NSURL, UIImage;

@interface ETVideoMessage
{
    NSMutableArray *_playingMessages;	// 8 = 0x8
    double _compressedTimeTotal;	// 16 = 0x10
    double _compressedTimeLastEventTime;	// 24 = 0x18
    double _messageDuration;	// 32 = 0x20
    _Bool _pauseTimeCompression;	// 40 = 0x28
    NSURL *_mediaURL;	// 48 = 0x30
    UIImage *_stillImage;	// 56 = 0x38
    ETSketchMessage *_introMessage;	// 64 = 0x40
    unsigned long long _mediaType;	// 72 = 0x48
}

+ (unsigned short)messageType;	// IMP=0x0000000000014784
- (void).cxx_destruct;	// IMP=0x000000000001567d
@property(nonatomic) _Bool pauseTimeCompression; // @synthesize pauseTimeCompression=_pauseTimeCompression;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) ETSketchMessage *introMessage; // @synthesize introMessage=_introMessage;
@property(retain, nonatomic) UIImage *stillImage; // @synthesize stillImage=_stillImage;
@property(retain, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
- (double)messageDuration;	// IMP=0x00000000000154c2
- (_Bool)isAnimated;	// IMP=0x000000000001548e
- (double)compressTimeSinceStartOfMessage:(double)arg1;	// IMP=0x00000000000150df
@property(readonly, nonatomic) _Bool canCompressTime;
@property(retain, nonatomic) NSArray *playingMessages;
- (_Bool)shouldLoopDuringPlayback;	// IMP=0x00000000000150a0
- (id)messageTypeAsString;	// IMP=0x0000000000014ed4
- (id)archiveData;	// IMP=0x0000000000014c22
- (int)_etpMediaTypeFromETMediaType:(unsigned long long)arg1;	// IMP=0x0000000000014c11
- (unsigned long long)_mediaTypeFromETPVideoType:(int)arg1;	// IMP=0x0000000000014c00
- (id)initWithArchiveData:(id)arg1;	// IMP=0x000000000001478f
- (id)init;	// IMP=0x00000000000146f6

@end

