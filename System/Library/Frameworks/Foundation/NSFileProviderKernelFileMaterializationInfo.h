//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@interface NSFileProviderKernelFileMaterializationInfo : NSObject <NSSecureCoding>
{
    long long size;	// 8 = 0x8
    long long offset;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001d84ab
@property(readonly) long long offset; // @synthesize offset;
@property(readonly) long long size; // @synthesize size;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d85b2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d851e
- (id)initWithSize:(long long)arg1 offset:(long long)arg2;	// IMP=0x00000000001d84b3

@end
