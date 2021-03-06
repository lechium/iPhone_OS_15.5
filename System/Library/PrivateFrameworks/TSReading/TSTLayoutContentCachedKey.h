//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@class NSString, TSWPParagraphStyle;

@interface TSTLayoutContentCachedKey : NSObject <NSCopying>
{
    NSString *mString;	// 8 = 0x8
    double mWidth;	// 16 = 0x10
    double mHeight;	// 24 = 0x18
    TSWPParagraphStyle *mParagraphStyle;	// 32 = 0x20
    _Bool mCellWraps;	// 40 = 0x28
    int mValueType;	// 44 = 0x2c
    struct UIEdgeInsets mPaddingInsets;	// 48 = 0x30
    unsigned int mVerticalAlignment;	// 80 = 0x50
    int mWritingDirection;	// 84 = 0x54
}

@property(readonly, nonatomic) int writingDirection; // @synthesize writingDirection=mWritingDirection;
@property(readonly, nonatomic) unsigned int verticalAlignment; // @synthesize verticalAlignment=mVerticalAlignment;
@property(readonly, nonatomic) struct UIEdgeInsets paddingInsets; // @synthesize paddingInsets=mPaddingInsets;
@property(readonly, nonatomic) int valueType; // @synthesize valueType=mValueType;
@property(readonly, nonatomic) _Bool cellWraps; // @synthesize cellWraps=mCellWraps;
@property(readonly, nonatomic) TSWPParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=mParagraphStyle;
@property(readonly, nonatomic) double height; // @synthesize height=mHeight;
@property(readonly, nonatomic) double width; // @synthesize width=mWidth;
@property(readonly, nonatomic) NSString *string; // @synthesize string=mString;
- (id)description;	// IMP=0x00000000003af562
- (_Bool)isEqualToLayoutContentCachedKey:(id)arg1;	// IMP=0x00000000003af386
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003af339
- (unsigned long long)hash;	// IMP=0x00000000003af296
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003af16e
- (void)dealloc;	// IMP=0x00000000003af115
- (id)initWithString:(id)arg1 width:(double)arg2 height:(double)arg3 paragraphStyle:(id)arg4 cellWraps:(_Bool)arg5 valueType:(int)arg6 paddingInsets:(struct UIEdgeInsets)arg7 verticalAlignment:(unsigned int)arg8 writingDirection:(int)arg9;	// IMP=0x00000000003af057

@end

