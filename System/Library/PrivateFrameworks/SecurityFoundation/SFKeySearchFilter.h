//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSArray;

@interface SFKeySearchFilter : NSObject <NSCopying, NSSecureCoding>
{
    id _keySearchFilterInternal;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000979a
- (void).cxx_destruct;	// IMP=0x00000000000098d9
@property(copy, nonatomic) NSArray *domains;
@property(copy, nonatomic) NSArray *specifiers;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000097d7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000097d1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000097a2

@end

