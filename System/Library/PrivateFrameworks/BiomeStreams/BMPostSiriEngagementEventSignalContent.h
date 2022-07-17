//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSString;

@interface BMPostSiriEngagementEventSignalContent <BMStoreData>
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000006940c
- (void).cxx_destruct;	// IMP=0x0000000000069702
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000694fc
- (id)serialize;	// IMP=0x0000000000069496
@property(readonly, nonatomic) unsigned int dataVersion;
- (void)writeTo:(id)arg1;	// IMP=0x00000000000693a7
- (id)initByReadFrom:(id)arg1;	// IMP=0x00000000000691b8
@property(readonly, copy) NSString *description;
- (id)initWithKey:(id)arg1 value:(id)arg2;	// IMP=0x0000000000069080

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
