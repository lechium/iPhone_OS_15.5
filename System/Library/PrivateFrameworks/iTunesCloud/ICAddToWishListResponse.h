//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ICAddToWishListResponse : NSObject
{
    NSDictionary *_responseDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000012cf0a
@property(readonly, nonatomic) NSString *message;
@property(readonly, nonatomic) long long statusCode;
- (id)description;	// IMP=0x000000000012ce07
- (id)initWithResponseDictionary:(id)arg1;	// IMP=0x000000000012cd9c

@end

