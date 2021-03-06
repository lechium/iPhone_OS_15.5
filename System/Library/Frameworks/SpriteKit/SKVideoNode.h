//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayer, NSString, NSURL;

@interface SKVideoNode
{
    void *_skcVideoNode;	// 96 = 0x60
    _Bool _isUsingKVO;	// 104 = 0x68
    NSString *_videoFileName;	// 112 = 0x70
    NSURL *_videoFileURL;	// 120 = 0x78
    AVPlayer *_player;	// 128 = 0x80
}

+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;	// IMP=0x000000000009b52f
+ (id)debugHierarchyPropertyDescriptions;	// IMP=0x000000000009b2a6
+ (id)videoNodeWithAVPlayer:(id)arg1;	// IMP=0x000000000009acda
+ (id)videoNodeWithURL:(id)arg1;	// IMP=0x000000000009ac7d
+ (id)videoNodeWithFileNamed:(id)arg1;	// IMP=0x000000000009ac20
+ (id)videoNodeWithVideoURL:(id)arg1;	// IMP=0x000000000009abfe
+ (id)videoNodeWithVideoFileNamed:(id)arg1;	// IMP=0x000000000009abdc
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009a0a0
- (void).cxx_destruct;	// IMP=0x000000000009ba99
@property(nonatomic) struct CGPoint anchorPoint;
@property(nonatomic) struct CGSize size;
- (void)pause;	// IMP=0x000000000009b1cf
- (void)play;	// IMP=0x000000000009b1ba
- (void)setPaused:(_Bool)arg1;	// IMP=0x000000000009b166
- (void)_didMakeBackingNode;	// IMP=0x000000000009b13e
- (void *)_makeBackingNode;	// IMP=0x000000000009b107
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000009afdd
- (id)description;	// IMP=0x000000000009aed3
- (_Bool)isEqualToNode:(id)arg1;	// IMP=0x000000000009ad38
- (id)initWithAVPlayer:(id)arg1;	// IMP=0x000000000009aad6
- (id)initWithURL:(id)arg1;	// IMP=0x000000000009a9ec
- (id)initWithFileNamed:(id)arg1;	// IMP=0x000000000009a88f
- (id)initWithVideoFileNamed:(id)arg1;	// IMP=0x000000000009a747
- (id)initWithVideoURL:(id)arg1;	// IMP=0x000000000009a65d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009a388
- (id)init;	// IMP=0x000000000009a31e
- (void)commonInit;	// IMP=0x000000000009a318
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009a1c9
@property(retain, nonatomic) AVPlayer *_player;
- (void)dealloc;	// IMP=0x000000000009a0a8

@end

