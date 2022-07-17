//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCColor, NSDictionary, NSString, NTPBTopStoriesStyleConfig;

@interface FCTopStoriesStyleConfiguration : NSObject
{
    NTPBTopStoriesStyleConfig *_pbConfig;	// 8 = 0x8
    NSDictionary *_configDict;	// 16 = 0x10
    unsigned long long _storyType;	// 24 = 0x18
    NSString *_label;	// 32 = 0x20
    FCColor *_foreground_color;	// 40 = 0x28
    FCColor *_dark_style_foreground_color;	// 48 = 0x30
    FCColor *_background_color;	// 56 = 0x38
    FCColor *_dark_style_background_color;	// 64 = 0x40
    NSString *_stringType;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000244409
@property(readonly, nonatomic) NSString *stringType; // @synthesize stringType=_stringType;
@property(readonly, nonatomic) FCColor *dark_style_background_color; // @synthesize dark_style_background_color=_dark_style_background_color;
@property(readonly, nonatomic) FCColor *background_color; // @synthesize background_color=_background_color;
@property(readonly, nonatomic) FCColor *dark_style_foreground_color; // @synthesize dark_style_foreground_color=_dark_style_foreground_color;
@property(readonly, nonatomic) FCColor *foreground_color; // @synthesize foreground_color=_foreground_color;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) unsigned long long storyType; // @synthesize storyType=_storyType;
- (unsigned long long)hash;	// IMP=0x0000000000244384
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002442d2
- (id)initWithConfigDictionary:(id)arg1;	// IMP=0x00000000002440aa
- (id)initWithPBTopStoriesStyleConfig:(id)arg1;	// IMP=0x0000000000243f05

@end
