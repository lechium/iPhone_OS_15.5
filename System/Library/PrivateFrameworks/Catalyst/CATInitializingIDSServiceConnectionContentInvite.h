//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Catalyst/CATInitializingIDSServiceConnectionMessageContent-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CATInitializingIDSServiceConnectionContentInvite : NSObject <CATInitializingIDSServiceConnectionMessageContent>
{
    NSDictionary *_userInfo;	// 8 = 0x8
}

+ (id)instanceWithDictionary:(id)arg1;	// IMP=0x000000000004a021
- (void).cxx_destruct;	// IMP=0x000000000004a097
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly, nonatomic) long long contentType;
- (id)initWithUserInfo:(id)arg1;	// IMP=0x0000000000049efe
- (id)init;	// IMP=0x0000000000049eea

@end

