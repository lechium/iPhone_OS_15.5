//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface APOdmlAppVector
{
    unsigned long long _adamID;	// 8 = 0x8
}

@property(readonly, nonatomic) unsigned long long adamID; // @synthesize adamID=_adamID;
- (id)description;	// IMP=0x000000000001c792
- (id)data;	// IMP=0x000000000001c6ae
- (id)initWithString:(id)arg1 version:(id)arg2;	// IMP=0x000000000001c0d4
- (id)initWithVersion:(id)arg1 header:(struct APOdmlAppVectorHeader *)arg2 floats:(float *)arg3;	// IMP=0x000000000001bfbc

@end

