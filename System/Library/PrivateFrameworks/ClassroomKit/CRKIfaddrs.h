//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRKIfaddrs : NSObject
{
    struct ifaddrs *mIfaddrs;	// 8 = 0x8
}

@property(readonly, nonatomic) CRKIfaddrs *next;
@property(readonly, copy, nonatomic) NSString *IPAddress;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic, getter=isInternetInterface) _Bool internetInterface;
- (id)initWithIfaddrs:(struct ifaddrs *)arg1;	// IMP=0x000000000004aa41

@end

