//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIImage;

@interface NTKGreenfieldEncodedRecipe : NSObject
{
    NSURL *_watchFaceDataUrl;	// 8 = 0x8
    UIImage *_watchFaceImage;	// 16 = 0x10
    NSString *_watchFaceName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001fd6af
@property(retain, nonatomic) NSString *watchFaceName; // @synthesize watchFaceName=_watchFaceName;
@property(retain, nonatomic) UIImage *watchFaceImage; // @synthesize watchFaceImage=_watchFaceImage;
@property(retain, nonatomic) NSURL *watchFaceDataUrl; // @synthesize watchFaceDataUrl=_watchFaceDataUrl;
- (id)initWithWatchFaceDataUrl:(id)arg1 watchFaceImage:(id)arg2 watchFaceName:(id)arg3;	// IMP=0x00000000001fd5a7

@end

