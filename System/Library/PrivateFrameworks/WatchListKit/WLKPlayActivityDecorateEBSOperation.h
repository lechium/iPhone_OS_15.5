//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WLKPlayActivityDecorateEBSOperation
{
    NSString *_channelID;	// 8 = 0x8
    NSString *_externalContentID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002205b
@property(readonly, copy, nonatomic) NSString *externalContentID; // @synthesize externalContentID=_externalContentID;
@property(readonly, copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
- (id)initWithChannelID:(id)arg1 externalContentID:(id)arg2;	// IMP=0x0000000000021ebc

@end
