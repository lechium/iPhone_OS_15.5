//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SXQuickLookLayoutAttributes : NSObject
{
    struct CGRect _thumbnailFrame;	// 8 = 0x8
    struct CGRect _errorLabelFrame;	// 40 = 0x28
}

@property(readonly, nonatomic) struct CGRect errorLabelFrame; // @synthesize errorLabelFrame=_errorLabelFrame;
@property(readonly, nonatomic) struct CGRect thumbnailFrame; // @synthesize thumbnailFrame=_thumbnailFrame;
- (id)initWithThumbnailFrame:(struct CGRect)arg1 errorLabelFrame:(struct CGRect)arg2;	// IMP=0x00000000000edecd

@end

