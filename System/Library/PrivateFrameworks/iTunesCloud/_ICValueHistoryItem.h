//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _ICValueHistoryItem : NSObject <NSSecureCoding>
{
    unsigned long long _timestamp;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e4ad7
- (void).cxx_destruct;	// IMP=0x00000000000e4ac7
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e4a1b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e4923
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e489d
- (unsigned long long)hash;	// IMP=0x00000000000e4878
- (id)initWithValue:(id)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x00000000000e4802

@end

