//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioFormat;

@interface PHASEExternalOutputStreamDefinition : NSObject
{
    unsigned int _maximumFramesToRender;	// 8 = 0x8
    unsigned int _audioSessionToken;	// 12 = 0xc
    long long _streamType;	// 16 = 0x10
    AVAudioFormat *_format;	// 24 = 0x18
}

+ (id)new;	// IMP=0x00000000000247d4
- (void).cxx_destruct;	// IMP=0x00000000000248e5
@property(readonly, nonatomic) unsigned int audioSessionToken; // @synthesize audioSessionToken=_audioSessionToken;
@property(readonly, nonatomic) unsigned int maximumFramesToRender; // @synthesize maximumFramesToRender=_maximumFramesToRender;
@property(readonly, nonatomic) AVAudioFormat *format; // @synthesize format=_format;
@property(readonly, nonatomic) long long streamType; // @synthesize streamType=_streamType;
- (void)setMaximumFramesToRender:(unsigned int)arg1;	// IMP=0x00000000000248b6
- (void)setFormat:(id)arg1;	// IMP=0x00000000000248a5
- (id)initWithStreamType:(long long)arg1 format:(id)arg2 maximumFramesToRender:(unsigned int)arg3 audioSessionToken:(unsigned int)arg4;	// IMP=0x0000000000024801
- (id)initWithStreamType:(long long)arg1 format:(id)arg2 maximumFramesToRender:(unsigned int)arg3;	// IMP=0x00000000000247ec
- (id)init;	// IMP=0x0000000000024796

@end
