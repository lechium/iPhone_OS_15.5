//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NSPDeviceIdentityStats
{
    _Bool _success;	// 8 = 0x8
    NSString *_errorDomain;	// 16 = 0x10
    long long _errorCode;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002dfdc
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (id)analyticsDict;	// IMP=0x000000000002de64
- (id)eventName;	// IMP=0x000000000002de57

@end

