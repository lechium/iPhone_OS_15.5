//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSArray;

@interface ASDPurchaseResponse <NSCopying, NSSecureCoding>
{
    NSArray *_items;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006fcb0
- (void).cxx_destruct;	// IMP=0x000000000006fe54
@property(readonly) NSArray *items; // @synthesize items=_items;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006fdba
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006fcb8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006fc30
- (id)initWithPurchaseResponseItems:(id)arg1;	// IMP=0x000000000006fbc2
- (id)init;	// IMP=0x000000000006fba9

@end

