//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADGradientFillStop : NSObject <NSCopying>
{
    OADColor *mColor;	// 8 = 0x8
    float mPosition;	// 16 = 0x10
}

+ (void)addStopWithColor:(id)arg1 position:(float)arg2 toArray:(id)arg3;	// IMP=0x00000000003120a4
- (void).cxx_destruct;	// IMP=0x0000000000312166
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000156a50
- (unsigned long long)hash;	// IMP=0x000000000031205c
- (_Bool)usesPlaceholderColor;	// IMP=0x0000000000312032
- (void)setStyleColor:(id)arg1;	// IMP=0x00000000001975e3
- (float)position;	// IMP=0x0000000000312024
- (id)color;	// IMP=0x000000000010b6ee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001974fd
- (id)initWithColor:(id)arg1 position:(float)arg2;	// IMP=0x0000000000027103

@end
