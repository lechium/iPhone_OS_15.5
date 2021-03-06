//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioNode, AVAudioPlayerNode, SCNAudioSource;

@interface SCNAudioPlayer : NSObject
{
    AVAudioNode *_audioNode;	// 8 = 0x8
    AVAudioPlayerNode *_audioPlayer;	// 16 = 0x10
    SCNAudioSource *_audioSource;	// 24 = 0x18
    struct __C3DNode *_nodeRef;	// 32 = 0x20
    struct __C3DScene *_scene;	// 40 = 0x28
    _Bool _customAudioNode;	// 48 = 0x30
    _Bool _completed;	// 49 = 0x31
    _Bool _shouldRecycle;	// 50 = 0x32
    CDUnknownBlockType willStartPlayback;	// 56 = 0x38
    CDUnknownBlockType didFinishPlayback;	// 64 = 0x40
}

+ (id)audioPlayerWithSource:(id)arg1;	// IMP=0x0000000000037260
+ (id)audioPlayerWithAVAudioNode:(id)arg1;	// IMP=0x00000000000371ce
@property(readonly) _Bool customAudioNode; // @synthesize customAudioNode=_customAudioNode;
@property _Bool completed; // @synthesize completed=_completed;
@property(readonly) struct __C3DScene *scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) SCNAudioSource *audioSource; // @synthesize audioSource=_audioSource;
@property(readonly) AVAudioPlayerNode *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(readonly, nonatomic) AVAudioNode *audioNode; // @synthesize audioNode=_audioNode;
@property(copy, nonatomic) CDUnknownBlockType didFinishPlayback; // @synthesize didFinishPlayback;
@property(copy, nonatomic) CDUnknownBlockType willStartPlayback; // @synthesize willStartPlayback;
- (id)audioBufferFormat;	// IMP=0x0000000000037a71
- (void)recycle;	// IMP=0x00000000000379ec
- (void)play;	// IMP=0x0000000000037423
- (const void *)__CFObject;	// IMP=0x000000000003741a
- (struct __C3DNode *)nodeRef;	// IMP=0x0000000000037410
- (void)setNodeRef:(struct __C3DNode *)arg1;	// IMP=0x00000000000373eb
- (void)dealloc;	// IMP=0x0000000000037393
- (void)reset;	// IMP=0x0000000000037216
- (id)initWithAVAudioNode:(id)arg1;	// IMP=0x0000000000037173
- (id)initWithSource:(id)arg1;	// IMP=0x0000000000037087

@end

