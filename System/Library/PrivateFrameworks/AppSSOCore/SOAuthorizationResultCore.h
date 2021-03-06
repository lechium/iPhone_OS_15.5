//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSHTTPURLResponse;

@interface SOAuthorizationResultCore : NSObject
{
    NSDictionary *_httpAuthorizationHeaders;	// 8 = 0x8
    NSHTTPURLResponse *_httpResponse;	// 16 = 0x10
    NSData *_httpBody;	// 24 = 0x18
    NSArray *_privateKeys;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000005332
@property(retain, nonatomic) NSArray *privateKeys; // @synthesize privateKeys=_privateKeys;
@property(retain, nonatomic) NSData *httpBody; // @synthesize httpBody=_httpBody;
@property(copy, nonatomic) NSHTTPURLResponse *httpResponse; // @synthesize httpResponse=_httpResponse;
@property(retain, nonatomic) NSDictionary *httpAuthorizationHeaders; // @synthesize httpAuthorizationHeaders=_httpAuthorizationHeaders;
- (id)initWithHTTPResponse:(id)arg1 httpBody:(id)arg2;	// IMP=0x0000000000005205
- (id)initWithHTTPAuthorizationHeaders:(id)arg1;	// IMP=0x0000000000005170
- (id)init;	// IMP=0x000000000000510a

@end

