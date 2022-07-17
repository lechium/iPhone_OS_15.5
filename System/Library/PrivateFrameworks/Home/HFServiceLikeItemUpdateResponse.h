//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFCharacteristicBatchReadResponse, HFCharacteristicValueDisplayMetadata, NSDictionary;

@interface HFServiceLikeItemUpdateResponse : NSObject
{
    HFCharacteristicValueDisplayMetadata *_displayMetadata;	// 8 = 0x8
    HFCharacteristicBatchReadResponse *_readResponse;	// 16 = 0x10
    NSDictionary *_standardResults;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001b2977
@property(readonly, nonatomic) NSDictionary *standardResults; // @synthesize standardResults=_standardResults;
@property(readonly, nonatomic) HFCharacteristicBatchReadResponse *readResponse; // @synthesize readResponse=_readResponse;
@property(readonly, nonatomic) HFCharacteristicValueDisplayMetadata *displayMetadata; // @synthesize displayMetadata=_displayMetadata;
- (id)initWithDisplayMetadata:(id)arg1 readResponse:(id)arg2 standardResults:(id)arg3;	// IMP=0x00000000001b28a2

@end
