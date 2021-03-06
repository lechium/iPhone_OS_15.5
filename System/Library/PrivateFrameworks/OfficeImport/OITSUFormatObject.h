//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>
#import <OfficeImport/NSMutableCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface OITSUFormatObject : NSObject <NSCopying, NSMutableCopying>
{
    CDStruct_730f14de mFormatStruct;	// 8 = 0x8
    _Bool mUseExpandedContents;	// 48 = 0x30
}

+ (id)defaultDurationFormat;	// IMP=0x000000000027f155
+ (id)defaultDateFormat:(id)arg1;	// IMP=0x000000000027f03c
@property(readonly, nonatomic) _Bool useExpandedContents; // @synthesize useExpandedContents=mUseExpandedContents;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000027f4fc
- (unsigned long long)hash;	// IMP=0x000000000027f498
- (void)p_setFormatStruct:(CDStruct_730f14de)arg1;	// IMP=0x000000000027f42f
@property(readonly, nonatomic) CDStruct_730f14de formatStruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027f38e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027f383
- (void)dealloc;	// IMP=0x000000000027f333
- (id)initWithTSUFormatFormatStruct:(CDStruct_730f14de)arg1;	// IMP=0x000000000027f31f
- (id)initWithTSUFormatFormatStruct:(CDStruct_730f14de)arg1 useExpandedContents:(_Bool)arg2;	// IMP=0x000000000027f297
- (id)init;	// IMP=0x000000000027f1c6

@end

