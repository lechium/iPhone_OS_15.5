//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKStackedTextItem : NSObject
{
    _Bool _significantPrimary;	// 8 = 0x8
    _Bool _deemphasizedPrimary;	// 9 = 0x9
    _Bool _strikethroughPrimary;	// 10 = 0xa
    NSString *_groupingIdentifier;	// 16 = 0x10
    unsigned long long _numberOfContentRows;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSString *_primary;	// 40 = 0x28
    NSString *_secondary;	// 48 = 0x30
    NSString *_tertiary;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000491cf8
@property(nonatomic, getter=isStrikethroughPrimary) _Bool strikethroughPrimary; // @synthesize strikethroughPrimary=_strikethroughPrimary;
@property(nonatomic, getter=isDeemphasizedPrimary) _Bool deemphasizedPrimary; // @synthesize deemphasizedPrimary=_deemphasizedPrimary;
@property(nonatomic, getter=isSignificantPrimary) _Bool significantPrimary; // @synthesize significantPrimary=_significantPrimary;
@property(copy, nonatomic) NSString *tertiary; // @synthesize tertiary=_tertiary;
@property(copy, nonatomic) NSString *secondary; // @synthesize secondary=_secondary;
@property(copy, nonatomic) NSString *primary; // @synthesize primary=_primary;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long numberOfContentRows; // @synthesize numberOfContentRows=_numberOfContentRows;
@property(readonly, copy, nonatomic) NSString *groupingIdentifier; // @synthesize groupingIdentifier=_groupingIdentifier;
- (unsigned long long)hash;	// IMP=0x0000000000491b67
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000491a64
- (id)initWithNumberOfContentRows:(unsigned long long)arg1 groupingIdentifier:(id)arg2;	// IMP=0x00000000004919e6
- (id)init;	// IMP=0x00000000004919d0

@end

