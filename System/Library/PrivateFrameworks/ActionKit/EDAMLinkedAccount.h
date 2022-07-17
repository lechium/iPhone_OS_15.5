//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface EDAMLinkedAccount
{
    NSNumber *_inAccountUserId;	// 8 = 0x8
    NSString *_shardId;	// 16 = 0x10
    NSString *_guid;	// 24 = 0x18
    NSNumber *_updateSequenceNum;	// 32 = 0x20
    NSString *_noteStoreUrl;	// 40 = 0x28
    NSString *_webApiUrlPrefix;	// 48 = 0x30
}

+ (id)structFields;	// IMP=0x0000000000238c52
+ (id)structName;	// IMP=0x0000000000238c45
- (void).cxx_destruct;	// IMP=0x0000000000238f27
@property(retain, nonatomic) NSString *webApiUrlPrefix; // @synthesize webApiUrlPrefix=_webApiUrlPrefix;
@property(retain, nonatomic) NSString *noteStoreUrl; // @synthesize noteStoreUrl=_noteStoreUrl;
@property(retain, nonatomic) NSNumber *updateSequenceNum; // @synthesize updateSequenceNum=_updateSequenceNum;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(retain, nonatomic) NSString *shardId; // @synthesize shardId=_shardId;
@property(retain, nonatomic) NSNumber *inAccountUserId; // @synthesize inAccountUserId=_inAccountUserId;

@end
