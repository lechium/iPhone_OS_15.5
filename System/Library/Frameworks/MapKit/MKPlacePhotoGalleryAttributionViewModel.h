//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MKPlacePhotoGalleryAttributionViewModel : NSObject
{
    NSString *_titleText;	// 8 = 0x8
    NSString *_subtitleText;	// 16 = 0x10
    long long _accessoryStyle;	// 24 = 0x18
}

+ (id)viewModelFromMapItem:(id)arg1 photo:(id)arg2;	// IMP=0x000000000017d1a9
- (void).cxx_destruct;	// IMP=0x000000000017d444
@property(nonatomic) long long accessoryStyle; // @synthesize accessoryStyle=_accessoryStyle;
@property(retain, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;

@end
