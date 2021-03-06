//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSWPLoadableFontInfo : NSObject
{
    NSString *_groupUID;	// 8 = 0x8
    NSString *_fontPath;	// 16 = 0x10
    NSString *_fontName;	// 24 = 0x18
    NSString *_fontFamily;	// 32 = 0x20
    struct CGFont *_cgFont;	// 40 = 0x28
    unsigned char _attemptedLoad;	// 48 = 0x30
    _Bool _obfuscated;	// 49 = 0x31
}

@property(nonatomic) _Bool obfuscated; // @synthesize obfuscated=_obfuscated;
@property(nonatomic) struct CGFont *cgFont; // @synthesize cgFont=_cgFont;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(copy, nonatomic) NSString *fontPath; // @synthesize fontPath=_fontPath;
@property(copy, nonatomic) NSString *groupUID; // @synthesize groupUID=_groupUID;
- (id)description;	// IMP=0x0000000000341aa4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000341a26
- (void)dealloc;	// IMP=0x00000000003419bc

@end

