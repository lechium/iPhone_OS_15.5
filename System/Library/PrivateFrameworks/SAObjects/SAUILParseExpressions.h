//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SARemoteDevice;

@interface SAUILParseExpressions
{
}

+ (id)parseExpressionsWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000006d74
+ (id)parseExpressions;	// IMP=0x0000000000006d62
- (_Bool)requiresResponse;	// IMP=0x0000000000006dde
@property(retain, nonatomic) SARemoteDevice *targetDevice;
@property(copy, nonatomic) NSArray *expressions;
- (id)encodedClassName;	// IMP=0x0000000000006d55
- (id)groupIdentifier;	// IMP=0x0000000000006d41

@end

