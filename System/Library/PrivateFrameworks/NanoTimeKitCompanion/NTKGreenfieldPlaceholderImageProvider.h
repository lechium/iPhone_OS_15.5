//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClockKit/CLKImageProvider.h>

@class UIImage;

@interface NTKGreenfieldPlaceholderImageProvider : CLKImageProvider
{
    double _progress;	// 8 = 0x8
    UIImage *_appIcon;	// 16 = 0x10
}

+ (id)provider;	// IMP=0x000000000023c8d3
- (void).cxx_destruct;	// IMP=0x000000000023cae9
@property(retain, nonatomic) UIImage *appIcon; // @synthesize appIcon=_appIcon;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023ca23
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023c946

@end

