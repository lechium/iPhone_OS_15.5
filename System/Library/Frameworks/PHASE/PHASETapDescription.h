//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioFormat, NSMutableString, NSString;

@interface PHASETapDescription : NSObject
{
    NSMutableString *_uidString;	// 8 = 0x8
    unsigned int _audioSessionToken;	// 16 = 0x10
    int _processIdentifier;	// 20 = 0x14
    long long _type;	// 24 = 0x18
    long long _binding;	// 32 = 0x20
    long long _streamType;	// 40 = 0x28
    NSString *_sceneIdentifier;	// 48 = 0x30
    AVAudioFormat *_format;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000007d2e4
@property(readonly, nonatomic) AVAudioFormat *format; // @synthesize format=_format;
@property(readonly, nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(readonly, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(readonly, nonatomic) unsigned int audioSessionToken; // @synthesize audioSessionToken=_audioSessionToken;
@property(readonly, nonatomic) long long streamType; // @synthesize streamType=_streamType;
@property(readonly, nonatomic) long long binding; // @synthesize binding=_binding;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *uidString;
- (id)initWithStreamType:(long long)arg1 tapType:(long long)arg2;	// IMP=0x000000000007d038
- (id)initWithSceneIdentifier:(id)arg1 tapType:(long long)arg2;	// IMP=0x000000000007ce98
- (id)initWithAudioSessionToken:(unsigned int)arg1 tapType:(long long)arg2;	// IMP=0x000000000007cd7a
- (id)initWithProcessIdentifier:(int)arg1 tapType:(long long)arg2;	// IMP=0x000000000007cc61
- (id)initSystemTapOfType:(long long)arg1;	// IMP=0x000000000007cc41
- (id)initInternalWithType:(long long)arg1;	// IMP=0x000000000007ca70

@end

