//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTAvatarPose, AVTCoreModelFramingModeOverrides, AVTCoreModelPickerDisplayCondition, AVTStickerConfiguration, NSArray, NSString;

@interface AVTCoreModelPickerOptions : NSObject
{
    _Bool _separator;	// 8 = 0x8
    _Bool _showsLabel;	// 9 = 0x9
    NSString *_framingMode;	// 16 = 0x10
    NSArray *_presetOverrides;	// 24 = 0x18
    AVTCoreModelFramingModeOverrides *_framingModeOverrides;	// 32 = 0x20
    AVTAvatarPose *_poseOverride;	// 40 = 0x28
    AVTCoreModelPickerDisplayCondition *_displayCondition;	// 48 = 0x30
    unsigned long long _displayMode;	// 56 = 0x38
    unsigned long long _sortingOption;	// 64 = 0x40
    AVTStickerConfiguration *_stickerConfiguration;	// 72 = 0x48
}

+ (unsigned long long)sortingOptionFromString:(id)arg1;	// IMP=0x00000000000a3be2
+ (unsigned long long)displayModeFromString:(id)arg1;	// IMP=0x00000000000a3b7c
- (void).cxx_destruct;	// IMP=0x00000000000a3e17
@property(readonly, nonatomic) _Bool showsLabel; // @synthesize showsLabel=_showsLabel;
@property(readonly, nonatomic) AVTStickerConfiguration *stickerConfiguration; // @synthesize stickerConfiguration=_stickerConfiguration;
@property(readonly, nonatomic) unsigned long long sortingOption; // @synthesize sortingOption=_sortingOption;
@property(readonly, nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(readonly, nonatomic) AVTCoreModelPickerDisplayCondition *displayCondition; // @synthesize displayCondition=_displayCondition;
@property(readonly, copy, nonatomic) AVTAvatarPose *poseOverride; // @synthesize poseOverride=_poseOverride;
@property(readonly, nonatomic) AVTCoreModelFramingModeOverrides *framingModeOverrides; // @synthesize framingModeOverrides=_framingModeOverrides;
@property(readonly, copy, nonatomic) NSArray *presetOverrides; // @synthesize presetOverrides=_presetOverrides;
@property(readonly, nonatomic) _Bool separator; // @synthesize separator=_separator;
@property(readonly, copy, nonatomic) NSString *framingMode; // @synthesize framingMode=_framingMode;
- (id)initWithFramingMode:(id)arg1 separatorFlag:(_Bool)arg2 presetOverrides:(id)arg3 poseOverride:(id)arg4 framingModeOverrides:(id)arg5 displayMode:(unsigned long long)arg6 displayCondition:(id)arg7 sortingOption:(unsigned long long)arg8 stickerConfiguration:(id)arg9 showsLabel:(_Bool)arg10;	// IMP=0x00000000000a3c48

@end

