//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSData, NSDictionary;

@interface ICStoreFileAssetFairPlayInfo : NSObject <NSCopying>
{
    NSDictionary *_responseSinfDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000c4dbc
@property(readonly, copy, nonatomic) NSDictionary *responseSinfDictionary; // @synthesize responseSinfDictionary=_responseSinfDictionary;
@property(readonly, copy, nonatomic) NSDictionary *purchaseBundleSinfDictionary;
@property(readonly, copy, nonatomic) NSData *sinf2Data;
@property(readonly, copy, nonatomic) NSData *sinfData;
@property(readonly, copy, nonatomic) NSData *pinfData;
@property(readonly, copy, nonatomic) NSData *dpInfoData;
@property(readonly, nonatomic) long long identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c4a34
- (id)initWithResponseSinfDictionary:(id)arg1;	// IMP=0x00000000000c49d7

@end

