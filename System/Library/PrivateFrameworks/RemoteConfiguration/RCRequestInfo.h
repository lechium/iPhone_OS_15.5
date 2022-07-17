//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface RCRequestInfo : NSObject
{
    NSString *_requestKey;	// 8 = 0x8
    NSString *_responseKey;	// 16 = 0x10
    NSURL *_fallbackURL;	// 24 = 0x18
    unsigned long long _requestType;	// 32 = 0x20
    NSArray *_additionalChangeTags;	// 40 = 0x28
    unsigned long long _requestFeedType;	// 48 = 0x30
    NSString *_requestCacheKey;	// 56 = 0x38
    NSMutableDictionary *_mutableAdditionalFields;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000018831
@property(readonly, nonatomic) NSMutableDictionary *mutableAdditionalFields; // @synthesize mutableAdditionalFields=_mutableAdditionalFields;
@property(readonly, nonatomic) NSString *requestCacheKey; // @synthesize requestCacheKey=_requestCacheKey;
@property(readonly, nonatomic) unsigned long long requestFeedType; // @synthesize requestFeedType=_requestFeedType;
@property(readonly, nonatomic) NSArray *additionalChangeTags; // @synthesize additionalChangeTags=_additionalChangeTags;
@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(readonly, nonatomic) NSURL *fallbackURL; // @synthesize fallbackURL=_fallbackURL;
@property(readonly, copy, nonatomic) NSString *responseKey; // @synthesize responseKey=_responseKey;
@property(readonly, copy, nonatomic) NSString *requestKey; // @synthesize requestKey=_requestKey;
@property(readonly) NSDictionary *allAdditionalFields;
- (void)setValue:(id)arg1 forAdditionalField:(id)arg2;	// IMP=0x00000000000186f7
- (id)description;	// IMP=0x00000000000185a6
- (unsigned long long)hash;	// IMP=0x00000000000183f5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000180c8
- (id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3 requestType:(unsigned long long)arg4 additionalChangeTags:(id)arg5 requestFeedType:(unsigned long long)arg6;	// IMP=0x0000000000017ef5
- (id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3 requestType:(unsigned long long)arg4 additionalChangeTags:(id)arg5;	// IMP=0x0000000000017e2f
- (id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3;	// IMP=0x0000000000017d89

@end
