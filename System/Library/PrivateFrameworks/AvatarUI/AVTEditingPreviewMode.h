//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTEditingPreviewModeOptions;

@interface AVTEditingPreviewMode : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    AVTEditingPreviewModeOptions *_options;	// 16 = 0x10
}

+ (id)stringForPreviewModeType:(unsigned long long)arg1;	// IMP=0x0000000000078af9
+ (unsigned long long)previewModeTypeForString:(id)arg1;	// IMP=0x0000000000078ad9
+ (id)defaultPreviewMode;	// IMP=0x0000000000078a6d
- (void).cxx_destruct;	// IMP=0x0000000000078cb5
@property(readonly, nonatomic) AVTEditingPreviewModeOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x0000000000078b8b
- (id)initWithType:(unsigned long long)arg1 options:(id)arg2;	// IMP=0x0000000000078b15

@end

