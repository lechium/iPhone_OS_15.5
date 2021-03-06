//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSString, UISystemNavigationAction;

__attribute__((visibility("hidden")))
@interface UIStatusBarComposedData : NSObject <NSCopying>
{
    CDStruct_e9def42b _rawData;	// 8 = 0x8
    _Bool _itemEnabled[50];	// 3888 = 0xf30
    NSString *_doubleHeightStatus;	// 3944 = 0xf68
    UISystemNavigationAction *_systemNavigationItem;	// 3952 = 0xf70
}

- (void).cxx_destruct;	// IMP=0x0000000000e656d2
@property(retain, nonatomic) UISystemNavigationAction *systemNavigationItem; // @synthesize systemNavigationItem=_systemNavigationItem;
@property(copy, nonatomic) NSString *doubleHeightStatus; // @synthesize doubleHeightStatus=_doubleHeightStatus;
- (id)description;	// IMP=0x0000000000e65519
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e6530f
- (void)setItem:(int)arg1 enabled:(_Bool)arg2;	// IMP=0x0000000000e652fb
- (_Bool)isItemEnabled:(int)arg1;	// IMP=0x0000000000e652e0
@property(readonly, nonatomic) CDStruct_e9def42b *rawData;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e65211
- (id)initWithRawData:(const CDStruct_e9def42b *)arg1;	// IMP=0x0000000000e651a8

@end

