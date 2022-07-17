//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFormatter.h>

@class NSString, OITSULocale;

__attribute__((visibility("hidden")))
@interface OITSUDurationFormatter : NSFormatter
{
    NSString *mFormat;	// 8 = 0x8
    OITSULocale *mLocale;	// 16 = 0x10
    int mCompactStyleStartUnit;	// 24 = 0x18
}

@property(nonatomic) int compactStyleStartUnit; // @synthesize compactStyleStartUnit=mCompactStyleStartUnit;
@property(readonly) OITSULocale *locale; // @synthesize locale=mLocale;
@property(copy, nonatomic) NSString *format; // @synthesize format=mFormat;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;	// IMP=0x0000000000258b83
- (id)stringForObjectValue:(id)arg1;	// IMP=0x0000000000258aea
- (void)dealloc;	// IMP=0x0000000000258a92
- (void)p_commonInit;	// IMP=0x0000000000258a27
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002589db
- (id)init;	// IMP=0x000000000025898f
- (id)initWithLocale:(id)arg1;	// IMP=0x0000000000258928

@end
