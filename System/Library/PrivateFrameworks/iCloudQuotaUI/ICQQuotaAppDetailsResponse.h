//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AAResponse.h>

@class NSArray, NSMutableArray;

@interface ICQQuotaAppDetailsResponse : AAResponse
{
    NSMutableArray *_apps;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004ae09
@property(readonly, nonatomic) NSArray *apps; // @synthesize apps=_apps;
- (id)description;	// IMP=0x000000000004ad70
- (void)addApps:(id)arg1;	// IMP=0x000000000004ad06
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;	// IMP=0x000000000004a8a0

@end

