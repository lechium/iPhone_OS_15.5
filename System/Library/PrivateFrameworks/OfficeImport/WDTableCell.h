//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WDTableCellProperties, WDTableRow, WDText;

__attribute__((visibility("hidden")))
@interface WDTableCell : NSObject
{
    unsigned long long mIndex;	// 8 = 0x8
    WDTableCellProperties *mProperties;	// 16 = 0x10
    WDText *mText;	// 24 = 0x18
    NSString *mIdentifier;	// 32 = 0x20
    _Bool mUseTrackedProperties;	// 40 = 0x28
    WDTableRow *mRow;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000407cae
@property(readonly) __weak WDTableRow *row; // @synthesize row=mRow;
- (id)description;	// IMP=0x0000000000407c70
- (void)setIdentifier:(id)arg1;	// IMP=0x0000000000407c19
- (id)identifier;	// IMP=0x0000000000407c0b
- (id)text;	// IMP=0x00000000000e8f92
- (void)clearProperties;	// IMP=0x0000000000407bf1
- (id)properties;	// IMP=0x00000000000e80c0
- (long long)compareIndex:(id)arg1;	// IMP=0x0000000000407bd3
- (unsigned long long)index;	// IMP=0x0000000000407bc9
- (void)setUseTrackedProperties:(_Bool)arg1;	// IMP=0x0000000000407bc0
- (_Bool)useTrackedProperties;	// IMP=0x0000000000407bb7
- (id)initWithRow:(id)arg1 at:(unsigned long long)arg2;	// IMP=0x00000000000e7b58

@end

