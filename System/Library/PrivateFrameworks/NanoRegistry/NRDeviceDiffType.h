//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NSCopying-Protocol.h>
#import <NanoRegistry/NSSecureCoding-Protocol.h>

@class NRDeviceDiff, NRPBDeviceDiffType;

@interface NRDeviceDiffType : NSObject <NSCopying, NSSecureCoding>
{
    NRDeviceDiff *_diff;	// 8 = 0x8
    unsigned long long _changeType;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000471bc
- (void).cxx_destruct;	// IMP=0x00000000000476e4
@property(readonly, nonatomic) unsigned long long changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) NRDeviceDiff *diff; // @synthesize diff=_diff;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000047635
- (id)description;	// IMP=0x0000000000047585
- (unsigned long long)hash;	// IMP=0x000000000004754d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000047500
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004746f
@property(readonly, nonatomic) NRPBDeviceDiffType *protobuf;
- (id)initWithProtobuf:(id)arg1;	// IMP=0x0000000000047326
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000471c4
- (id)initWithDiff:(id)arg1 andChangeType:(unsigned long long)arg2;	// IMP=0x000000000004715c

@end

