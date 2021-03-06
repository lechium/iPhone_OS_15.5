//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthRecordsExtraction/NSCopying-Protocol.h>

@class NSString;

@interface _HDUnresolvableReferenceHint : NSObject <NSCopying>
{
    NSString *_reference;	// 8 = 0x8
    unsigned long long _hint;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000312a1
@property(readonly, nonatomic) unsigned long long hint; // @synthesize hint=_hint;
@property(readonly, copy, nonatomic) NSString *reference; // @synthesize reference=_reference;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000311b8
- (unsigned long long)hash;	// IMP=0x0000000000031193
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000031188
- (id)initWithReference:(id)arg1 hint:(unsigned long long)arg2;	// IMP=0x000000000003110a

@end

