//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/NSCopying-Protocol.h>
#import <SpringBoardServices/NSSecureCoding-Protocol.h>

@class NSArray;

@interface SBSHomeScreenServiceArrayOfNumbers : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_array;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000017679
- (void).cxx_destruct;	// IMP=0x00000000000177a6
@property(readonly, copy, nonatomic) NSArray *array; // @synthesize array=_array;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000176a4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000017681
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001766e
- (id)init;	// IMP=0x0000000000017655
- (id)initWithArray:(id)arg1;	// IMP=0x00000000000175e2

@end
