//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HKCountrySetBitmaskPath : NSObject
{
    unsigned long long _bitmask;	// 8 = 0x8
    long long _index;	// 16 = 0x10
}

+ (id)pathWithBitmask:(unsigned long long)arg1 index:(long long)arg2;	// IMP=0x00000000001732d6
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) unsigned long long bitmask; // @synthesize bitmask=_bitmask;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000173345
- (unsigned long long)hash;	// IMP=0x0000000000173337

@end

