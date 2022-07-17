//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTAvatarPose, AVTStickerConfiguration, NSArray, NSString;

@interface AVTAvatarAttributeEditorSectionOptions : NSObject
{
    _Bool _showsLabel;	// 8 = 0x8
    NSString *_framingMode;	// 16 = 0x10
    AVTAvatarPose *_poseOverride;	// 24 = 0x18
    NSArray *_presetOverrides;	// 32 = 0x20
    unsigned long long _displayMode;	// 40 = 0x28
    AVTStickerConfiguration *_stickerConfiguration;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000c5a08
@property(readonly, nonatomic) _Bool showsLabel; // @synthesize showsLabel=_showsLabel;
@property(readonly, copy, nonatomic) AVTStickerConfiguration *stickerConfiguration; // @synthesize stickerConfiguration=_stickerConfiguration;
@property(readonly, nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(readonly, copy, nonatomic) NSArray *presetOverrides; // @synthesize presetOverrides=_presetOverrides;
@property(readonly, copy, nonatomic) AVTAvatarPose *poseOverride; // @synthesize poseOverride=_poseOverride;
@property(readonly, copy, nonatomic) NSString *framingMode; // @synthesize framingMode=_framingMode;
- (id)description;	// IMP=0x00000000000c5813
- (id)stringForDisplayMode;	// IMP=0x00000000000c57dc
- (id)initWithFramingMode:(id)arg1 poseOverride:(id)arg2 presetOverrides:(id)arg3 displayMode:(unsigned long long)arg4 stickerConfiguration:(id)arg5 showsLabel:(_Bool)arg6;	// IMP=0x00000000000c56f2

@end
