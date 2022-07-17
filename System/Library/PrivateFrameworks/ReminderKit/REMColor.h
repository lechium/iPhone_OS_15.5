//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface REMColor : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _colorRGBSpace;	// 8 = 0x8
    double _blue;	// 16 = 0x10
    double _red;	// 24 = 0x18
    double _green;	// 32 = 0x20
    double _alpha;	// 40 = 0x28
    NSString *_daSymbolicColorName;	// 48 = 0x30
    NSString *_daHexString;	// 56 = 0x38
    NSString *_ckSymbolicColorName;	// 64 = 0x40
}

+ (id)colorWithDictionaryData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000818b2
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000081818
+ (id)brownColor;	// IMP=0x00000000000804da
+ (id)purpleColor;	// IMP=0x00000000000804a2
+ (id)orangeColor;	// IMP=0x000000000008046a
+ (id)magentaColor;	// IMP=0x0000000000080437
+ (id)yellowColor;	// IMP=0x0000000000080404
+ (id)cyanColor;	// IMP=0x00000000000803d1
+ (id)blueColor;	// IMP=0x000000000008039e
+ (id)greenColor;	// IMP=0x000000000008036b
+ (id)redColor;	// IMP=0x0000000000080338
+ (id)lightGrayColor;	// IMP=0x0000000000080306
+ (id)grayColor;	// IMP=0x00000000000802d4
+ (id)whiteColor;	// IMP=0x00000000000802a7
+ (id)blackColor;	// IMP=0x000000000008027a
+ (id)clearColor;	// IMP=0x0000000000080252
+ (id)colorWithHexString:(id)arg1;	// IMP=0x0000000000080209
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5;	// IMP=0x00000000000801af
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x000000000008015d
- (void).cxx_destruct;	// IMP=0x0000000000081ae2
@property(readonly, nonatomic) NSString *ckSymbolicColorName; // @synthesize ckSymbolicColorName=_ckSymbolicColorName;
@property(readonly, nonatomic) NSString *daHexString; // @synthesize daHexString=_daHexString;
@property(readonly, nonatomic) NSString *daSymbolicColorName; // @synthesize daSymbolicColorName=_daSymbolicColorName;
@property(readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) double green; // @synthesize green=_green;
@property(readonly, nonatomic) double red; // @synthesize red=_red;
@property(readonly, nonatomic) double blue; // @synthesize blue=_blue;
@property(readonly, nonatomic) unsigned long long colorRGBSpace; // @synthesize colorRGBSpace=_colorRGBSpace;
- (id)archivedDictionaryDataWithError:(id *)arg1;	// IMP=0x00000000000819ce
- (id)description;	// IMP=0x0000000000081820
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000815f8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000081477
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008146c
- (unsigned long long)hash;	// IMP=0x0000000000081399
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000080fbd
- (id)hexStringWithAlpha;	// IMP=0x0000000000080ee1
- (id)hexString;	// IMP=0x0000000000080e32
- (id)initWithCKSymbolicColorName:(id)arg1 hexString:(id)arg2;	// IMP=0x0000000000080c8e
- (id)initWithDASymbolicColorName:(id)arg1 daHexString:(id)arg2;	// IMP=0x0000000000080c79
- (id)initWithDASymbolicColorName:(id)arg1 daHexString:(id)arg2 ckSymbolicColorName:(id)arg3;	// IMP=0x0000000000080a74
- (id)initWithHexString:(id)arg1;	// IMP=0x0000000000080730
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5 daSymbolicColorName:(id)arg6 daHexString:(id)arg7 ckSymbolicColorName:(id)arg8;	// IMP=0x0000000000080626
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5;	// IMP=0x0000000000080551
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x0000000000080537
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;	// IMP=0x000000000008051c

@end
