//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSString;
@protocol PXLabeledValueType;

@interface PXLabeledValue : NSObject <NSCopying>
{
    _Bool _separator;	// 8 = 0x8
    id <PXLabeledValueType> _value;	// 16 = 0x10
    NSString *_localizedLabel;	// 24 = 0x18
}

+ (id)separatorLabeledValue;	// IMP=0x0000000000508911
- (void).cxx_destruct;	// IMP=0x00000000005088e9
@property(readonly, nonatomic, getter=isSeparator) _Bool separator; // @synthesize separator=_separator;
@property(readonly, nonatomic) NSString *localizedLabel; // @synthesize localizedLabel=_localizedLabel;
@property(readonly, nonatomic) id <PXLabeledValueType> value; // @synthesize value=_value;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005088c1
- (unsigned long long)hash;	// IMP=0x0000000000508882
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000050881f
- (_Bool)isEqualToLabeledValue:(id)arg1;	// IMP=0x0000000000508751
- (id)description;	// IMP=0x0000000000508703
- (id)initWithValue:(id)arg1 localizedLabel:(id)arg2;	// IMP=0x00000000005085f1
- (id)_initSeparator;	// IMP=0x0000000000508585
- (id)init;	// IMP=0x000000000050850b

@end
