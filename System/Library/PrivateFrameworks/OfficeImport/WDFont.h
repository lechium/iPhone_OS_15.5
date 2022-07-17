//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface WDFont : NSObject <NSCopying>
{
    NSString *mName;	// 8 = 0x8
    NSMutableArray *mAlternateNames;	// 16 = 0x10
    int mFontFamily;	// 24 = 0x18
    int mCharacterSet;	// 28 = 0x1c
    int mPitch;	// 32 = 0x20
}

+ (int)cpFontClassFromWdFontFamily:(int)arg1;	// IMP=0x00000000003f9bf4
- (void).cxx_destruct;	// IMP=0x00000000003fa095
- (id)description;	// IMP=0x00000000003fa057
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003f9ece
- (unsigned long long)hash;	// IMP=0x00000000003f9e7d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003f9dd8
- (id)initWithName:(id)arg1;	// IMP=0x00000000000bb6ef
- (id)init;	// IMP=0x00000000003f9d38
- (void)setPitch:(int)arg1;	// IMP=0x00000000000bb7ba
- (int)pitch;	// IMP=0x00000000003f9d2f
- (void)setCharacterSet:(int)arg1;	// IMP=0x00000000000bb7cc
- (int)characterSet;	// IMP=0x00000000003f9d26
- (void)setFontFamily:(int)arg1;	// IMP=0x00000000000bb7c3
- (int)fontFamily;	// IMP=0x00000000003f9d1d
- (id)secondName;	// IMP=0x00000000003f9cd1
- (void)addAlternateName:(id)arg1;	// IMP=0x00000000003f9c75
- (id)alternateNames;	// IMP=0x00000000003f9c67
- (void)setName:(id)arg1;	// IMP=0x00000000003f9c10
- (id)name;	// IMP=0x00000000000f4c42

@end
