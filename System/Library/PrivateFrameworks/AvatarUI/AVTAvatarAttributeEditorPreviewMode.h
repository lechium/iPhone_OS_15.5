//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTAvatarAttributeEditorPreviewModeOptions;

@interface AVTAvatarAttributeEditorPreviewMode : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    AVTAvatarAttributeEditorPreviewModeOptions *_options;	// 16 = 0x10
}

+ (unsigned long long)attributeEditorPreviewModeTypeForEditingPreviewModeType:(unsigned long long)arg1;	// IMP=0x0000000000011982
- (void).cxx_destruct;	// IMP=0x0000000000011a1b
@property(readonly, nonatomic) AVTAvatarAttributeEditorPreviewModeOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithType:(unsigned long long)arg1 options:(id)arg2;	// IMP=0x0000000000011991

@end
