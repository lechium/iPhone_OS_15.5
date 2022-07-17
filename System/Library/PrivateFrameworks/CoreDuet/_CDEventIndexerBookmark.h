//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSDate;

@interface _CDEventIndexerBookmark : NSObject <NSSecureCoding>
{
    NSDate *_earliestCreationDate;	// 8 = 0x8
    NSDate *_latestCreationDate;	// 16 = 0x10
    NSDate *_latestTombstoneDate;	// 24 = 0x18
    long long _version;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000012aa81
- (void).cxx_destruct;	// IMP=0x000000000012afd9
- (id)description;	// IMP=0x000000000012af0d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012ad2b
- (unsigned long long)hash;	// IMP=0x000000000012ac6b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012ab9e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012aa89

@end
