//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface WLKBasicShowMetadata
{
    NSDate *_releaseDate;	// 8 = 0x8
    NSDate *_finaleDate;	// 16 = 0x10
    NSString *_network;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003a584
@property(readonly, copy, nonatomic) NSString *network; // @synthesize network=_network;
@property(readonly, nonatomic) NSDate *finaleDate; // @synthesize finaleDate=_finaleDate;
@property(readonly, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
- (id)init;	// IMP=0x000000000003a53d
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000003a428

@end
