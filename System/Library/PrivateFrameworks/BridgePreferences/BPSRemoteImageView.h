//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class NSString;

@interface BPSRemoteImageView : UIImageView
{
    NSString *_desiredImageName;	// 8 = 0x8
    NSString *_fallbackImageName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000155fd
@property(copy, nonatomic) NSString *fallbackImageName; // @synthesize fallbackImageName=_fallbackImageName;
@property(copy, nonatomic) NSString *desiredImageName; // @synthesize desiredImageName=_desiredImageName;
- (void)updateImagesWithAnimation:(_Bool)arg1;	// IMP=0x000000000001529a
- (void)dealloc;	// IMP=0x000000000001524d
- (id)init;	// IMP=0x00000000000151d0

@end

