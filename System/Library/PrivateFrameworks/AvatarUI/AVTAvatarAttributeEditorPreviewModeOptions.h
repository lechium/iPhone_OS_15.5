//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AVTAvatarAttributeEditorPreviewModeOptions : NSObject
{
    NSString *_framingMode;	// 8 = 0x8
    NSString *_bodyPosePack;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003d87a
@property(readonly, nonatomic) NSString *bodyPosePack; // @synthesize bodyPosePack=_bodyPosePack;
@property(readonly, nonatomic) NSString *framingMode; // @synthesize framingMode=_framingMode;
- (id)initWithFramingMode:(id)arg1 bodyPosePack:(id)arg2;	// IMP=0x000000000003d7cd

@end

